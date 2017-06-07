
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    mlacp_iccp_group_item(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem>())
{
    mlacp_iccp_group_item->parent = this;

    yang_name = "mlacp-iccp-group"; yang_parent_name = "mlacp-iccp-groups";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::~MlacpIccpGroup()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (mlacp_iccp_group_item !=  nullptr && mlacp_iccp_group_item->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (mlacp_iccp_group_item !=  nullptr && mlacp_iccp_group_item->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/mlacp-iccp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-iccp-group-item")
    {
        if(mlacp_iccp_group_item == nullptr)
        {
            mlacp_iccp_group_item = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem>();
        }
        return mlacp_iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_iccp_group_item != nullptr)
    {
        children["mlacp-iccp-group-item"] = mlacp_iccp_group_item;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::MlacpIccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-iccp-group-item"; yang_parent_name = "mlacp-iccp-group";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::~MlacpIccpGroupItem()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpIccpGroupItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{
    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-iccp-group-item";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(connect_timer_running.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(singleton.operation);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.operation)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_state.operation)
	|| is_set(ldp_id.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(node_state.operation)
	|| is_set(version_number.operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.operation)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.operation)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.operation)) leaf_name_data.push_back(version_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "node-state")
    {
        node_state = value;
    }
    if(value_path == "version-number")
    {
        version_number = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemId' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.operation)) leaf_name_data.push_back(system_prio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system-id";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemMacAddr' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.operation)) leaf_name_data.push_back(macaddr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{
    yang_name = "bundle-data"; yang_parent_name = "mlacp-iccp-group-item";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::~BundleData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bundle_interface_key.operation)
	|| is_set(media_type.operation)
	|| is_set(redundancy_object_id.operation);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.operation)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.operation)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mlacp_member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
    }
    if(value_path == "media-type")
    {
        media_type = value;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(aggregator_id.operation)
	|| is_set(bundle_name.operation)
	|| is_set(bundle_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(port_priority.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpBundleData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.operation)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.operation)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{
    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data";
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_priority.operation)
	|| is_set(interface_handle.operation)
	|| is_set(member_state.operation)
	|| is_set(mlacp_node_id.operation)
	|| is_set(operational_priority.operation)
	|| is_set(port_name.operation)
	|| is_set(port_number.operation);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpMemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.operation)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.operation)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
    }
    if(value_path == "port-name")
    {
        port_name = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
}

BundleInformation::MacAllocation::MacAllocation()
    :
    mac_allocation_global(std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal>())
{
    mac_allocation_global->parent = this;

    yang_name = "mac-allocation"; yang_parent_name = "bundle-information";
}

BundleInformation::MacAllocation::~MacAllocation()
{
}

bool BundleInformation::MacAllocation::has_data() const
{
    return (mac_allocation_global !=  nullptr && mac_allocation_global->has_data());
}

bool BundleInformation::MacAllocation::has_operation() const
{
    return is_set(operation)
	|| (mac_allocation_global !=  nullptr && mac_allocation_global->has_operation());
}

std::string BundleInformation::MacAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation";

    return path_buffer.str();

}

const EntityPath BundleInformation::MacAllocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-allocation-global")
    {
        if(mac_allocation_global == nullptr)
        {
            mac_allocation_global = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal>();
        }
        return mac_allocation_global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_allocation_global != nullptr)
    {
        children["mac-allocation-global"] = mac_allocation_global;
    }

    return children;
}

void BundleInformation::MacAllocation::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobal()
    :
    mac_allocation_global_item(std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem>())
{
    mac_allocation_global_item->parent = this;

    yang_name = "mac-allocation-global"; yang_parent_name = "mac-allocation";
}

BundleInformation::MacAllocation::MacAllocationGlobal::~MacAllocationGlobal()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_data() const
{
    return (mac_allocation_global_item !=  nullptr && mac_allocation_global_item->has_data());
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_operation() const
{
    return is_set(operation)
	|| (mac_allocation_global_item !=  nullptr && mac_allocation_global_item->has_operation());
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation-global";

    return path_buffer.str();

}

const EntityPath BundleInformation::MacAllocation::MacAllocationGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::MacAllocationGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-allocation-global-item")
    {
        if(mac_allocation_global_item == nullptr)
        {
            mac_allocation_global_item = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem>();
        }
        return mac_allocation_global_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_allocation_global_item != nullptr)
    {
        children["mac-allocation-global-item"] = mac_allocation_global_item;
    }

    return children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAllocationGlobalItem()
{
    yang_name = "mac-allocation-global-item"; yang_parent_name = "mac-allocation-global";
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::~MacAllocationGlobalItem()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_data() const
{
    for (std::size_t index=0; index<mac_address.size(); index++)
    {
        if(mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_operation() const
{
    for (std::size_t index=0; index<mac_address.size(); index++)
    {
        if(mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation-global-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/mac-allocation-global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        for(auto const & c : mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress>();
        c->parent = this;
        mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "mac-allocation-global-item";
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/mac-allocation-global/mac-allocation-global-item/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::Events::Events()
    :
    events_bundles(std::make_shared<BundleInformation::Events::EventsBundles>())
	,events_members(std::make_shared<BundleInformation::Events::EventsMembers>())
{
    events_bundles->parent = this;

    events_members->parent = this;

    yang_name = "events"; yang_parent_name = "bundle-information";
}

BundleInformation::Events::~Events()
{
}

bool BundleInformation::Events::has_data() const
{
    return (events_bundles !=  nullptr && events_bundles->has_data())
	|| (events_members !=  nullptr && events_members->has_data());
}

bool BundleInformation::Events::has_operation() const
{
    return is_set(operation)
	|| (events_bundles !=  nullptr && events_bundles->has_operation())
	|| (events_members !=  nullptr && events_members->has_operation());
}

std::string BundleInformation::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundles")
    {
        if(events_bundles == nullptr)
        {
            events_bundles = std::make_shared<BundleInformation::Events::EventsBundles>();
        }
        return events_bundles;
    }

    if(child_yang_name == "events-members")
    {
        if(events_members == nullptr)
        {
            events_members = std::make_shared<BundleInformation::Events::EventsMembers>();
        }
        return events_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bundles != nullptr)
    {
        children["events-bundles"] = events_bundles;
    }

    if(events_members != nullptr)
    {
        children["events-members"] = events_members;
    }

    return children;
}

void BundleInformation::Events::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Events::EventsMembers::EventsMembers()
{
    yang_name = "events-members"; yang_parent_name = "events";
}

BundleInformation::Events::EventsMembers::~EventsMembers()
{
}

bool BundleInformation::Events::EventsMembers::has_data() const
{
    for (std::size_t index=0; index<events_member.size(); index++)
    {
        if(events_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsMembers::has_operation() const
{
    for (std::size_t index=0; index<events_member.size(); index++)
    {
        if(events_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Events::EventsMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-member")
    {
        for(auto const & c : events_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember>();
        c->parent = this;
        events_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_member_ancestor(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor>())
	,events_member_item(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem>())
{
    events_member_ancestor->parent = this;

    events_member_item->parent = this;

    yang_name = "events-member"; yang_parent_name = "events-members";
}

BundleInformation::Events::EventsMembers::EventsMember::~EventsMember()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_data() const
{
    return member_interface.is_set
	|| (events_member_ancestor !=  nullptr && events_member_ancestor->has_data())
	|| (events_member_item !=  nullptr && events_member_item->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (events_member_ancestor !=  nullptr && events_member_ancestor->has_operation())
	|| (events_member_item !=  nullptr && events_member_item->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/events-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-member-ancestor")
    {
        if(events_member_ancestor == nullptr)
        {
            events_member_ancestor = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor>();
        }
        return events_member_ancestor;
    }

    if(child_yang_name == "events-member-item")
    {
        if(events_member_item == nullptr)
        {
            events_member_item = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem>();
        }
        return events_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_member_ancestor != nullptr)
    {
        children["events-member-ancestor"] = events_member_ancestor;
    }

    if(events_member_item != nullptr)
    {
        children["events-member-item"] = events_member_item;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::EventsMemberItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-member-item"; yang_parent_name = "events-member";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::~EventsMemberItem()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMemberItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-member-item";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::EventsMemberAncestor()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-member-ancestor"; yang_parent_name = "events-member";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::~EventsMemberAncestor()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-member-ancestor";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMemberAncestor' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-member-ancestor";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::~Items()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundles()
{
    yang_name = "events-bundles"; yang_parent_name = "events";
}

BundleInformation::Events::EventsBundles::~EventsBundles()
{
}

bool BundleInformation::Events::EventsBundles::has_data() const
{
    for (std::size_t index=0; index<events_bundle.size(); index++)
    {
        if(events_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::has_operation() const
{
    for (std::size_t index=0; index<events_bundle.size(); index++)
    {
        if(events_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Events::EventsBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle")
    {
        for(auto const & c : events_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle>();
        c->parent = this;
        events_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_bundle_ancestor(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor>())
	,events_bundle_children_members(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers>())
	,events_bundle_descendant(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant>())
	,events_bundle_item(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem>())
{
    events_bundle_ancestor->parent = this;

    events_bundle_children_members->parent = this;

    events_bundle_descendant->parent = this;

    events_bundle_item->parent = this;

    yang_name = "events-bundle"; yang_parent_name = "events-bundles";
}

BundleInformation::Events::EventsBundles::EventsBundle::~EventsBundle()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_bundle_ancestor !=  nullptr && events_bundle_ancestor->has_data())
	|| (events_bundle_children_members !=  nullptr && events_bundle_children_members->has_data())
	|| (events_bundle_descendant !=  nullptr && events_bundle_descendant->has_data())
	|| (events_bundle_item !=  nullptr && events_bundle_item->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (events_bundle_ancestor !=  nullptr && events_bundle_ancestor->has_operation())
	|| (events_bundle_children_members !=  nullptr && events_bundle_children_members->has_operation())
	|| (events_bundle_descendant !=  nullptr && events_bundle_descendant->has_operation())
	|| (events_bundle_item !=  nullptr && events_bundle_item->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events/events-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle-ancestor")
    {
        if(events_bundle_ancestor == nullptr)
        {
            events_bundle_ancestor = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor>();
        }
        return events_bundle_ancestor;
    }

    if(child_yang_name == "events-bundle-children-members")
    {
        if(events_bundle_children_members == nullptr)
        {
            events_bundle_children_members = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers>();
        }
        return events_bundle_children_members;
    }

    if(child_yang_name == "events-bundle-descendant")
    {
        if(events_bundle_descendant == nullptr)
        {
            events_bundle_descendant = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant>();
        }
        return events_bundle_descendant;
    }

    if(child_yang_name == "events-bundle-item")
    {
        if(events_bundle_item == nullptr)
        {
            events_bundle_item = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem>();
        }
        return events_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bundle_ancestor != nullptr)
    {
        children["events-bundle-ancestor"] = events_bundle_ancestor;
    }

    if(events_bundle_children_members != nullptr)
    {
        children["events-bundle-children-members"] = events_bundle_children_members;
    }

    if(events_bundle_descendant != nullptr)
    {
        children["events-bundle-descendant"] = events_bundle_descendant;
    }

    if(events_bundle_item != nullptr)
    {
        children["events-bundle-item"] = events_bundle_item;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::EventsBundleAncestor()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-bundle-ancestor"; yang_parent_name = "events-bundle";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::~EventsBundleAncestor()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-ancestor";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBundleAncestor' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-ancestor";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::EventsBundleItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-bundle-item"; yang_parent_name = "events-bundle";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::~EventsBundleItem()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-item";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsBundleDescendant()
{
    yang_name = "events-bundle-descendant"; yang_parent_name = "events-bundle";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::~EventsBundleDescendant()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-descendant";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBundleDescendant' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        for(auto const & c : events_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-item"; yang_parent_name = "events-bundle-descendant";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::~EventsItem()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMembers()
{
    yang_name = "events-bundle-children-members"; yang_parent_name = "events-bundle";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::~EventsBundleChildrenMembers()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<events_bundle_children_member.size(); index++)
    {
        if(events_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<events_bundle_children_member.size(); index++)
    {
        if(events_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-children-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBundleChildrenMembers' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bundle-children-member")
    {
        for(auto const & c : events_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember>();
        c->parent = this;
        events_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::EventsBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
{
    yang_name = "events-bundle-children-member"; yang_parent_name = "events-bundle-children-members";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::~EventsBundleChildrenMember()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBundleChildrenMember' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bundle-children-member";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::~Items()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdl()
    :
    events_bdl_bundles(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles>())
	,events_bdl_iccp_groups(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups>())
	,events_bdl_members(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers>())
{
    events_bdl_bundles->parent = this;

    events_bdl_iccp_groups->parent = this;

    events_bdl_members->parent = this;

    yang_name = "events-bdl"; yang_parent_name = "bundle-information";
}

BundleInformation::EventsBdl::~EventsBdl()
{
}

bool BundleInformation::EventsBdl::has_data() const
{
    return (events_bdl_bundles !=  nullptr && events_bdl_bundles->has_data())
	|| (events_bdl_iccp_groups !=  nullptr && events_bdl_iccp_groups->has_data())
	|| (events_bdl_members !=  nullptr && events_bdl_members->has_data());
}

bool BundleInformation::EventsBdl::has_operation() const
{
    return is_set(operation)
	|| (events_bdl_bundles !=  nullptr && events_bdl_bundles->has_operation())
	|| (events_bdl_iccp_groups !=  nullptr && events_bdl_iccp_groups->has_operation())
	|| (events_bdl_members !=  nullptr && events_bdl_members->has_operation());
}

std::string BundleInformation::EventsBdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundles")
    {
        if(events_bdl_bundles == nullptr)
        {
            events_bdl_bundles = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles>();
        }
        return events_bdl_bundles;
    }

    if(child_yang_name == "events-bdl-iccp-groups")
    {
        if(events_bdl_iccp_groups == nullptr)
        {
            events_bdl_iccp_groups = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups>();
        }
        return events_bdl_iccp_groups;
    }

    if(child_yang_name == "events-bdl-members")
    {
        if(events_bdl_members == nullptr)
        {
            events_bdl_members = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers>();
        }
        return events_bdl_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_bundles != nullptr)
    {
        children["events-bdl-bundles"] = events_bdl_bundles;
    }

    if(events_bdl_iccp_groups != nullptr)
    {
        children["events-bdl-iccp-groups"] = events_bdl_iccp_groups;
    }

    if(events_bdl_members != nullptr)
    {
        children["events-bdl-members"] = events_bdl_members;
    }

    return children;
}

void BundleInformation::EventsBdl::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMembers()
{
    yang_name = "events-bdl-members"; yang_parent_name = "events-bdl";
}

BundleInformation::EventsBdl::EventsBdlMembers::~EventsBdlMembers()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_data() const
{
    for (std::size_t index=0; index<events_bdl_member.size(); index++)
    {
        if(events_bdl_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_member.size(); index++)
    {
        if(events_bdl_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-member")
    {
        for(auto const & c : events_bdl_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember>();
        c->parent = this;
        events_bdl_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bdl_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_bdl_member_ancestor(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor>())
{
    events_bdl_member_ancestor->parent = this;

    yang_name = "events-bdl-member"; yang_parent_name = "events-bdl-members";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::~EventsBdlMember()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_data() const
{
    return member_interface.is_set
	|| (events_bdl_member_ancestor !=  nullptr && events_bdl_member_ancestor->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (events_bdl_member_ancestor !=  nullptr && events_bdl_member_ancestor->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-member-ancestor")
    {
        if(events_bdl_member_ancestor == nullptr)
        {
            events_bdl_member_ancestor = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor>();
        }
        return events_bdl_member_ancestor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_member_ancestor != nullptr)
    {
        children["events-bdl-member-ancestor"] = events_bdl_member_ancestor;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::EventsBdlMemberAncestor()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-bdl-member-ancestor"; yang_parent_name = "events-bdl-member";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::~EventsBdlMemberAncestor()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-member-ancestor";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBdlMemberAncestor' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bdl-member-ancestor";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundles()
{
    yang_name = "events-bdl-bundles"; yang_parent_name = "events-bdl";
}

BundleInformation::EventsBdl::EventsBdlBundles::~EventsBdlBundles()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_data() const
{
    for (std::size_t index=0; index<events_bdl_bundle.size(); index++)
    {
        if(events_bdl_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_bundle.size(); index++)
    {
        if(events_bdl_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle")
    {
        for(auto const & c : events_bdl_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle>();
        c->parent = this;
        events_bdl_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bdl_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_bdl_bundle_item(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem>())
{
    events_bdl_bundle_item->parent = this;

    yang_name = "events-bdl-bundle"; yang_parent_name = "events-bdl-bundles";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::~EventsBdlBundle()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_bdl_bundle_item !=  nullptr && events_bdl_bundle_item->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (events_bdl_bundle_item !=  nullptr && events_bdl_bundle_item->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle-item")
    {
        if(events_bdl_bundle_item == nullptr)
        {
            events_bdl_bundle_item = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem>();
        }
        return events_bdl_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_bundle_item != nullptr)
    {
        children["events-bdl-bundle-item"] = events_bdl_bundle_item;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::EventsBdlBundleItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-bdl-bundle-item"; yang_parent_name = "events-bdl-bundle";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::~EventsBdlBundleItem()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBdlBundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-bdl-bundle-item";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroups()
{
    yang_name = "events-bdl-iccp-groups"; yang_parent_name = "events-bdl";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::~EventsBdlIccpGroups()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_bdl_iccp_group.size(); index++)
    {
        if(events_bdl_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_bdl_iccp_group.size(); index++)
    {
        if(events_bdl_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-iccp-groups";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-iccp-group")
    {
        for(auto const & c : events_bdl_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup>();
        c->parent = this;
        events_bdl_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_bdl_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    events_bdl_bundle_descendant_iccp_group(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup>())
{
    events_bdl_bundle_descendant_iccp_group->parent = this;

    yang_name = "events-bdl-iccp-group"; yang_parent_name = "events-bdl-iccp-groups";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::~EventsBdlIccpGroup()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (events_bdl_bundle_descendant_iccp_group !=  nullptr && events_bdl_bundle_descendant_iccp_group->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (events_bdl_bundle_descendant_iccp_group !=  nullptr && events_bdl_bundle_descendant_iccp_group->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-bdl/events-bdl-iccp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-bdl-bundle-descendant-iccp-group")
    {
        if(events_bdl_bundle_descendant_iccp_group == nullptr)
        {
            events_bdl_bundle_descendant_iccp_group = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup>();
        }
        return events_bdl_bundle_descendant_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_bdl_bundle_descendant_iccp_group != nullptr)
    {
        children["events-bdl-bundle-descendant-iccp-group"] = events_bdl_bundle_descendant_iccp_group;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsBdlBundleDescendantIccpGroup()
{
    yang_name = "events-bdl-bundle-descendant-iccp-group"; yang_parent_name = "events-bdl-iccp-group";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::~EventsBdlBundleDescendantIccpGroup()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-bdl-bundle-descendant-iccp-group";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsBdlBundleDescendantIccpGroup' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        for(auto const & c : events_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-item"; yang_parent_name = "events-bdl-bundle-descendant-iccp-group";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::BundleBriefs::BundleBriefs()
{
    yang_name = "bundle-briefs"; yang_parent_name = "bundle-information";
}

BundleInformation::BundleBriefs::~BundleBriefs()
{
}

bool BundleInformation::BundleBriefs::has_data() const
{
    for (std::size_t index=0; index<bundle_brief.size(); index++)
    {
        if(bundle_brief[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::BundleBriefs::has_operation() const
{
    for (std::size_t index=0; index<bundle_brief.size(); index++)
    {
        if(bundle_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::BundleBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-briefs";

    return path_buffer.str();

}

const EntityPath BundleInformation::BundleBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-brief")
    {
        for(auto const & c : bundle_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BundleBriefs::BundleBrief>();
        c->parent = this;
        bundle_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::BundleBriefs::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::BundleBriefs::BundleBrief::BundleBrief()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_brief_item(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem>())
{
    bundle_brief_item->parent = this;

    yang_name = "bundle-brief"; yang_parent_name = "bundle-briefs";
}

BundleInformation::BundleBriefs::BundleBrief::~BundleBrief()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_brief_item !=  nullptr && bundle_brief_item->has_data());
}

bool BundleInformation::BundleBriefs::BundleBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (bundle_brief_item !=  nullptr && bundle_brief_item->has_operation());
}

std::string BundleInformation::BundleBriefs::BundleBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-brief" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::BundleBriefs::BundleBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/bundle-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-brief-item")
    {
        if(bundle_brief_item == nullptr)
        {
            bundle_brief_item = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem>();
        }
        return bundle_brief_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_brief_item != nullptr)
    {
        children["bundle-brief-item"] = bundle_brief_item;
    }

    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BundleBriefItem()
    :
    active_foreign_member_count{YType::uint16, "active-foreign-member-count"},
    active_member_count{YType::uint16, "active-member-count"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    bundle_status{YType::enumeration, "bundle-status"},
    cisco_extensions{YType::boolean, "cisco-extensions"},
    collector_max_delay{YType::uint16, "collector-max-delay"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    configured_foreign_member_count{YType::uint16, "configured-foreign-member-count"},
    configured_member_count{YType::uint16, "configured-member-count"},
    effective_bandwidth{YType::uint32, "effective-bandwidth"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    inter_chassis{YType::boolean, "inter-chassis"},
    ipv4bfd_status{YType::enumeration, "ipv4bfd-status"},
    ipv6bfd_status{YType::enumeration, "ipv6bfd-status"},
    is_active{YType::boolean, "is-active"},
    lacp_nonrevertive{YType::boolean, "lacp-nonrevertive"},
    lacp_status{YType::enumeration, "lacp-status"},
    link_order_status{YType::enumeration, "link-order-status"},
    load_balance_hash_type{YType::str, "load-balance-hash-type"},
    load_balance_locality_threshold{YType::uint16, "load-balance-locality-threshold"},
    mac_source{YType::enumeration, "mac-source"},
    mac_source_member{YType::str, "mac-source-member"},
    maximize_threshold_value_band_width{YType::uint32, "maximize-threshold-value-band-width"},
    maximize_threshold_value_links{YType::uint32, "maximize-threshold-value-links"},
    maximum_active_links{YType::uint8, "maximum-active-links"},
    maximum_active_links_source{YType::enumeration, "maximum-active-links-source"},
    minimum_active_links{YType::uint8, "minimum-active-links"},
    minimum_bandwidth{YType::uint32, "minimum-bandwidth"},
    mlacp_mode{YType::enumeration, "mlacp-mode"},
    mlacp_status{YType::enumeration, "mlacp-status"},
    primary_member{YType::str, "primary-member"},
    recovery_delay{YType::uint16, "recovery-delay"},
    singleton{YType::boolean, "singleton"},
    standby_member_count{YType::uint16, "standby-member-count"},
    suppression_timer{YType::uint16, "suppression-timer"},
    switchover_type{YType::enumeration, "switchover-type"},
    wait_while_timer{YType::uint16, "wait-while-timer"}
    	,
    mac_address(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "bundle-brief-item"; yang_parent_name = "bundle-brief";
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::~BundleBriefItem()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_data() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_data())
            return true;
    }
    return active_foreign_member_count.is_set
	|| active_member_count.is_set
	|| available_bandwidth.is_set
	|| bundle_interface_name.is_set
	|| bundle_status.is_set
	|| cisco_extensions.is_set
	|| collector_max_delay.is_set
	|| configured_bandwidth.is_set
	|| configured_foreign_member_count.is_set
	|| configured_member_count.is_set
	|| effective_bandwidth.is_set
	|| iccp_group_id.is_set
	|| inter_chassis.is_set
	|| ipv4bfd_status.is_set
	|| ipv6bfd_status.is_set
	|| is_active.is_set
	|| lacp_nonrevertive.is_set
	|| lacp_status.is_set
	|| link_order_status.is_set
	|| load_balance_hash_type.is_set
	|| load_balance_locality_threshold.is_set
	|| mac_source.is_set
	|| mac_source_member.is_set
	|| maximize_threshold_value_band_width.is_set
	|| maximize_threshold_value_links.is_set
	|| maximum_active_links.is_set
	|| maximum_active_links_source.is_set
	|| minimum_active_links.is_set
	|| minimum_bandwidth.is_set
	|| mlacp_mode.is_set
	|| mlacp_status.is_set
	|| primary_member.is_set
	|| recovery_delay.is_set
	|| singleton.is_set
	|| standby_member_count.is_set
	|| suppression_timer.is_set
	|| switchover_type.is_set
	|| wait_while_timer.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::has_operation() const
{
    for (std::size_t index=0; index<bfd_config.size(); index++)
    {
        if(bfd_config[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_foreign_member_count.operation)
	|| is_set(active_member_count.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(bundle_interface_name.operation)
	|| is_set(bundle_status.operation)
	|| is_set(cisco_extensions.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(configured_foreign_member_count.operation)
	|| is_set(configured_member_count.operation)
	|| is_set(effective_bandwidth.operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(inter_chassis.operation)
	|| is_set(ipv4bfd_status.operation)
	|| is_set(ipv6bfd_status.operation)
	|| is_set(is_active.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(lacp_status.operation)
	|| is_set(link_order_status.operation)
	|| is_set(load_balance_hash_type.operation)
	|| is_set(load_balance_locality_threshold.operation)
	|| is_set(mac_source.operation)
	|| is_set(mac_source_member.operation)
	|| is_set(maximize_threshold_value_band_width.operation)
	|| is_set(maximize_threshold_value_links.operation)
	|| is_set(maximum_active_links.operation)
	|| is_set(maximum_active_links_source.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(minimum_bandwidth.operation)
	|| is_set(mlacp_mode.operation)
	|| is_set(mlacp_status.operation)
	|| is_set(primary_member.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(singleton.operation)
	|| is_set(standby_member_count.operation)
	|| is_set(suppression_timer.operation)
	|| is_set(switchover_type.operation)
	|| is_set(wait_while_timer.operation)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-brief-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleBriefItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_foreign_member_count.is_set || is_set(active_foreign_member_count.operation)) leaf_name_data.push_back(active_foreign_member_count.get_name_leafdata());
    if (active_member_count.is_set || is_set(active_member_count.operation)) leaf_name_data.push_back(active_member_count.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.operation)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (cisco_extensions.is_set || is_set(cisco_extensions.operation)) leaf_name_data.push_back(cisco_extensions.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (configured_foreign_member_count.is_set || is_set(configured_foreign_member_count.operation)) leaf_name_data.push_back(configured_foreign_member_count.get_name_leafdata());
    if (configured_member_count.is_set || is_set(configured_member_count.operation)) leaf_name_data.push_back(configured_member_count.get_name_leafdata());
    if (effective_bandwidth.is_set || is_set(effective_bandwidth.operation)) leaf_name_data.push_back(effective_bandwidth.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (inter_chassis.is_set || is_set(inter_chassis.operation)) leaf_name_data.push_back(inter_chassis.get_name_leafdata());
    if (ipv4bfd_status.is_set || is_set(ipv4bfd_status.operation)) leaf_name_data.push_back(ipv4bfd_status.get_name_leafdata());
    if (ipv6bfd_status.is_set || is_set(ipv6bfd_status.operation)) leaf_name_data.push_back(ipv6bfd_status.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (lacp_status.is_set || is_set(lacp_status.operation)) leaf_name_data.push_back(lacp_status.get_name_leafdata());
    if (link_order_status.is_set || is_set(link_order_status.operation)) leaf_name_data.push_back(link_order_status.get_name_leafdata());
    if (load_balance_hash_type.is_set || is_set(load_balance_hash_type.operation)) leaf_name_data.push_back(load_balance_hash_type.get_name_leafdata());
    if (load_balance_locality_threshold.is_set || is_set(load_balance_locality_threshold.operation)) leaf_name_data.push_back(load_balance_locality_threshold.get_name_leafdata());
    if (mac_source.is_set || is_set(mac_source.operation)) leaf_name_data.push_back(mac_source.get_name_leafdata());
    if (mac_source_member.is_set || is_set(mac_source_member.operation)) leaf_name_data.push_back(mac_source_member.get_name_leafdata());
    if (maximize_threshold_value_band_width.is_set || is_set(maximize_threshold_value_band_width.operation)) leaf_name_data.push_back(maximize_threshold_value_band_width.get_name_leafdata());
    if (maximize_threshold_value_links.is_set || is_set(maximize_threshold_value_links.operation)) leaf_name_data.push_back(maximize_threshold_value_links.get_name_leafdata());
    if (maximum_active_links.is_set || is_set(maximum_active_links.operation)) leaf_name_data.push_back(maximum_active_links.get_name_leafdata());
    if (maximum_active_links_source.is_set || is_set(maximum_active_links_source.operation)) leaf_name_data.push_back(maximum_active_links_source.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (minimum_bandwidth.is_set || is_set(minimum_bandwidth.operation)) leaf_name_data.push_back(minimum_bandwidth.get_name_leafdata());
    if (mlacp_mode.is_set || is_set(mlacp_mode.operation)) leaf_name_data.push_back(mlacp_mode.get_name_leafdata());
    if (mlacp_status.is_set || is_set(mlacp_status.operation)) leaf_name_data.push_back(mlacp_status.get_name_leafdata());
    if (primary_member.is_set || is_set(primary_member.operation)) leaf_name_data.push_back(primary_member.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.operation)) leaf_name_data.push_back(singleton.get_name_leafdata());
    if (standby_member_count.is_set || is_set(standby_member_count.operation)) leaf_name_data.push_back(standby_member_count.get_name_leafdata());
    if (suppression_timer.is_set || is_set(suppression_timer.operation)) leaf_name_data.push_back(suppression_timer.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (wait_while_timer.is_set || is_set(wait_while_timer.operation)) leaf_name_data.push_back(wait_while_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(c);
        return c;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_config)
    {
        children[c->get_segment_path()] = c;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-foreign-member-count")
    {
        active_foreign_member_count = value;
    }
    if(value_path == "active-member-count")
    {
        active_member_count = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
    }
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "cisco-extensions")
    {
        cisco_extensions = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "configured-foreign-member-count")
    {
        configured_foreign_member_count = value;
    }
    if(value_path == "configured-member-count")
    {
        configured_member_count = value;
    }
    if(value_path == "effective-bandwidth")
    {
        effective_bandwidth = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "inter-chassis")
    {
        inter_chassis = value;
    }
    if(value_path == "ipv4bfd-status")
    {
        ipv4bfd_status = value;
    }
    if(value_path == "ipv6bfd-status")
    {
        ipv6bfd_status = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "lacp-status")
    {
        lacp_status = value;
    }
    if(value_path == "link-order-status")
    {
        link_order_status = value;
    }
    if(value_path == "load-balance-hash-type")
    {
        load_balance_hash_type = value;
    }
    if(value_path == "load-balance-locality-threshold")
    {
        load_balance_locality_threshold = value;
    }
    if(value_path == "mac-source")
    {
        mac_source = value;
    }
    if(value_path == "mac-source-member")
    {
        mac_source_member = value;
    }
    if(value_path == "maximize-threshold-value-band-width")
    {
        maximize_threshold_value_band_width = value;
    }
    if(value_path == "maximize-threshold-value-links")
    {
        maximize_threshold_value_links = value;
    }
    if(value_path == "maximum-active-links")
    {
        maximum_active_links = value;
    }
    if(value_path == "maximum-active-links-source")
    {
        maximum_active_links_source = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "minimum-bandwidth")
    {
        minimum_bandwidth = value;
    }
    if(value_path == "mlacp-mode")
    {
        mlacp_mode = value;
    }
    if(value_path == "mlacp-status")
    {
        mlacp_status = value;
    }
    if(value_path == "primary-member")
    {
        primary_member = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "singleton")
    {
        singleton = value;
    }
    if(value_path == "standby-member-count")
    {
        standby_member_count = value;
    }
    if(value_path == "suppression-timer")
    {
        suppression_timer = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
    if(value_path == "wait-while-timer")
    {
        wait_while_timer = value;
    }
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "bundle-brief-item";
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::BfdConfig()
    :
    bundle_status{YType::enumeration, "bundle-status"},
    fast_detect{YType::boolean, "fast-detect"},
    mode_info{YType::uint32, "mode-info"},
    nbr_unconfig_timer{YType::uint32, "nbr-unconfig-timer"},
    pref_echo_min_interval{YType::uint32, "pref-echo-min-interval"},
    pref_min_interval{YType::uint32, "pref-min-interval"},
    pref_multiplier{YType::uint16, "pref-multiplier"},
    start_timer{YType::uint32, "start-timer"}
    	,
    destination_address(std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;

    yang_name = "bfd-config"; yang_parent_name = "bundle-brief-item";
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::~BfdConfig()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_data() const
{
    return bundle_status.is_set
	|| fast_detect.is_set
	|| mode_info.is_set
	|| nbr_unconfig_timer.is_set
	|| pref_echo_min_interval.is_set
	|| pref_min_interval.is_set
	|| pref_multiplier.is_set
	|| start_timer.is_set
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(fast_detect.operation)
	|| is_set(mode_info.operation)
	|| is_set(nbr_unconfig_timer.operation)
	|| is_set(pref_echo_min_interval.operation)
	|| is_set(pref_min_interval.operation)
	|| is_set(pref_multiplier.operation)
	|| is_set(start_timer.operation)
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

const EntityPath BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdConfig' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (mode_info.is_set || is_set(mode_info.operation)) leaf_name_data.push_back(mode_info.get_name_leafdata());
    if (nbr_unconfig_timer.is_set || is_set(nbr_unconfig_timer.operation)) leaf_name_data.push_back(nbr_unconfig_timer.get_name_leafdata());
    if (pref_echo_min_interval.is_set || is_set(pref_echo_min_interval.operation)) leaf_name_data.push_back(pref_echo_min_interval.get_name_leafdata());
    if (pref_min_interval.is_set || is_set(pref_min_interval.operation)) leaf_name_data.push_back(pref_min_interval.get_name_leafdata());
    if (pref_multiplier.is_set || is_set(pref_multiplier.operation)) leaf_name_data.push_back(pref_multiplier.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "mode-info")
    {
        mode_info = value;
    }
    if(value_path == "nbr-unconfig-timer")
    {
        nbr_unconfig_timer = value;
    }
    if(value_path == "pref-echo-min-interval")
    {
        pref_echo_min_interval = value;
    }
    if(value_path == "pref-min-interval")
    {
        pref_min_interval = value;
    }
    if(value_path == "pref-multiplier")
    {
        pref_multiplier = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

const EntityPath BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationAddress' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

BundleInformation::EventsMbr::EventsMbr()
    :
    events_mbr_bundles(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles>())
	,events_mbr_iccp_groups(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups>())
	,events_mbr_members(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers>())
{
    events_mbr_bundles->parent = this;

    events_mbr_iccp_groups->parent = this;

    events_mbr_members->parent = this;

    yang_name = "events-mbr"; yang_parent_name = "bundle-information";
}

BundleInformation::EventsMbr::~EventsMbr()
{
}

bool BundleInformation::EventsMbr::has_data() const
{
    return (events_mbr_bundles !=  nullptr && events_mbr_bundles->has_data())
	|| (events_mbr_iccp_groups !=  nullptr && events_mbr_iccp_groups->has_data())
	|| (events_mbr_members !=  nullptr && events_mbr_members->has_data());
}

bool BundleInformation::EventsMbr::has_operation() const
{
    return is_set(operation)
	|| (events_mbr_bundles !=  nullptr && events_mbr_bundles->has_operation())
	|| (events_mbr_iccp_groups !=  nullptr && events_mbr_iccp_groups->has_operation())
	|| (events_mbr_members !=  nullptr && events_mbr_members->has_operation());
}

std::string BundleInformation::EventsMbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundles")
    {
        if(events_mbr_bundles == nullptr)
        {
            events_mbr_bundles = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles>();
        }
        return events_mbr_bundles;
    }

    if(child_yang_name == "events-mbr-iccp-groups")
    {
        if(events_mbr_iccp_groups == nullptr)
        {
            events_mbr_iccp_groups = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups>();
        }
        return events_mbr_iccp_groups;
    }

    if(child_yang_name == "events-mbr-members")
    {
        if(events_mbr_members == nullptr)
        {
            events_mbr_members = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers>();
        }
        return events_mbr_members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_bundles != nullptr)
    {
        children["events-mbr-bundles"] = events_mbr_bundles;
    }

    if(events_mbr_iccp_groups != nullptr)
    {
        children["events-mbr-iccp-groups"] = events_mbr_iccp_groups;
    }

    if(events_mbr_members != nullptr)
    {
        children["events-mbr-members"] = events_mbr_members;
    }

    return children;
}

void BundleInformation::EventsMbr::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundles()
{
    yang_name = "events-mbr-bundles"; yang_parent_name = "events-mbr";
}

BundleInformation::EventsMbr::EventsMbrBundles::~EventsMbrBundles()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_data() const
{
    for (std::size_t index=0; index<events_mbr_bundle.size(); index++)
    {
        if(events_mbr_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle.size(); index++)
    {
        if(events_mbr_bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundles";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle")
    {
        for(auto const & c : events_mbr_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle>();
        c->parent = this;
        events_mbr_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    events_mbr_bundle_children_members(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers>())
	,events_mbr_bundle_descendant(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant>())
{
    events_mbr_bundle_children_members->parent = this;

    events_mbr_bundle_descendant->parent = this;

    yang_name = "events-mbr-bundle"; yang_parent_name = "events-mbr-bundles";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::~EventsMbrBundle()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_data() const
{
    return bundle_interface.is_set
	|| (events_mbr_bundle_children_members !=  nullptr && events_mbr_bundle_children_members->has_data())
	|| (events_mbr_bundle_descendant !=  nullptr && events_mbr_bundle_descendant->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (events_mbr_bundle_children_members !=  nullptr && events_mbr_bundle_children_members->has_operation())
	|| (events_mbr_bundle_descendant !=  nullptr && events_mbr_bundle_descendant->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.operation)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-members")
    {
        if(events_mbr_bundle_children_members == nullptr)
        {
            events_mbr_bundle_children_members = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers>();
        }
        return events_mbr_bundle_children_members;
    }

    if(child_yang_name == "events-mbr-bundle-descendant")
    {
        if(events_mbr_bundle_descendant == nullptr)
        {
            events_mbr_bundle_descendant = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant>();
        }
        return events_mbr_bundle_descendant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_bundle_children_members != nullptr)
    {
        children["events-mbr-bundle-children-members"] = events_mbr_bundle_children_members;
    }

    if(events_mbr_bundle_descendant != nullptr)
    {
        children["events-mbr-bundle-descendant"] = events_mbr_bundle_descendant;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMembers()
{
    yang_name = "events-mbr-bundle-children-members"; yang_parent_name = "events-mbr-bundle";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::~EventsMbrBundleChildrenMembers()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_data() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member.size(); index++)
    {
        if(events_mbr_bundle_children_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member.size(); index++)
    {
        if(events_mbr_bundle_children_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMbrBundleChildrenMembers' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member")
    {
        for(auto const & c : events_mbr_bundle_children_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember>();
        c->parent = this;
        events_mbr_bundle_children_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_bundle_children_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::EventsMbrBundleChildrenMember()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
{
    yang_name = "events-mbr-bundle-children-member"; yang_parent_name = "events-mbr-bundle-children-members";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::~EventsMbrBundleChildrenMember()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMbrBundleChildrenMember' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-bundle-children-member";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsMbrBundleDescendant()
{
    yang_name = "events-mbr-bundle-descendant"; yang_parent_name = "events-mbr-bundle";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::~EventsMbrBundleDescendant()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-descendant";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMbrBundleDescendant' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        for(auto const & c : events_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-item"; yang_parent_name = "events-mbr-bundle-descendant";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-item";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMembers()
{
    yang_name = "events-mbr-members"; yang_parent_name = "events-mbr";
}

BundleInformation::EventsMbr::EventsMbrMembers::~EventsMbrMembers()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_data() const
{
    for (std::size_t index=0; index<events_mbr_member.size(); index++)
    {
        if(events_mbr_member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_member.size(); index++)
    {
        if(events_mbr_member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-members";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-member")
    {
        for(auto const & c : events_mbr_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember>();
        c->parent = this;
        events_mbr_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMember()
    :
    member_interface{YType::str, "member-interface"}
    	,
    events_mbr_member_item(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem>())
{
    events_mbr_member_item->parent = this;

    yang_name = "events-mbr-member"; yang_parent_name = "events-mbr-members";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::~EventsMbrMember()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_data() const
{
    return member_interface.is_set
	|| (events_mbr_member_item !=  nullptr && events_mbr_member_item->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (events_mbr_member_item !=  nullptr && events_mbr_member_item->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-member-item")
    {
        if(events_mbr_member_item == nullptr)
        {
            events_mbr_member_item = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem>();
        }
        return events_mbr_member_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_member_item != nullptr)
    {
        children["events-mbr-member-item"] = events_mbr_member_item;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::EventsMbrMemberItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-mbr-member-item"; yang_parent_name = "events-mbr-member";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::~EventsMbrMemberItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-member-item";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMbrMemberItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-member-item";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroups()
{
    yang_name = "events-mbr-iccp-groups"; yang_parent_name = "events-mbr";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::~EventsMbrIccpGroups()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_mbr_iccp_group.size(); index++)
    {
        if(events_mbr_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_iccp_group.size(); index++)
    {
        if(events_mbr_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-iccp-groups";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-iccp-group")
    {
        for(auto const & c : events_mbr_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup>();
        c->parent = this;
        events_mbr_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    events_mbr_bundle_children_member_iccp_groups(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups>())
	,events_mbr_bundle_descendant_iccp_group(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup>())
{
    events_mbr_bundle_children_member_iccp_groups->parent = this;

    events_mbr_bundle_descendant_iccp_group->parent = this;

    yang_name = "events-mbr-iccp-group"; yang_parent_name = "events-mbr-iccp-groups";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::~EventsMbrIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (events_mbr_bundle_children_member_iccp_groups !=  nullptr && events_mbr_bundle_children_member_iccp_groups->has_data())
	|| (events_mbr_bundle_descendant_iccp_group !=  nullptr && events_mbr_bundle_descendant_iccp_group->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (events_mbr_bundle_children_member_iccp_groups !=  nullptr && events_mbr_bundle_children_member_iccp_groups->has_operation())
	|| (events_mbr_bundle_descendant_iccp_group !=  nullptr && events_mbr_bundle_descendant_iccp_group->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/events-mbr/events-mbr-iccp-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member-iccp-groups")
    {
        if(events_mbr_bundle_children_member_iccp_groups == nullptr)
        {
            events_mbr_bundle_children_member_iccp_groups = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups>();
        }
        return events_mbr_bundle_children_member_iccp_groups;
    }

    if(child_yang_name == "events-mbr-bundle-descendant-iccp-group")
    {
        if(events_mbr_bundle_descendant_iccp_group == nullptr)
        {
            events_mbr_bundle_descendant_iccp_group = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup>();
        }
        return events_mbr_bundle_descendant_iccp_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events_mbr_bundle_children_member_iccp_groups != nullptr)
    {
        children["events-mbr-bundle-children-member-iccp-groups"] = events_mbr_bundle_children_member_iccp_groups;
    }

    if(events_mbr_bundle_descendant_iccp_group != nullptr)
    {
        children["events-mbr-bundle-descendant-iccp-group"] = events_mbr_bundle_descendant_iccp_group;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroups()
{
    yang_name = "events-mbr-bundle-children-member-iccp-groups"; yang_parent_name = "events-mbr-iccp-group";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::~EventsMbrBundleChildrenMemberIccpGroups()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_data() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member_iccp_group.size(); index++)
    {
        if(events_mbr_bundle_children_member_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<events_mbr_bundle_children_member_iccp_group.size(); index++)
    {
        if(events_mbr_bundle_children_member_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member-iccp-groups";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMbrBundleChildrenMemberIccpGroups' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-mbr-bundle-children-member-iccp-group")
    {
        for(auto const & c : events_mbr_bundle_children_member_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup>();
        c->parent = this;
        events_mbr_bundle_children_member_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_mbr_bundle_children_member_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::EventsMbrBundleChildrenMemberIccpGroup()
    :
    member_interface{YType::str, "member-interface"},
    item_name{YType::str, "item-name"}
{
    yang_name = "events-mbr-bundle-children-member-iccp-group"; yang_parent_name = "events-mbr-bundle-children-member-iccp-groups";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::~EventsMbrBundleChildrenMemberIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return member_interface.is_set
	|| item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-children-member-iccp-group" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMbrBundleChildrenMemberIccpGroup' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (item_name.is_set || is_set(item_name.operation)) leaf_name_data.push_back(item_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items>();
        c->parent = this;
        items.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : items)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;

    member_evt_info->parent = this;

    rg_evt_info->parent = this;

    yang_name = "items"; yang_parent_name = "events-mbr-bundle-children-member-iccp-group";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Items' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info == nullptr)
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo>();
        }
        return bundle_evt_info;
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info == nullptr)
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo>();
        }
        return member_evt_info;
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info == nullptr)
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo>();
        }
        return rg_evt_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_evt_info != nullptr)
    {
        children["bundle-evt-info"] = bundle_evt_info;
    }

    if(member_evt_info != nullptr)
    {
        children["member-evt-info"] = member_evt_info;
    }

    if(rg_evt_info != nullptr)
    {
        children["rg-evt-info"] = rg_evt_info;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_event_type.is_set || is_set(member_event_type.operation)) leaf_name_data.push_back(member_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-event-type")
    {
        member_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_event_type.is_set || is_set(bundle_event_type.operation)) leaf_name_data.push_back(bundle_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-event-type")
    {
        bundle_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data>())
{
    data->parent = this;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RgEvtInfo' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rg_event_type.is_set || is_set(rg_event_type.operation)) leaf_name_data.push_back(rg_event_type.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rg-event-type")
    {
        rg_event_type = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.operation)) leaf_name_data.push_back(data_type.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (no_data.is_set || is_set(no_data.operation)) leaf_name_data.push_back(no_data.get_name_leafdata());
    if (string_data.is_set || is_set(string_data.operation)) leaf_name_data.push_back(string_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data-type")
    {
        data_type = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "no-data")
    {
        no_data = value;
    }
    if(value_path == "string-data")
    {
        string_data = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsMbrBundleDescendantIccpGroup()
{
    yang_name = "events-mbr-bundle-descendant-iccp-group"; yang_parent_name = "events-mbr-iccp-group";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::~EventsMbrBundleDescendantIccpGroup()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_data() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::has_operation() const
{
    for (std::size_t index=0; index<events_item.size(); index++)
    {
        if(events_item[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-mbr-bundle-descendant-iccp-group";

    return path_buffer.str();

}

const EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventsMbrBundleDescendantIccpGroup' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events-item")
    {
        for(auto const & c : events_item)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem>();
        c->parent = this;
        events_item.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : events_item)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::set_value(const std::string & value_path, std::string value)
{
}


}
}

