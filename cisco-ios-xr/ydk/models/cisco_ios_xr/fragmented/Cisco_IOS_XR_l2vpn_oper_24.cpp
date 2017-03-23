
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_24.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_25.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_26.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::BdEntry()
    :
    bdid{YType::uint32, "bdid"},
    bdif_count{YType::uint32, "bdif-count"}
{
    yang_name = "bd-entry"; yang_parent_name = "msti-entry";
}

L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::~BdEntry()
{
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::has_data() const
{
    return bdid.is_set
	|| bdif_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(bdid.operation)
	|| is_set(bdif_count.operation);
}

std::string L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-entry";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdEntry' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdid.is_set || is_set(bdid.operation)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (bdif_count.is_set || is_set(bdif_count.operation)) leaf_name_data.push_back(bdif_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::MstpPorts::MstpPort::MstiEntry::BdEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bdid")
    {
        bdid = value;
    }
    if(value_path == "bdif-count")
    {
        bdif_count = value;
    }
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetails()
{
    yang_name = "generic-interface-list-details"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::~GenericInterfaceListDetails()
{
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::has_data() const
{
    for (std::size_t index=0; index<generic_interface_list_detail.size(); index++)
    {
        if(generic_interface_list_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::has_operation() const
{
    for (std::size_t index=0; index<generic_interface_list_detail.size(); index++)
    {
        if(generic_interface_list_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list-details";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericInterfaceListDetails' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-interface-list-detail")
    {
        for(auto const & c : generic_interface_list_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail>();
        c->parent = this;
        generic_interface_list_detail.push_back(std::move(c));
        children[segment_path] = generic_interface_list_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::get_children()
{
    for (auto const & c : generic_interface_list_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::GenericInterfaceListDetail()
    :
    interface_list_name{YType::str, "interface-list-name"},
    is_provisioned{YType::boolean, "is-provisioned"},
    items{YType::uint32, "items"},
    psedowire_ether_items{YType::uint32, "psedowire-ether-items"},
    pseudowire_iw_items{YType::uint32, "pseudowire-iw-items"}
    	,
    summary(std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "generic-interface-list-detail"; yang_parent_name = "generic-interface-list-details";
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::~GenericInterfaceListDetail()
{
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_ether_range.size(); index++)
    {
        if(pseudowire_ether_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_iw_range.size(); index++)
    {
        if(pseudowire_iw_range[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| is_provisioned.is_set
	|| items.is_set
	|| psedowire_ether_items.is_set
	|| pseudowire_iw_items.is_set
	|| (summary !=  nullptr && summary->has_data());
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_ether_range.size(); index++)
    {
        if(pseudowire_ether_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_iw_range.size(); index++)
    {
        if(pseudowire_iw_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_name.operation)
	|| is_set(is_provisioned.operation)
	|| is_set(items.operation)
	|| is_set(psedowire_ether_items.operation)
	|| is_set(pseudowire_iw_items.operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list-detail" <<"[interface-list-name='" <<interface_list_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericInterfaceListDetail' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.operation)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (items.is_set || is_set(items.operation)) leaf_name_data.push_back(items.get_name_leafdata());
    if (psedowire_ether_items.is_set || is_set(psedowire_ether_items.operation)) leaf_name_data.push_back(psedowire_ether_items.get_name_leafdata());
    if (pseudowire_iw_items.is_set || is_set(pseudowire_iw_items.operation)) leaf_name_data.push_back(pseudowire_iw_items.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-ether-range")
    {
        for(auto const & c : pseudowire_ether_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange>();
        c->parent = this;
        pseudowire_ether_range.push_back(std::move(c));
        children[segment_path] = pseudowire_ether_range.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-iw-range")
    {
        for(auto const & c : pseudowire_iw_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange>();
        c->parent = this;
        pseudowire_iw_range.push_back(std::move(c));
        children[segment_path] = pseudowire_iw_range.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pseudowire_ether_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pseudowire_iw_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
    }
    if(value_path == "items")
    {
        items = value;
    }
    if(value_path == "psedowire-ether-items")
    {
        psedowire_ether_items = value;
    }
    if(value_path == "pseudowire-iw-items")
    {
        pseudowire_iw_items = value;
    }
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Summary()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name_xr{YType::str, "interface-list-name-xr"},
    items{YType::uint32, "items"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"}
{
    yang_name = "summary"; yang_parent_name = "generic-interface-list-detail";
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::~Summary()
{
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name_xr.is_set
	|| items.is_set
	|| number_of_interfaces.is_set;
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name_xr.operation)
	|| is_set(items.operation)
	|| is_set(number_of_interfaces.operation);
}

std::string L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name_xr.is_set || is_set(interface_list_name_xr.operation)) leaf_name_data.push_back(interface_list_name_xr.get_name_leafdata());
    if (items.is_set || is_set(items.operation)) leaf_name_data.push_back(items.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.operation)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name-xr")
    {
        interface_list_name_xr = value;
    }
    if(value_path == "items")
    {
        items = value;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
    }
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{
    yang_name = "interface"; yang_parent_name = "summary";
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_fib_downloaded.operation)
	|| is_set(not_supported_replications.operation)
	|| is_set(pending_replications.operation);
}

std::string L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.operation)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.operation)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.operation)) leaf_name_data.push_back(pending_replications.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
    }
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{
    yang_name = "interface"; yang_parent_name = "generic-interface-list-detail";
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_fib_downloaded.operation)
	|| is_set(not_supported_replications.operation)
	|| is_set(pending_replications.operation);
}

std::string L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.operation)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.operation)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.operation)) leaf_name_data.push_back(pending_replications.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
    }
    if(value_path == "pending-replications")
    {
        pending_replications = value;
    }
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::PseudowireEtherRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "pseudowire-ether-range"; yang_parent_name = "generic-interface-list-detail";
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::~PseudowireEtherRange()
{
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether-range";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEtherRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::PseudowireIwRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "pseudowire-iw-range"; yang_parent_name = "generic-interface-list-detail";
}

L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::~PseudowireIwRange()
{
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw-range";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIwRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::L2VpnResourceState::L2VpnResourceState()
    :
    resource_out_of_memory_state{YType::uint32, "resource-out-of-memory-state"}
{
    yang_name = "l2vpn-resource-state"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::L2VpnResourceState::~L2VpnResourceState()
{
}

bool L2Vpnv2::Nodes::Node::L2VpnResourceState::has_data() const
{
    return resource_out_of_memory_state.is_set;
}

bool L2Vpnv2::Nodes::Node::L2VpnResourceState::has_operation() const
{
    return is_set(operation)
	|| is_set(resource_out_of_memory_state.operation);
}

std::string L2Vpnv2::Nodes::Node::L2VpnResourceState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-resource-state";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::L2VpnResourceState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnResourceState' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource_out_of_memory_state.is_set || is_set(resource_out_of_memory_state.operation)) leaf_name_data.push_back(resource_out_of_memory_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::L2VpnResourceState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::L2VpnResourceState::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::L2VpnResourceState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "resource-out-of-memory-state")
    {
        resource_out_of_memory_state = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomains()
{
    yang_name = "bridge-domains"; yang_parent_name = "node";
}

L2Vpnv2::Nodes::Node::BridgeDomains::~BridgeDomains()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::has_data() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomains' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domain")
    {
        for(auto const & c : bridge_domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain>();
        c->parent = this;
        bridge_domain.push_back(std::move(c));
        children[segment_path] = bridge_domain.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::get_children()
{
    for (auto const & c : bridge_domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeDomain()
    :
    bridge_domain_group_name{YType::str, "bridge-domain-group-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"}
    	,
    bridge_access_pws(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws>())
	,bridge_access_vfi_table(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable>())
	,bridge_acs(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAcs>())
	,bridge_core_vfi_table(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable>())
	,bridge_domain_info(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeDomainInfo>())
{
    bridge_access_pws->parent = this;
    children["bridge-access-pws"] = bridge_access_pws;

    bridge_access_vfi_table->parent = this;
    children["bridge-access-vfi-table"] = bridge_access_vfi_table;

    bridge_acs->parent = this;
    children["bridge-acs"] = bridge_acs;

    bridge_core_vfi_table->parent = this;
    children["bridge-core-vfi-table"] = bridge_core_vfi_table;

    bridge_domain_info->parent = this;
    children["bridge-domain-info"] = bridge_domain_info;

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::~BridgeDomain()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::has_data() const
{
    return bridge_domain_group_name.is_set
	|| bridge_domain_name.is_set
	|| (bridge_access_pws !=  nullptr && bridge_access_pws->has_data())
	|| (bridge_access_vfi_table !=  nullptr && bridge_access_vfi_table->has_data())
	|| (bridge_acs !=  nullptr && bridge_acs->has_data())
	|| (bridge_core_vfi_table !=  nullptr && bridge_core_vfi_table->has_data())
	|| (bridge_domain_info !=  nullptr && bridge_domain_info->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_group_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| (bridge_access_pws !=  nullptr && bridge_access_pws->has_operation())
	|| (bridge_access_vfi_table !=  nullptr && bridge_access_vfi_table->has_operation())
	|| (bridge_acs !=  nullptr && bridge_acs->has_operation())
	|| (bridge_core_vfi_table !=  nullptr && bridge_core_vfi_table->has_operation())
	|| (bridge_domain_info !=  nullptr && bridge_domain_info->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomain' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_group_name.is_set || is_set(bridge_domain_group_name.operation)) leaf_name_data.push_back(bridge_domain_group_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-access-pws")
    {
        if(bridge_access_pws != nullptr)
        {
            children["bridge-access-pws"] = bridge_access_pws;
        }
        else
        {
            bridge_access_pws = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessPws>();
            bridge_access_pws->parent = this;
            children["bridge-access-pws"] = bridge_access_pws;
        }
        return children.at("bridge-access-pws");
    }

    if(child_yang_name == "bridge-access-vfi-table")
    {
        if(bridge_access_vfi_table != nullptr)
        {
            children["bridge-access-vfi-table"] = bridge_access_vfi_table;
        }
        else
        {
            bridge_access_vfi_table = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable>();
            bridge_access_vfi_table->parent = this;
            children["bridge-access-vfi-table"] = bridge_access_vfi_table;
        }
        return children.at("bridge-access-vfi-table");
    }

    if(child_yang_name == "bridge-acs")
    {
        if(bridge_acs != nullptr)
        {
            children["bridge-acs"] = bridge_acs;
        }
        else
        {
            bridge_acs = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAcs>();
            bridge_acs->parent = this;
            children["bridge-acs"] = bridge_acs;
        }
        return children.at("bridge-acs");
    }

    if(child_yang_name == "bridge-core-vfi-table")
    {
        if(bridge_core_vfi_table != nullptr)
        {
            children["bridge-core-vfi-table"] = bridge_core_vfi_table;
        }
        else
        {
            bridge_core_vfi_table = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable>();
            bridge_core_vfi_table->parent = this;
            children["bridge-core-vfi-table"] = bridge_core_vfi_table;
        }
        return children.at("bridge-core-vfi-table");
    }

    if(child_yang_name == "bridge-domain-info")
    {
        if(bridge_domain_info != nullptr)
        {
            children["bridge-domain-info"] = bridge_domain_info;
        }
        else
        {
            bridge_domain_info = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeDomainInfo>();
            bridge_domain_info->parent = this;
            children["bridge-domain-info"] = bridge_domain_info;
        }
        return children.at("bridge-domain-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::get_children()
{
    if(children.find("bridge-access-pws") == children.end())
    {
        if(bridge_access_pws != nullptr)
        {
            children["bridge-access-pws"] = bridge_access_pws;
        }
    }

    if(children.find("bridge-access-vfi-table") == children.end())
    {
        if(bridge_access_vfi_table != nullptr)
        {
            children["bridge-access-vfi-table"] = bridge_access_vfi_table;
        }
    }

    if(children.find("bridge-acs") == children.end())
    {
        if(bridge_acs != nullptr)
        {
            children["bridge-acs"] = bridge_acs;
        }
    }

    if(children.find("bridge-core-vfi-table") == children.end())
    {
        if(bridge_core_vfi_table != nullptr)
        {
            children["bridge-core-vfi-table"] = bridge_core_vfi_table;
        }
    }

    if(children.find("bridge-domain-info") == children.end())
    {
        if(bridge_domain_info != nullptr)
        {
            children["bridge-domain-info"] = bridge_domain_info;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-group-name")
    {
        bridge_domain_group_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgeAccessVfiTable()
    :
    bridge_pws(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws>())
{
    bridge_pws->parent = this;
    children["bridge-pws"] = bridge_pws;

    yang_name = "bridge-access-vfi-table"; yang_parent_name = "bridge-domain";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::~BridgeAccessVfiTable()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::has_data() const
{
    return (bridge_pws !=  nullptr && bridge_pws->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::has_operation() const
{
    return is_set(operation)
	|| (bridge_pws !=  nullptr && bridge_pws->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-access-vfi-table";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeAccessVfiTable' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-pws")
    {
        if(bridge_pws != nullptr)
        {
            children["bridge-pws"] = bridge_pws;
        }
        else
        {
            bridge_pws = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws>();
            bridge_pws->parent = this;
            children["bridge-pws"] = bridge_pws;
        }
        return children.at("bridge-pws");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::get_children()
{
    if(children.find("bridge-pws") == children.end())
    {
        if(bridge_pws != nullptr)
        {
            children["bridge-pws"] = bridge_pws;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePws()
{
    yang_name = "bridge-pws"; yang_parent_name = "bridge-access-vfi-table";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::~BridgePws()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::has_data() const
{
    for (std::size_t index=0; index<bridge_pw.size(); index++)
    {
        if(bridge_pw[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::has_operation() const
{
    for (std::size_t index=0; index<bridge_pw.size(); index++)
    {
        if(bridge_pw[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-pws";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgePws' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-pw")
    {
        for(auto const & c : bridge_pw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw>();
        c->parent = this;
        bridge_pw.push_back(std::move(c));
        children[segment_path] = bridge_pw.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::get_children()
{
    for (auto const & c : bridge_pw)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::BridgePw()
    :
    is_access{YType::boolean, "is-access"},
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    pw_type{YType::enumeration, "pw-type"},
    ve_id_vpls_id_0_3{YType::uint32, "ve-id-vpls-id-0-3"},
    vpls_id_4_7{YType::uint32, "vpls-id-4-7"}
    	,
    pseudowire(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire>())
	,security_parameters(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters>())
{
    pseudowire->parent = this;
    children["pseudowire"] = pseudowire;

    security_parameters->parent = this;
    children["security-parameters"] = security_parameters;

    yang_name = "bridge-pw"; yang_parent_name = "bridge-pws";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::~BridgePw()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::has_data() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_data())
            return true;
    }
    return is_access.is_set
	|| neighbor.is_set
	|| pseudowire_id.is_set
	|| pw_type.is_set
	|| ve_id_vpls_id_0_3.is_set
	|| vpls_id_4_7.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data())
	|| (security_parameters !=  nullptr && security_parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::has_operation() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_access.operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(pw_type.operation)
	|| is_set(ve_id_vpls_id_0_3.operation)
	|| is_set(vpls_id_4_7.operation)
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (security_parameters !=  nullptr && security_parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-pw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgePw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_access.is_set || is_set(is_access.operation)) leaf_name_data.push_back(is_access.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (pw_type.is_set || is_set(pw_type.operation)) leaf_name_data.push_back(pw_type.get_name_leafdata());
    if (ve_id_vpls_id_0_3.is_set || is_set(ve_id_vpls_id_0_3.operation)) leaf_name_data.push_back(ve_id_vpls_id_0_3.get_name_leafdata());
    if (vpls_id_4_7.is_set || is_set(vpls_id_4_7.operation)) leaf_name_data.push_back(vpls_id_4_7.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire")
    {
        if(pseudowire != nullptr)
        {
            children["pseudowire"] = pseudowire;
        }
        else
        {
            pseudowire = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire>();
            pseudowire->parent = this;
            children["pseudowire"] = pseudowire;
        }
        return children.at("pseudowire");
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
        else
        {
            security_parameters = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters>();
            security_parameters->parent = this;
            children["security-parameters"] = security_parameters;
        }
        return children.at("security-parameters");
    }

    if(child_yang_name == "static-mac")
    {
        for(auto const & c : static_mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac>();
        c->parent = this;
        static_mac.push_back(std::move(c));
        children[segment_path] = static_mac.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::get_children()
{
    if(children.find("pseudowire") == children.end())
    {
        if(pseudowire != nullptr)
        {
            children["pseudowire"] = pseudowire;
        }
    }

    if(children.find("security-parameters") == children.end())
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
    }

    for (auto const & c : static_mac)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-access")
    {
        is_access = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "pw-type")
    {
        pw_type = value;
    }
    if(value_path == "ve-id-vpls-id-0-3")
    {
        ve_id_vpls_id_0_3 = value;
    }
    if(value_path == "vpls-id-4-7")
    {
        vpls_id_4_7 = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Pseudowire()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_remote_down{YType::boolean, "ad-remote-down"},
    admited_bw{YType::uint32, "admited-bw"},
    auto_discovery{YType::boolean, "auto-discovery"},
    backup_active{YType::boolean, "backup-active"},
    backup_force_active{YType::boolean, "backup-force-active"},
    backup_pw{YType::boolean, "backup-pw"},
    bitrate_mismatched{YType::boolean, "bitrate-mismatched"},
    bridge_pw_type_mismatch{YType::boolean, "bridge-pw-type-mismatch"},
    cas_mismatched{YType::boolean, "cas-mismatched"},
    diff_ts_mismatched{YType::boolean, "diff-ts-mismatched"},
    disable_delay{YType::uint8, "disable-delay"},
    disable_never{YType::boolean, "disable-never"},
    evpn_src_acid{YType::uint32, "evpn-src-acid"},
    fe_ctype{YType::enumeration, "fe-ctype"},
    forward_class{YType::uint8, "forward-class"},
    freq_mismatched{YType::boolean, "freq-mismatched"},
    illegal_control_word{YType::boolean, "illegal-control-word"},
    imposed_vlan_id{YType::uint32, "imposed-vlan-id"},
    interworking{YType::enumeration, "interworking"},
    ipv6_local_source_address{YType::str, "ipv6-local-source-address"},
    is_evpnvpws_type{YType::boolean, "is-evpnvpws-type"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    is_multi_segment_pseudowire{YType::boolean, "is-multi-segment-pseudowire"},
    is_partially_programmed{YType::boolean, "is-partially-programmed"},
    is_pwr_type{YType::boolean, "is-pwr-type"},
    is_vfi{YType::boolean, "is-vfi"},
    last_time_status_changed{YType::str, "last-time-status-changed"},
    last_time_status_down{YType::str, "last-time-status-down"},
    ldp_label_advertise_failed{YType::boolean, "ldp-label-advertise-failed"},
    load_balance{YType::enumeration, "load-balance"},
    local_control_word{YType::enumeration, "local-control-word"},
    local_label_failed{YType::boolean, "local-label-failed"},
    local_pseudo_wire_type{YType::enumeration, "local-pseudo-wire-type"},
    local_source_address{YType::str, "local-source-address"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    not_supported_qinq{YType::boolean, "not-supported-qinq"},
    num_ma_cwithdraw_msg_received{YType::uint32, "num-ma-cwithdraw-msg-received"},
    number_ma_cwithdraw_message_sent{YType::uint32, "number-ma-cwithdraw-message-sent"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    payload_bytes_mismatched{YType::boolean, "payload-bytes-mismatched"},
    payload_type_mismatched{YType::boolean, "payload-type-mismatched"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    primary_peer_id{YType::str, "primary-peer-id"},
    primary_pseudo_wire_id{YType::uint64, "primary-pseudo-wire-id"},
    primary_pw{YType::boolean, "primary-pw"},
    protocol{YType::enumeration, "protocol"},
    pseudo_wire_id{YType::uint64, "pseudo-wire-id"},
    pseudo_wire_state{YType::enumeration, "pseudo-wire-state"},
    pseudo_wire_type_mismatched{YType::boolean, "pseudo-wire-type-mismatched"},
    pw_class_name{YType::str, "pw-class-name"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    pw_flow_label_type{YType::enumeration, "pw-flow-label-type"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    pw_redundancy_initial_delay{YType::uint8, "pw-redundancy-initial-delay"},
    pw_redundancy_one_way{YType::boolean, "pw-redundancy-one-way"},
    pw_status_use{YType::boolean, "pw-status-use"},
    pwlsd_rewrite_failed{YType::boolean, "pwlsd-rewrite-failed"},
    remote_control_word{YType::enumeration, "remote-control-word"},
    remote_label_failed{YType::boolean, "remote-label-failed"},
    remote_pseudo_wire_type{YType::enumeration, "remote-pseudo-wire-type"},
    required_bw{YType::uint32, "required-bw"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    rtp_mismatched{YType::boolean, "rtp-mismatched"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    shutdown{YType::boolean, "shutdown"},
    sig_pkts_mismatched{YType::boolean, "sig-pkts-mismatched"},
    ssrc_mismatched{YType::boolean, "ssrc-mismatched"},
    state{YType::enumeration, "state"},
    table_policy_name{YType::str, "table-policy-name"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    time_created{YType::str, "time-created"},
    time_elapsed_creation{YType::str, "time-elapsed-creation"},
    time_elapsed_status_changed{YType::str, "time-elapsed-status-changed"},
    time_elapsed_status_down{YType::uint32, "time-elapsed-status-down"},
    transport_lsp_down{YType::boolean, "transport-lsp-down"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    encapsulation_info(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo>())
	,local_interface(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface>())
	,local_signalling(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling>())
	,p2mp_pw(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw>())
	,peer_id(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId>())
	,preferred_path(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath>())
	,remote_interface(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface>())
	,remote_signalling(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling>())
	,statistics(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics>())
{
    encapsulation_info->parent = this;
    children["encapsulation-info"] = encapsulation_info;

    local_interface->parent = this;
    children["local-interface"] = local_interface;

    local_signalling->parent = this;
    children["local-signalling"] = local_signalling;

    p2mp_pw->parent = this;
    children["p2mp-pw"] = p2mp_pw;

    peer_id->parent = this;
    children["peer-id"] = peer_id;

    preferred_path->parent = this;
    children["preferred-path"] = preferred_path;

    remote_interface->parent = this;
    children["remote-interface"] = remote_interface;

    remote_signalling->parent = this;
    children["remote-signalling"] = remote_signalling;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "pseudowire"; yang_parent_name = "bridge-pw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::~Pseudowire()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::has_data() const
{
    return ad_method.is_set
	|| ad_remote_down.is_set
	|| admited_bw.is_set
	|| auto_discovery.is_set
	|| backup_active.is_set
	|| backup_force_active.is_set
	|| backup_pw.is_set
	|| bitrate_mismatched.is_set
	|| bridge_pw_type_mismatch.is_set
	|| cas_mismatched.is_set
	|| diff_ts_mismatched.is_set
	|| disable_delay.is_set
	|| disable_never.is_set
	|| evpn_src_acid.is_set
	|| fe_ctype.is_set
	|| forward_class.is_set
	|| freq_mismatched.is_set
	|| illegal_control_word.is_set
	|| imposed_vlan_id.is_set
	|| interworking.is_set
	|| ipv6_local_source_address.is_set
	|| is_evpnvpws_type.is_set
	|| is_flow_label_static.is_set
	|| is_multi_segment_pseudowire.is_set
	|| is_partially_programmed.is_set
	|| is_pwr_type.is_set
	|| is_vfi.is_set
	|| last_time_status_changed.is_set
	|| last_time_status_down.is_set
	|| ldp_label_advertise_failed.is_set
	|| load_balance.is_set
	|| local_control_word.is_set
	|| local_label_failed.is_set
	|| local_pseudo_wire_type.is_set
	|| local_source_address.is_set
	|| mac_limit_oper_down.is_set
	|| mtu_mismatched.is_set
	|| not_supported_qinq.is_set
	|| num_ma_cwithdraw_msg_received.is_set
	|| number_ma_cwithdraw_message_sent.is_set
	|| out_of_memory_state.is_set
	|| payload_bytes_mismatched.is_set
	|| payload_type_mismatched.is_set
	|| preferred_path_disable_fallback.is_set
	|| primary_peer_id.is_set
	|| primary_pseudo_wire_id.is_set
	|| primary_pw.is_set
	|| protocol.is_set
	|| pseudo_wire_id.is_set
	|| pseudo_wire_state.is_set
	|| pseudo_wire_type_mismatched.is_set
	|| pw_class_name.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| pw_flow_label_type.is_set
	|| pw_flow_label_type_cfg.is_set
	|| pw_redundancy_initial_delay.is_set
	|| pw_redundancy_one_way.is_set
	|| pw_status_use.is_set
	|| pwlsd_rewrite_failed.is_set
	|| remote_control_word.is_set
	|| remote_label_failed.is_set
	|| remote_pseudo_wire_type.is_set
	|| required_bw.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| rtp_mismatched.is_set
	|| sequencing_type.is_set
	|| shutdown.is_set
	|| sig_pkts_mismatched.is_set
	|| ssrc_mismatched.is_set
	|| state.is_set
	|| table_policy_name.is_set
	|| tag_rewrite.is_set
	|| time_created.is_set
	|| time_elapsed_creation.is_set
	|| time_elapsed_status_changed.is_set
	|| time_elapsed_status_down.is_set
	|| transport_lsp_down.is_set
	|| xconnect_id.is_set
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_interface !=  nullptr && local_interface->has_data())
	|| (local_signalling !=  nullptr && local_signalling->has_data())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_data())
	|| (peer_id !=  nullptr && peer_id->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (remote_interface !=  nullptr && remote_interface->has_data())
	|| (remote_signalling !=  nullptr && remote_signalling->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(ad_method.operation)
	|| is_set(ad_remote_down.operation)
	|| is_set(admited_bw.operation)
	|| is_set(auto_discovery.operation)
	|| is_set(backup_active.operation)
	|| is_set(backup_force_active.operation)
	|| is_set(backup_pw.operation)
	|| is_set(bitrate_mismatched.operation)
	|| is_set(bridge_pw_type_mismatch.operation)
	|| is_set(cas_mismatched.operation)
	|| is_set(diff_ts_mismatched.operation)
	|| is_set(disable_delay.operation)
	|| is_set(disable_never.operation)
	|| is_set(evpn_src_acid.operation)
	|| is_set(fe_ctype.operation)
	|| is_set(forward_class.operation)
	|| is_set(freq_mismatched.operation)
	|| is_set(illegal_control_word.operation)
	|| is_set(imposed_vlan_id.operation)
	|| is_set(interworking.operation)
	|| is_set(ipv6_local_source_address.operation)
	|| is_set(is_evpnvpws_type.operation)
	|| is_set(is_flow_label_static.operation)
	|| is_set(is_multi_segment_pseudowire.operation)
	|| is_set(is_partially_programmed.operation)
	|| is_set(is_pwr_type.operation)
	|| is_set(is_vfi.operation)
	|| is_set(last_time_status_changed.operation)
	|| is_set(last_time_status_down.operation)
	|| is_set(ldp_label_advertise_failed.operation)
	|| is_set(load_balance.operation)
	|| is_set(local_control_word.operation)
	|| is_set(local_label_failed.operation)
	|| is_set(local_pseudo_wire_type.operation)
	|| is_set(local_source_address.operation)
	|| is_set(mac_limit_oper_down.operation)
	|| is_set(mtu_mismatched.operation)
	|| is_set(not_supported_qinq.operation)
	|| is_set(num_ma_cwithdraw_msg_received.operation)
	|| is_set(number_ma_cwithdraw_message_sent.operation)
	|| is_set(out_of_memory_state.operation)
	|| is_set(payload_bytes_mismatched.operation)
	|| is_set(payload_type_mismatched.operation)
	|| is_set(preferred_path_disable_fallback.operation)
	|| is_set(primary_peer_id.operation)
	|| is_set(primary_pseudo_wire_id.operation)
	|| is_set(primary_pw.operation)
	|| is_set(protocol.operation)
	|| is_set(pseudo_wire_id.operation)
	|| is_set(pseudo_wire_state.operation)
	|| is_set(pseudo_wire_type_mismatched.operation)
	|| is_set(pw_class_name.operation)
	|| is_set(pw_flow_label_code17_disabled.operation)
	|| is_set(pw_flow_label_type.operation)
	|| is_set(pw_flow_label_type_cfg.operation)
	|| is_set(pw_redundancy_initial_delay.operation)
	|| is_set(pw_redundancy_one_way.operation)
	|| is_set(pw_status_use.operation)
	|| is_set(pwlsd_rewrite_failed.operation)
	|| is_set(remote_control_word.operation)
	|| is_set(remote_label_failed.operation)
	|| is_set(remote_pseudo_wire_type.operation)
	|| is_set(required_bw.operation)
	|| is_set(resync_enabled.operation)
	|| is_set(resync_threshold.operation)
	|| is_set(rtp_mismatched.operation)
	|| is_set(sequencing_type.operation)
	|| is_set(shutdown.operation)
	|| is_set(sig_pkts_mismatched.operation)
	|| is_set(ssrc_mismatched.operation)
	|| is_set(state.operation)
	|| is_set(table_policy_name.operation)
	|| is_set(tag_rewrite.operation)
	|| is_set(time_created.operation)
	|| is_set(time_elapsed_creation.operation)
	|| is_set(time_elapsed_status_changed.operation)
	|| is_set(time_elapsed_status_down.operation)
	|| is_set(transport_lsp_down.operation)
	|| is_set(xconnect_id.operation)
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_interface !=  nullptr && local_interface->has_operation())
	|| (local_signalling !=  nullptr && local_signalling->has_operation())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_operation())
	|| (peer_id !=  nullptr && peer_id->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (remote_interface !=  nullptr && remote_interface->has_operation())
	|| (remote_signalling !=  nullptr && remote_signalling->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pseudowire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.operation)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_remote_down.is_set || is_set(ad_remote_down.operation)) leaf_name_data.push_back(ad_remote_down.get_name_leafdata());
    if (admited_bw.is_set || is_set(admited_bw.operation)) leaf_name_data.push_back(admited_bw.get_name_leafdata());
    if (auto_discovery.is_set || is_set(auto_discovery.operation)) leaf_name_data.push_back(auto_discovery.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_force_active.is_set || is_set(backup_force_active.operation)) leaf_name_data.push_back(backup_force_active.get_name_leafdata());
    if (backup_pw.is_set || is_set(backup_pw.operation)) leaf_name_data.push_back(backup_pw.get_name_leafdata());
    if (bitrate_mismatched.is_set || is_set(bitrate_mismatched.operation)) leaf_name_data.push_back(bitrate_mismatched.get_name_leafdata());
    if (bridge_pw_type_mismatch.is_set || is_set(bridge_pw_type_mismatch.operation)) leaf_name_data.push_back(bridge_pw_type_mismatch.get_name_leafdata());
    if (cas_mismatched.is_set || is_set(cas_mismatched.operation)) leaf_name_data.push_back(cas_mismatched.get_name_leafdata());
    if (diff_ts_mismatched.is_set || is_set(diff_ts_mismatched.operation)) leaf_name_data.push_back(diff_ts_mismatched.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.operation)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.operation)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (evpn_src_acid.is_set || is_set(evpn_src_acid.operation)) leaf_name_data.push_back(evpn_src_acid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (freq_mismatched.is_set || is_set(freq_mismatched.operation)) leaf_name_data.push_back(freq_mismatched.get_name_leafdata());
    if (illegal_control_word.is_set || is_set(illegal_control_word.operation)) leaf_name_data.push_back(illegal_control_word.get_name_leafdata());
    if (imposed_vlan_id.is_set || is_set(imposed_vlan_id.operation)) leaf_name_data.push_back(imposed_vlan_id.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (ipv6_local_source_address.is_set || is_set(ipv6_local_source_address.operation)) leaf_name_data.push_back(ipv6_local_source_address.get_name_leafdata());
    if (is_evpnvpws_type.is_set || is_set(is_evpnvpws_type.operation)) leaf_name_data.push_back(is_evpnvpws_type.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.operation)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (is_multi_segment_pseudowire.is_set || is_set(is_multi_segment_pseudowire.operation)) leaf_name_data.push_back(is_multi_segment_pseudowire.get_name_leafdata());
    if (is_partially_programmed.is_set || is_set(is_partially_programmed.operation)) leaf_name_data.push_back(is_partially_programmed.get_name_leafdata());
    if (is_pwr_type.is_set || is_set(is_pwr_type.operation)) leaf_name_data.push_back(is_pwr_type.get_name_leafdata());
    if (is_vfi.is_set || is_set(is_vfi.operation)) leaf_name_data.push_back(is_vfi.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.operation)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (last_time_status_down.is_set || is_set(last_time_status_down.operation)) leaf_name_data.push_back(last_time_status_down.get_name_leafdata());
    if (ldp_label_advertise_failed.is_set || is_set(ldp_label_advertise_failed.operation)) leaf_name_data.push_back(ldp_label_advertise_failed.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.operation)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (local_control_word.is_set || is_set(local_control_word.operation)) leaf_name_data.push_back(local_control_word.get_name_leafdata());
    if (local_label_failed.is_set || is_set(local_label_failed.operation)) leaf_name_data.push_back(local_label_failed.get_name_leafdata());
    if (local_pseudo_wire_type.is_set || is_set(local_pseudo_wire_type.operation)) leaf_name_data.push_back(local_pseudo_wire_type.get_name_leafdata());
    if (local_source_address.is_set || is_set(local_source_address.operation)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.operation)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.operation)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (not_supported_qinq.is_set || is_set(not_supported_qinq.operation)) leaf_name_data.push_back(not_supported_qinq.get_name_leafdata());
    if (num_ma_cwithdraw_msg_received.is_set || is_set(num_ma_cwithdraw_msg_received.operation)) leaf_name_data.push_back(num_ma_cwithdraw_msg_received.get_name_leafdata());
    if (number_ma_cwithdraw_message_sent.is_set || is_set(number_ma_cwithdraw_message_sent.operation)) leaf_name_data.push_back(number_ma_cwithdraw_message_sent.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.operation)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (payload_bytes_mismatched.is_set || is_set(payload_bytes_mismatched.operation)) leaf_name_data.push_back(payload_bytes_mismatched.get_name_leafdata());
    if (payload_type_mismatched.is_set || is_set(payload_type_mismatched.operation)) leaf_name_data.push_back(payload_type_mismatched.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.operation)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (primary_peer_id.is_set || is_set(primary_peer_id.operation)) leaf_name_data.push_back(primary_peer_id.get_name_leafdata());
    if (primary_pseudo_wire_id.is_set || is_set(primary_pseudo_wire_id.operation)) leaf_name_data.push_back(primary_pseudo_wire_id.get_name_leafdata());
    if (primary_pw.is_set || is_set(primary_pw.operation)) leaf_name_data.push_back(primary_pw.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pseudo_wire_id.is_set || is_set(pseudo_wire_id.operation)) leaf_name_data.push_back(pseudo_wire_id.get_name_leafdata());
    if (pseudo_wire_state.is_set || is_set(pseudo_wire_state.operation)) leaf_name_data.push_back(pseudo_wire_state.get_name_leafdata());
    if (pseudo_wire_type_mismatched.is_set || is_set(pseudo_wire_type_mismatched.operation)) leaf_name_data.push_back(pseudo_wire_type_mismatched.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.operation)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.operation)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (pw_flow_label_type.is_set || is_set(pw_flow_label_type.operation)) leaf_name_data.push_back(pw_flow_label_type.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.operation)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_redundancy_initial_delay.is_set || is_set(pw_redundancy_initial_delay.operation)) leaf_name_data.push_back(pw_redundancy_initial_delay.get_name_leafdata());
    if (pw_redundancy_one_way.is_set || is_set(pw_redundancy_one_way.operation)) leaf_name_data.push_back(pw_redundancy_one_way.get_name_leafdata());
    if (pw_status_use.is_set || is_set(pw_status_use.operation)) leaf_name_data.push_back(pw_status_use.get_name_leafdata());
    if (pwlsd_rewrite_failed.is_set || is_set(pwlsd_rewrite_failed.operation)) leaf_name_data.push_back(pwlsd_rewrite_failed.get_name_leafdata());
    if (remote_control_word.is_set || is_set(remote_control_word.operation)) leaf_name_data.push_back(remote_control_word.get_name_leafdata());
    if (remote_label_failed.is_set || is_set(remote_label_failed.operation)) leaf_name_data.push_back(remote_label_failed.get_name_leafdata());
    if (remote_pseudo_wire_type.is_set || is_set(remote_pseudo_wire_type.operation)) leaf_name_data.push_back(remote_pseudo_wire_type.get_name_leafdata());
    if (required_bw.is_set || is_set(required_bw.operation)) leaf_name_data.push_back(required_bw.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.operation)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.operation)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (rtp_mismatched.is_set || is_set(rtp_mismatched.operation)) leaf_name_data.push_back(rtp_mismatched.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.operation)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (sig_pkts_mismatched.is_set || is_set(sig_pkts_mismatched.operation)) leaf_name_data.push_back(sig_pkts_mismatched.get_name_leafdata());
    if (ssrc_mismatched.is_set || is_set(ssrc_mismatched.operation)) leaf_name_data.push_back(ssrc_mismatched.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.operation)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.operation)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.operation)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.operation)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.operation)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (time_elapsed_status_down.is_set || is_set(time_elapsed_status_down.operation)) leaf_name_data.push_back(time_elapsed_status_down.get_name_leafdata());
    if (transport_lsp_down.is_set || is_set(transport_lsp_down.operation)) leaf_name_data.push_back(transport_lsp_down.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info != nullptr)
        {
            children["encapsulation-info"] = encapsulation_info;
        }
        else
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo>();
            encapsulation_info->parent = this;
            children["encapsulation-info"] = encapsulation_info;
        }
        return children.at("encapsulation-info");
    }

    if(child_yang_name == "local-interface")
    {
        if(local_interface != nullptr)
        {
            children["local-interface"] = local_interface;
        }
        else
        {
            local_interface = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface>();
            local_interface->parent = this;
            children["local-interface"] = local_interface;
        }
        return children.at("local-interface");
    }

    if(child_yang_name == "local-signalling")
    {
        if(local_signalling != nullptr)
        {
            children["local-signalling"] = local_signalling;
        }
        else
        {
            local_signalling = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling>();
            local_signalling->parent = this;
            children["local-signalling"] = local_signalling;
        }
        return children.at("local-signalling");
    }

    if(child_yang_name == "p2mp-pw")
    {
        if(p2mp_pw != nullptr)
        {
            children["p2mp-pw"] = p2mp_pw;
        }
        else
        {
            p2mp_pw = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw>();
            p2mp_pw->parent = this;
            children["p2mp-pw"] = p2mp_pw;
        }
        return children.at("p2mp-pw");
    }

    if(child_yang_name == "peer-id")
    {
        if(peer_id != nullptr)
        {
            children["peer-id"] = peer_id;
        }
        else
        {
            peer_id = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId>();
            peer_id->parent = this;
            children["peer-id"] = peer_id;
        }
        return children.at("peer-id");
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
        else
        {
            preferred_path = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath>();
            preferred_path->parent = this;
            children["preferred-path"] = preferred_path;
        }
        return children.at("preferred-path");
    }

    if(child_yang_name == "remote-interface")
    {
        if(remote_interface != nullptr)
        {
            children["remote-interface"] = remote_interface;
        }
        else
        {
            remote_interface = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface>();
            remote_interface->parent = this;
            children["remote-interface"] = remote_interface;
        }
        return children.at("remote-interface");
    }

    if(child_yang_name == "remote-signalling")
    {
        if(remote_signalling != nullptr)
        {
            children["remote-signalling"] = remote_signalling;
        }
        else
        {
            remote_signalling = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling>();
            remote_signalling->parent = this;
            children["remote-signalling"] = remote_signalling;
        }
        return children.at("remote-signalling");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::get_children()
{
    if(children.find("encapsulation-info") == children.end())
    {
        if(encapsulation_info != nullptr)
        {
            children["encapsulation-info"] = encapsulation_info;
        }
    }

    if(children.find("local-interface") == children.end())
    {
        if(local_interface != nullptr)
        {
            children["local-interface"] = local_interface;
        }
    }

    if(children.find("local-signalling") == children.end())
    {
        if(local_signalling != nullptr)
        {
            children["local-signalling"] = local_signalling;
        }
    }

    if(children.find("p2mp-pw") == children.end())
    {
        if(p2mp_pw != nullptr)
        {
            children["p2mp-pw"] = p2mp_pw;
        }
    }

    if(children.find("peer-id") == children.end())
    {
        if(peer_id != nullptr)
        {
            children["peer-id"] = peer_id;
        }
    }

    if(children.find("preferred-path") == children.end())
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
    }

    if(children.find("remote-interface") == children.end())
    {
        if(remote_interface != nullptr)
        {
            children["remote-interface"] = remote_interface;
        }
    }

    if(children.find("remote-signalling") == children.end())
    {
        if(remote_signalling != nullptr)
        {
            children["remote-signalling"] = remote_signalling;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down = value;
    }
    if(value_path == "admited-bw")
    {
        admited_bw = value;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery = value;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active = value;
    }
    if(value_path == "backup-pw")
    {
        backup_pw = value;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched = value;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch = value;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched = value;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched = value;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid = value;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched = value;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word = value;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address = value;
    }
    if(value_path == "is-evpnvpws-type")
    {
        is_evpnvpws_type = value;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire = value;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed = value;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type = value;
    }
    if(value_path == "is-vfi")
    {
        is_vfi = value;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down = value;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed = value;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
    }
    if(value_path == "local-control-word")
    {
        local_control_word = value;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed = value;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type = value;
    }
    if(value_path == "local-source-address")
    {
        local_source_address = value;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq = value;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received = value;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent = value;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched = value;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched = value;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id = value;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id = value;
    }
    if(value_path == "primary-pw")
    {
        primary_pw = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id = value;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state = value;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched = value;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type = value;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay = value;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way = value;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use = value;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed = value;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word = value;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed = value;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type = value;
    }
    if(value_path == "required-bw")
    {
        required_bw = value;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched = value;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched = value;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
    }
    if(value_path == "time-created")
    {
        time_created = value;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down = value;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::PeerId()
    :
    internal_label{YType::uint32, "internal-label"},
    ipv4_peer_id{YType::str, "ipv4-peer-id"},
    ipv6_peer_id{YType::str, "ipv6-peer-id"},
    type{YType::enumeration, "type"}
{
    yang_name = "peer-id"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::~PeerId()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::has_data() const
{
    return internal_label.is_set
	|| ipv4_peer_id.is_set
	|| ipv6_peer_id.is_set
	|| type.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(ipv4_peer_id.operation)
	|| is_set(ipv6_peer_id.operation)
	|| is_set(type.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerId' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ipv4_peer_id.is_set || is_set(ipv4_peer_id.operation)) leaf_name_data.push_back(ipv4_peer_id.get_name_leafdata());
    if (ipv6_peer_id.is_set || is_set(ipv6_peer_id.operation)) leaf_name_data.push_back(ipv6_peer_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id = value;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    atom(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom>())
	,l2tpv3(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3>())
{
    atom->parent = this;
    children["atom"] = atom;

    l2tpv3->parent = this;
    children["l2tpv3"] = l2tpv3;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (atom !=  nullptr && atom->has_data())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| (atom !=  nullptr && atom->has_operation())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncapsulationInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atom")
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
        else
        {
            atom = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom>();
            atom->parent = this;
            children["atom"] = atom;
        }
        return children.at("atom");
    }

    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 != nullptr)
        {
            children["l2tpv3"] = l2tpv3;
        }
        else
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3>();
            l2tpv3->parent = this;
            children["l2tpv3"] = l2tpv3;
        }
        return children.at("l2tpv3");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_children()
{
    if(children.find("atom") == children.end())
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
    }

    if(children.find("l2tpv3") == children.end())
    {
        if(l2tpv3 != nullptr)
        {
            children["l2tpv3"] = l2tpv3;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::Atom()
    :
    is_pseudowire_headend{YType::boolean, "is-pseudowire-headend"},
    is_sai_itype2{YType::boolean, "is-sai-itype2"},
    is_tai_itype2{YType::boolean, "is-tai-itype2"},
    ldp_label_advertisment_failed{YType::boolean, "ldp-label-advertisment-failed"},
    local_c_ctype{YType::uint8, "local-c-ctype"},
    local_ceid{YType::uint32, "local-ceid"},
    local_cv_type{YType::uint8, "local-cv-type"},
    local_group_id{YType::uint32, "local-group-id"},
    local_label{YType::uint32, "local-label"},
    local_ldp_id{YType::str, "local-ldp-id"},
    local_saii_gbl_id{YType::uint32, "local-saii-gbl-id"},
    local_saiiac_id{YType::uint32, "local-saiiac-id"},
    local_taii_gbl_id{YType::uint32, "local-taii-gbl-id"},
    local_taiiac_id{YType::uint32, "local-taiiac-id"},
    local_veid{YType::uint32, "local-veid"},
    lsd_rewrite_failed{YType::boolean, "lsd-rewrite-failed"},
    rem_saii{YType::str, "rem-saii"},
    rem_saii_gbl_id{YType::uint32, "rem-saii-gbl-id"},
    rem_saiiac_id{YType::uint32, "rem-saiiac-id"},
    rem_taii{YType::str, "rem-taii"},
    rem_taii_gbl_id{YType::uint32, "rem-taii-gbl-id"},
    rem_taiiac_id{YType::uint32, "rem-taiiac-id"},
    remote_c_ctype{YType::uint8, "remote-c-ctype"},
    remote_ceid{YType::uint32, "remote-ceid"},
    remote_cv_type{YType::uint8, "remote-cv-type"},
    remote_group_id{YType::uint32, "remote-group-id"},
    remote_label{YType::uint32, "remote-label"},
    remote_ldp_id{YType::str, "remote-ldp-id"},
    remote_source_address{YType::str, "remote-source-address"},
    remote_veid{YType::uint32, "remote-veid"},
    saii{YType::str, "saii"},
    source_address{YType::str, "source-address"},
    taii{YType::str, "taii"}
    	,
    local_agi(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi>())
	,multi_segment_pseudowire_stats(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>())
	,remote_agi(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi>())
{
    local_agi->parent = this;
    children["local-agi"] = local_agi;

    multi_segment_pseudowire_stats->parent = this;
    children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;

    remote_agi->parent = this;
    children["remote-agi"] = remote_agi;

    yang_name = "atom"; yang_parent_name = "encapsulation-info";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::~Atom()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::has_data() const
{
    return is_pseudowire_headend.is_set
	|| is_sai_itype2.is_set
	|| is_tai_itype2.is_set
	|| ldp_label_advertisment_failed.is_set
	|| local_c_ctype.is_set
	|| local_ceid.is_set
	|| local_cv_type.is_set
	|| local_group_id.is_set
	|| local_label.is_set
	|| local_ldp_id.is_set
	|| local_saii_gbl_id.is_set
	|| local_saiiac_id.is_set
	|| local_taii_gbl_id.is_set
	|| local_taiiac_id.is_set
	|| local_veid.is_set
	|| lsd_rewrite_failed.is_set
	|| rem_saii.is_set
	|| rem_saii_gbl_id.is_set
	|| rem_saiiac_id.is_set
	|| rem_taii.is_set
	|| rem_taii_gbl_id.is_set
	|| rem_taiiac_id.is_set
	|| remote_c_ctype.is_set
	|| remote_ceid.is_set
	|| remote_cv_type.is_set
	|| remote_group_id.is_set
	|| remote_label.is_set
	|| remote_ldp_id.is_set
	|| remote_source_address.is_set
	|| remote_veid.is_set
	|| saii.is_set
	|| source_address.is_set
	|| taii.is_set
	|| (local_agi !=  nullptr && local_agi->has_data())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_data())
	|| (remote_agi !=  nullptr && remote_agi->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(is_pseudowire_headend.operation)
	|| is_set(is_sai_itype2.operation)
	|| is_set(is_tai_itype2.operation)
	|| is_set(ldp_label_advertisment_failed.operation)
	|| is_set(local_c_ctype.operation)
	|| is_set(local_ceid.operation)
	|| is_set(local_cv_type.operation)
	|| is_set(local_group_id.operation)
	|| is_set(local_label.operation)
	|| is_set(local_ldp_id.operation)
	|| is_set(local_saii_gbl_id.operation)
	|| is_set(local_saiiac_id.operation)
	|| is_set(local_taii_gbl_id.operation)
	|| is_set(local_taiiac_id.operation)
	|| is_set(local_veid.operation)
	|| is_set(lsd_rewrite_failed.operation)
	|| is_set(rem_saii.operation)
	|| is_set(rem_saii_gbl_id.operation)
	|| is_set(rem_saiiac_id.operation)
	|| is_set(rem_taii.operation)
	|| is_set(rem_taii_gbl_id.operation)
	|| is_set(rem_taiiac_id.operation)
	|| is_set(remote_c_ctype.operation)
	|| is_set(remote_ceid.operation)
	|| is_set(remote_cv_type.operation)
	|| is_set(remote_group_id.operation)
	|| is_set(remote_label.operation)
	|| is_set(remote_ldp_id.operation)
	|| is_set(remote_source_address.operation)
	|| is_set(remote_veid.operation)
	|| is_set(saii.operation)
	|| is_set(source_address.operation)
	|| is_set(taii.operation)
	|| (local_agi !=  nullptr && local_agi->has_operation())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_operation())
	|| (remote_agi !=  nullptr && remote_agi->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pseudowire_headend.is_set || is_set(is_pseudowire_headend.operation)) leaf_name_data.push_back(is_pseudowire_headend.get_name_leafdata());
    if (is_sai_itype2.is_set || is_set(is_sai_itype2.operation)) leaf_name_data.push_back(is_sai_itype2.get_name_leafdata());
    if (is_tai_itype2.is_set || is_set(is_tai_itype2.operation)) leaf_name_data.push_back(is_tai_itype2.get_name_leafdata());
    if (ldp_label_advertisment_failed.is_set || is_set(ldp_label_advertisment_failed.operation)) leaf_name_data.push_back(ldp_label_advertisment_failed.get_name_leafdata());
    if (local_c_ctype.is_set || is_set(local_c_ctype.operation)) leaf_name_data.push_back(local_c_ctype.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.operation)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (local_cv_type.is_set || is_set(local_cv_type.operation)) leaf_name_data.push_back(local_cv_type.get_name_leafdata());
    if (local_group_id.is_set || is_set(local_group_id.operation)) leaf_name_data.push_back(local_group_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_ldp_id.is_set || is_set(local_ldp_id.operation)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (local_saii_gbl_id.is_set || is_set(local_saii_gbl_id.operation)) leaf_name_data.push_back(local_saii_gbl_id.get_name_leafdata());
    if (local_saiiac_id.is_set || is_set(local_saiiac_id.operation)) leaf_name_data.push_back(local_saiiac_id.get_name_leafdata());
    if (local_taii_gbl_id.is_set || is_set(local_taii_gbl_id.operation)) leaf_name_data.push_back(local_taii_gbl_id.get_name_leafdata());
    if (local_taiiac_id.is_set || is_set(local_taiiac_id.operation)) leaf_name_data.push_back(local_taiiac_id.get_name_leafdata());
    if (local_veid.is_set || is_set(local_veid.operation)) leaf_name_data.push_back(local_veid.get_name_leafdata());
    if (lsd_rewrite_failed.is_set || is_set(lsd_rewrite_failed.operation)) leaf_name_data.push_back(lsd_rewrite_failed.get_name_leafdata());
    if (rem_saii.is_set || is_set(rem_saii.operation)) leaf_name_data.push_back(rem_saii.get_name_leafdata());
    if (rem_saii_gbl_id.is_set || is_set(rem_saii_gbl_id.operation)) leaf_name_data.push_back(rem_saii_gbl_id.get_name_leafdata());
    if (rem_saiiac_id.is_set || is_set(rem_saiiac_id.operation)) leaf_name_data.push_back(rem_saiiac_id.get_name_leafdata());
    if (rem_taii.is_set || is_set(rem_taii.operation)) leaf_name_data.push_back(rem_taii.get_name_leafdata());
    if (rem_taii_gbl_id.is_set || is_set(rem_taii_gbl_id.operation)) leaf_name_data.push_back(rem_taii_gbl_id.get_name_leafdata());
    if (rem_taiiac_id.is_set || is_set(rem_taiiac_id.operation)) leaf_name_data.push_back(rem_taiiac_id.get_name_leafdata());
    if (remote_c_ctype.is_set || is_set(remote_c_ctype.operation)) leaf_name_data.push_back(remote_c_ctype.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.operation)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (remote_cv_type.is_set || is_set(remote_cv_type.operation)) leaf_name_data.push_back(remote_cv_type.get_name_leafdata());
    if (remote_group_id.is_set || is_set(remote_group_id.operation)) leaf_name_data.push_back(remote_group_id.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_ldp_id.is_set || is_set(remote_ldp_id.operation)) leaf_name_data.push_back(remote_ldp_id.get_name_leafdata());
    if (remote_source_address.is_set || is_set(remote_source_address.operation)) leaf_name_data.push_back(remote_source_address.get_name_leafdata());
    if (remote_veid.is_set || is_set(remote_veid.operation)) leaf_name_data.push_back(remote_veid.get_name_leafdata());
    if (saii.is_set || is_set(saii.operation)) leaf_name_data.push_back(saii.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (taii.is_set || is_set(taii.operation)) leaf_name_data.push_back(taii.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-agi")
    {
        if(local_agi != nullptr)
        {
            children["local-agi"] = local_agi;
        }
        else
        {
            local_agi = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi>();
            local_agi->parent = this;
            children["local-agi"] = local_agi;
        }
        return children.at("local-agi");
    }

    if(child_yang_name == "multi-segment-pseudowire-stats")
    {
        if(multi_segment_pseudowire_stats != nullptr)
        {
            children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
        }
        else
        {
            multi_segment_pseudowire_stats = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>();
            multi_segment_pseudowire_stats->parent = this;
            children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
        }
        return children.at("multi-segment-pseudowire-stats");
    }

    if(child_yang_name == "remote-agi")
    {
        if(remote_agi != nullptr)
        {
            children["remote-agi"] = remote_agi;
        }
        else
        {
            remote_agi = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi>();
            remote_agi->parent = this;
            children["remote-agi"] = remote_agi;
        }
        return children.at("remote-agi");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_children()
{
    if(children.find("local-agi") == children.end())
    {
        if(local_agi != nullptr)
        {
            children["local-agi"] = local_agi;
        }
    }

    if(children.find("multi-segment-pseudowire-stats") == children.end())
    {
        if(multi_segment_pseudowire_stats != nullptr)
        {
            children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
        }
    }

    if(children.find("remote-agi") == children.end())
    {
        if(remote_agi != nullptr)
        {
            children["remote-agi"] = remote_agi;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend = value;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2 = value;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2 = value;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed = value;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype = value;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type = value;
    }
    if(value_path == "local-group-id")
    {
        local_group_id = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id = value;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id = value;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id = value;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id = value;
    }
    if(value_path == "local-veid")
    {
        local_veid = value;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed = value;
    }
    if(value_path == "rem-saii")
    {
        rem_saii = value;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id = value;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id = value;
    }
    if(value_path == "rem-taii")
    {
        rem_taii = value;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id = value;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id = value;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype = value;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type = value;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id = value;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address = value;
    }
    if(value_path == "remote-veid")
    {
        remote_veid = value;
    }
    if(value_path == "saii")
    {
        saii = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "taii")
    {
        taii = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::LocalAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "local-agi"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::~LocalAgi()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-agi";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAgi' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::RemoteAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "remote-agi"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::~RemoteAgi()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-agi";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAgi' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::MultiSegmentPseudowireStats()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"}
{
    yang_name = "multi-segment-pseudowire-stats"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::~MultiSegmentPseudowireStats()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_data() const
{
    return received_bytes.is_set
	|| received_packets.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_operation() const
{
    return is_set(operation)
	|| is_set(received_bytes.operation)
	|| is_set(received_packets.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-segment-pseudowire-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiSegmentPseudowireStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.operation)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv6_source_address{YType::str, "ipv6-source-address"},
    l2tp_class_name{YType::str, "l2tp-class-name"},
    local_cookie_high_value{YType::uint32, "local-cookie-high-value"},
    local_cookie_low_value{YType::uint32, "local-cookie-low-value"},
    local_cookie_size{YType::uint8, "local-cookie-size"},
    local_secondary_cookie_high_value{YType::uint32, "local-secondary-cookie-high-value"},
    local_secondary_cookie_low_value{YType::uint32, "local-secondary-cookie-low-value"},
    local_secondary_cookie_size{YType::uint8, "local-secondary-cookie-size"},
    local_session_id{YType::uint32, "local-session-id"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    remote_circuit_status_up{YType::boolean, "remote-circuit-status-up"},
    remote_cookie_high_value{YType::uint32, "remote-cookie-high-value"},
    remote_cookie_low_value{YType::uint32, "remote-cookie-low-value"},
    remote_cookie_size{YType::uint8, "remote-cookie-size"},
    remote_session_id{YType::uint32, "remote-session-id"},
    tos{YType::uint8, "tos"},
    tos_mode{YType::enumeration, "tos-mode"},
    ttl{YType::uint8, "ttl"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::has_data() const
{
    return dont_fragment_bit.is_set
	|| ipv4_source_address.is_set
	|| ipv6_source_address.is_set
	|| l2tp_class_name.is_set
	|| local_cookie_high_value.is_set
	|| local_cookie_low_value.is_set
	|| local_cookie_size.is_set
	|| local_secondary_cookie_high_value.is_set
	|| local_secondary_cookie_low_value.is_set
	|| local_secondary_cookie_size.is_set
	|| local_session_id.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| remote_circuit_status_up.is_set
	|| remote_cookie_high_value.is_set
	|| remote_cookie_low_value.is_set
	|| remote_cookie_size.is_set
	|| remote_session_id.is_set
	|| tos.is_set
	|| tos_mode.is_set
	|| ttl.is_set
	|| tunnel_state.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(operation)
	|| is_set(dont_fragment_bit.operation)
	|| is_set(ipv4_source_address.operation)
	|| is_set(ipv6_source_address.operation)
	|| is_set(l2tp_class_name.operation)
	|| is_set(local_cookie_high_value.operation)
	|| is_set(local_cookie_low_value.operation)
	|| is_set(local_cookie_size.operation)
	|| is_set(local_secondary_cookie_high_value.operation)
	|| is_set(local_secondary_cookie_low_value.operation)
	|| is_set(local_secondary_cookie_size.operation)
	|| is_set(local_session_id.operation)
	|| is_set(path_mtu_enabled.operation)
	|| is_set(path_mtu_max_value.operation)
	|| is_set(remote_circuit_status_up.operation)
	|| is_set(remote_cookie_high_value.operation)
	|| is_set(remote_cookie_low_value.operation)
	|| is_set(remote_cookie_size.operation)
	|| is_set(remote_session_id.operation)
	|| is_set(tos.operation)
	|| is_set(tos_mode.operation)
	|| is_set(ttl.operation)
	|| is_set(tunnel_state.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.operation)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.operation)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv6_source_address.is_set || is_set(ipv6_source_address.operation)) leaf_name_data.push_back(ipv6_source_address.get_name_leafdata());
    if (l2tp_class_name.is_set || is_set(l2tp_class_name.operation)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (local_cookie_high_value.is_set || is_set(local_cookie_high_value.operation)) leaf_name_data.push_back(local_cookie_high_value.get_name_leafdata());
    if (local_cookie_low_value.is_set || is_set(local_cookie_low_value.operation)) leaf_name_data.push_back(local_cookie_low_value.get_name_leafdata());
    if (local_cookie_size.is_set || is_set(local_cookie_size.operation)) leaf_name_data.push_back(local_cookie_size.get_name_leafdata());
    if (local_secondary_cookie_high_value.is_set || is_set(local_secondary_cookie_high_value.operation)) leaf_name_data.push_back(local_secondary_cookie_high_value.get_name_leafdata());
    if (local_secondary_cookie_low_value.is_set || is_set(local_secondary_cookie_low_value.operation)) leaf_name_data.push_back(local_secondary_cookie_low_value.get_name_leafdata());
    if (local_secondary_cookie_size.is_set || is_set(local_secondary_cookie_size.operation)) leaf_name_data.push_back(local_secondary_cookie_size.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.operation)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.operation)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.operation)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (remote_circuit_status_up.is_set || is_set(remote_circuit_status_up.operation)) leaf_name_data.push_back(remote_circuit_status_up.get_name_leafdata());
    if (remote_cookie_high_value.is_set || is_set(remote_cookie_high_value.operation)) leaf_name_data.push_back(remote_cookie_high_value.get_name_leafdata());
    if (remote_cookie_low_value.is_set || is_set(remote_cookie_low_value.operation)) leaf_name_data.push_back(remote_cookie_low_value.get_name_leafdata());
    if (remote_cookie_size.is_set || is_set(remote_cookie_size.operation)) leaf_name_data.push_back(remote_cookie_size.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.operation)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.operation)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address = value;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value = value;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value = value;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size = value;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value = value;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value = value;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size = value;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up = value;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value = value;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value = value;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size = value;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::LocalInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters>())
{
    parameters->parent = this;
    children["parameters"] = parameters;

    yang_name = "local-interface"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::~LocalInterface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(payload_bytes.operation)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalInterface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_children()
{
    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan>())
{
    atm->parent = this;
    children["atm"] = atm;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    fr->parent = this;
    children["fr"] = fr;

    pseudowire_ether->parent = this;
    children["pseudowire-ether"] = pseudowire_ether;

    pseudowire_iw->parent = this;
    children["pseudowire-iw"] = pseudowire_iw;

    tdm->parent = this;
    children["tdm"] = tdm;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "parameters"; yang_parent_name = "local-interface";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameters' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atm")
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
        else
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm>();
            atm->parent = this;
            children["atm"] = atm;
        }
        return children.at("atm");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "fr")
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
        else
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr>();
            fr->parent = this;
            children["fr"] = fr;
        }
        return children.at("fr");
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
        else
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther>();
            pseudowire_ether->parent = this;
            children["pseudowire-ether"] = pseudowire_ether;
        }
        return children.at("pseudowire-ether");
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
        else
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw>();
            pseudowire_iw->parent = this;
            children["pseudowire-iw"] = pseudowire_iw;
        }
        return children.at("pseudowire-iw");
    }

    if(child_yang_name == "tdm")
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
        else
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm>();
            tdm->parent = this;
            children["tdm"] = tdm;
        }
        return children.at("tdm");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_children()
{
    if(children.find("atm") == children.end())
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("fr") == children.end())
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
    }

    if(children.find("pseudowire-ether") == children.end())
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
    }

    if(children.find("pseudowire-iw") == children.end())
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
    }

    if(children.find("tdm") == children.end())
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "ethernet"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    rewrite_tag{YType::uint16, "rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "vlan"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(outer_tag.operation)
	|| is_set(rewrite_tag.operation)
	|| is_set(simple_efp.operation)
	|| is_set(vlan_rewrite_tag.operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.operation)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.operation)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    auto rewrite_tag_name_datas = rewrite_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rewrite_tag_name_datas.begin(), rewrite_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(std::move(c));
        children[segment_path] = vlan_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_children()
{
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "rewrite-tag")
    {
        rewrite_tag.append(value);
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "vlan-range"; yang_parent_name = "vlan";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;
    children["tdm-options"] = tdm_options;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tdm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tdm-options")
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
        else
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>();
            tdm_options->parent = this;
            children["tdm-options"] = tdm_options;
        }
        return children.at("tdm-options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_children()
{
    if(children.find("tdm-options") == children.end())
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdmOptions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::RemoteInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters>())
{
    parameters->parent = this;
    children["parameters"] = parameters;

    yang_name = "remote-interface"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::~RemoteInterface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(payload_bytes.operation)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteInterface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_children()
{
    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan>())
{
    atm->parent = this;
    children["atm"] = atm;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    fr->parent = this;
    children["fr"] = fr;

    pseudowire_ether->parent = this;
    children["pseudowire-ether"] = pseudowire_ether;

    pseudowire_iw->parent = this;
    children["pseudowire-iw"] = pseudowire_iw;

    tdm->parent = this;
    children["tdm"] = tdm;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "parameters"; yang_parent_name = "remote-interface";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameters' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atm")
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
        else
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm>();
            atm->parent = this;
            children["atm"] = atm;
        }
        return children.at("atm");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "fr")
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
        else
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr>();
            fr->parent = this;
            children["fr"] = fr;
        }
        return children.at("fr");
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
        else
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther>();
            pseudowire_ether->parent = this;
            children["pseudowire-ether"] = pseudowire_ether;
        }
        return children.at("pseudowire-ether");
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
        else
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw>();
            pseudowire_iw->parent = this;
            children["pseudowire-iw"] = pseudowire_iw;
        }
        return children.at("pseudowire-iw");
    }

    if(child_yang_name == "tdm")
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
        else
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm>();
            tdm->parent = this;
            children["tdm"] = tdm;
        }
        return children.at("tdm");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_children()
{
    if(children.find("atm") == children.end())
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("fr") == children.end())
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
    }

    if(children.find("pseudowire-ether") == children.end())
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
    }

    if(children.find("pseudowire-iw") == children.end())
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
    }

    if(children.find("tdm") == children.end())
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "ethernet"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    rewrite_tag{YType::uint16, "rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "vlan"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(outer_tag.operation)
	|| is_set(rewrite_tag.operation)
	|| is_set(simple_efp.operation)
	|| is_set(vlan_rewrite_tag.operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.operation)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.operation)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    auto rewrite_tag_name_datas = rewrite_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rewrite_tag_name_datas.begin(), rewrite_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(std::move(c));
        children[segment_path] = vlan_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_children()
{
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "rewrite-tag")
    {
        rewrite_tag.append(value);
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "vlan-range"; yang_parent_name = "vlan";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;
    children["tdm-options"] = tdm_options;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tdm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tdm-options")
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
        else
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>();
            tdm_options->parent = this;
            children["tdm-options"] = tdm_options;
        }
        return children.at("tdm-options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_children()
{
    if(children.find("tdm-options") == children.end())
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdmOptions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::PreferredPath()
    :
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    option{YType::enumeration, "option"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
{
    yang_name = "preferred-path"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::has_data() const
{
    return ip_tunnel_interface_number.is_set
	|| next_hop_ip.is_set
	|| option.is_set
	|| te_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_tunnel_interface_number.operation)
	|| is_set(next_hop_ip.operation)
	|| is_set(option.operation)
	|| is_set(te_tunnel_interface_number.operation)
	|| is_set(tp_tunnel_interface_number.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreferredPath' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.operation)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.operation)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.operation)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::LocalSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv>())
{
    status_tlv->parent = this;
    children["status-tlv"] = status_tlv;

    yang_name = "local-signalling"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::~LocalSignalling()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pw_status.operation)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-signalling";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalSignalling' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.operation)) leaf_name_data.push_back(pw_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-tlv")
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
        else
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv>();
            status_tlv->parent = this;
            children["status-tlv"] = status_tlv;
        }
        return children.at("status-tlv");
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(std::move(c));
        children[segment_path] = tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_children()
{
    if(children.find("status-tlv") == children.end())
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
    }

    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "status-tlv"; yang_parent_name = "local-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatusTlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "tlv"; yang_parent_name = "local-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv>())
{
    status_tlv->parent = this;
    children["status-tlv"] = status_tlv;

    yang_name = "remote-signalling"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pw_status.operation)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteSignalling' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.operation)) leaf_name_data.push_back(pw_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-tlv")
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
        else
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv>();
            status_tlv->parent = this;
            children["status-tlv"] = status_tlv;
        }
        return children.at("status-tlv");
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(std::move(c));
        children[segment_path] = tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_children()
{
    if(children.find("status-tlv") == children.end())
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
    }

    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "status-tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatusTlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    children["dispostion-stats"] = dispostion_stats;

    impostion_stats->parent = this;
    children["impostion-stats"] = impostion_stats;

    sequence_number->parent = this;
    children["sequence-number"] = sequence_number;

    yang_name = "statistics"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::~Statistics()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::has_operation() const
{
    return is_set(operation)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
        else
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats>();
            dispostion_stats->parent = this;
            children["dispostion-stats"] = dispostion_stats;
        }
        return children.at("dispostion-stats");
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
        else
        {
            impostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats>();
            impostion_stats->parent = this;
            children["impostion-stats"] = impostion_stats;
        }
        return children.at("impostion-stats");
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
        else
        {
            sequence_number = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber>();
            sequence_number->parent = this;
            children["sequence-number"] = sequence_number;
        }
        return children.at("sequence-number");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::get_children()
{
    if(children.find("dispostion-stats") == children.end())
    {
        if(dispostion_stats != nullptr)
        {
            children["dispostion-stats"] = dispostion_stats;
        }
    }

    if(children.find("impostion-stats") == children.end())
    {
        if(impostion_stats != nullptr)
        {
            children["impostion-stats"] = impostion_stats;
        }
    }

    if(children.find("sequence-number") == children.end())
    {
        if(sequence_number != nullptr)
        {
            children["sequence-number"] = sequence_number;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    children["broadcast"] = broadcast;

    imposition_mtu_drop->parent = this;
    children["imposition-mtu-drop"] = imposition_mtu_drop;

    imposition_stat->parent = this;
    children["imposition-stat"] = imposition_stat;

    impostion_tail_drop->parent = this;
    children["impostion-tail-drop"] = impostion_tail_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    l2fsbi_drop->parent = this;
    children["l2fsbi-drop"] = l2fsbi_drop;

    multicast->parent = this;
    children["multicast"] = multicast;

    unknown_unicast->parent = this;
    children["unknown-unicast"] = unknown_unicast;

    yang_name = "impostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
        else
        {
            broadcast = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast>();
            broadcast->parent = this;
            children["broadcast"] = broadcast;
        }
        return children.at("broadcast");
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        else
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>();
            imposition_mtu_drop->parent = this;
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
        return children.at("imposition-mtu-drop");
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
        else
        {
            imposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat>();
            imposition_stat->parent = this;
            children["imposition-stat"] = imposition_stat;
        }
        return children.at("imposition-stat");
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        else
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>();
            impostion_tail_drop->parent = this;
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
        return children.at("impostion-tail-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        else
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>();
            l2fsbi_drop->parent = this;
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
        return children.at("l2fsbi-drop");
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
        else
        {
            multicast = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast;
        }
        return children.at("multicast");
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
        else
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>();
            unknown_unicast->parent = this;
            children["unknown-unicast"] = unknown_unicast;
        }
        return children.at("unknown-unicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::get_children()
{
    if(children.find("broadcast") == children.end())
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
    }

    if(children.find("imposition-mtu-drop") == children.end())
    {
        if(imposition_mtu_drop != nullptr)
        {
            children["imposition-mtu-drop"] = imposition_mtu_drop;
        }
    }

    if(children.find("imposition-stat") == children.end())
    {
        if(imposition_stat != nullptr)
        {
            children["imposition-stat"] = imposition_stat;
        }
    }

    if(children.find("impostion-tail-drop") == children.end())
    {
        if(impostion_tail_drop != nullptr)
        {
            children["impostion-tail-drop"] = impostion_tail_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("l2fsbi-drop") == children.end())
    {
        if(l2fsbi_drop != nullptr)
        {
            children["l2fsbi-drop"] = l2fsbi_drop;
        }
    }

    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast;
        }
    }

    if(children.find("unknown-unicast") == children.end())
    {
        if(unknown_unicast != nullptr)
        {
            children["unknown-unicast"] = unknown_unicast;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImpostionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2FsbiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    children["broadcast-drop"] = broadcast_drop;

    dai_drop->parent = this;
    children["dai-drop"] = dai_drop;

    disposition_mtu_drop->parent = this;
    children["disposition-mtu-drop"] = disposition_mtu_drop;

    disposition_oo_o_drops->parent = this;
    children["disposition-oo-o-drops"] = disposition_oo_o_drops;

    disposition_p2mp_stats->parent = this;
    children["disposition-p2mp-stats"] = disposition_p2mp_stats;

    disposition_stat->parent = this;
    children["disposition-stat"] = disposition_stat;

    disposition_tail_drop->parent = this;
    children["disposition-tail-drop"] = disposition_tail_drop;

    ipsg_drop->parent = this;
    children["ipsg-drop"] = ipsg_drop;

    known_unicast->parent = this;
    children["known-unicast"] = known_unicast;

    mac_move->parent = this;
    children["mac-move"] = mac_move;

    multicast_drop->parent = this;
    children["multicast-drop"] = multicast_drop;

    received_drops->parent = this;
    children["received-drops"] = received_drops;

    unicast_drop->parent = this;
    children["unicast-drop"] = unicast_drop;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::has_operation() const
{
    return is_set(operation)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispostionStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
        else
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop>();
            broadcast_drop->parent = this;
            children["broadcast-drop"] = broadcast_drop;
        }
        return children.at("broadcast-drop");
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
        else
        {
            dai_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop>();
            dai_drop->parent = this;
            children["dai-drop"] = dai_drop;
        }
        return children.at("dai-drop");
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        else
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>();
            disposition_mtu_drop->parent = this;
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
        return children.at("disposition-mtu-drop");
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        else
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>();
            disposition_oo_o_drops->parent = this;
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
        return children.at("disposition-oo-o-drops");
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        else
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>();
            disposition_p2mp_stats->parent = this;
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
        return children.at("disposition-p2mp-stats");
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
        else
        {
            disposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat>();
            disposition_stat->parent = this;
            children["disposition-stat"] = disposition_stat;
        }
        return children.at("disposition-stat");
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        else
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>();
            disposition_tail_drop->parent = this;
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
        return children.at("disposition-tail-drop");
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
        else
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop>();
            ipsg_drop->parent = this;
            children["ipsg-drop"] = ipsg_drop;
        }
        return children.at("ipsg-drop");
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
        else
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast>();
            known_unicast->parent = this;
            children["known-unicast"] = known_unicast;
        }
        return children.at("known-unicast");
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
        else
        {
            mac_move = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove>();
            mac_move->parent = this;
            children["mac-move"] = mac_move;
        }
        return children.at("mac-move");
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
        else
        {
            multicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop>();
            multicast_drop->parent = this;
            children["multicast-drop"] = multicast_drop;
        }
        return children.at("multicast-drop");
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
        else
        {
            received_drops = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops>();
            received_drops->parent = this;
            children["received-drops"] = received_drops;
        }
        return children.at("received-drops");
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
        else
        {
            unicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop>();
            unicast_drop->parent = this;
            children["unicast-drop"] = unicast_drop;
        }
        return children.at("unicast-drop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::get_children()
{
    if(children.find("broadcast-drop") == children.end())
    {
        if(broadcast_drop != nullptr)
        {
            children["broadcast-drop"] = broadcast_drop;
        }
    }

    if(children.find("dai-drop") == children.end())
    {
        if(dai_drop != nullptr)
        {
            children["dai-drop"] = dai_drop;
        }
    }

    if(children.find("disposition-mtu-drop") == children.end())
    {
        if(disposition_mtu_drop != nullptr)
        {
            children["disposition-mtu-drop"] = disposition_mtu_drop;
        }
    }

    if(children.find("disposition-oo-o-drops") == children.end())
    {
        if(disposition_oo_o_drops != nullptr)
        {
            children["disposition-oo-o-drops"] = disposition_oo_o_drops;
        }
    }

    if(children.find("disposition-p2mp-stats") == children.end())
    {
        if(disposition_p2mp_stats != nullptr)
        {
            children["disposition-p2mp-stats"] = disposition_p2mp_stats;
        }
    }

    if(children.find("disposition-stat") == children.end())
    {
        if(disposition_stat != nullptr)
        {
            children["disposition-stat"] = disposition_stat;
        }
    }

    if(children.find("disposition-tail-drop") == children.end())
    {
        if(disposition_tail_drop != nullptr)
        {
            children["disposition-tail-drop"] = disposition_tail_drop;
        }
    }

    if(children.find("ipsg-drop") == children.end())
    {
        if(ipsg_drop != nullptr)
        {
            children["ipsg-drop"] = ipsg_drop;
        }
    }

    if(children.find("known-unicast") == children.end())
    {
        if(known_unicast != nullptr)
        {
            children["known-unicast"] = known_unicast;
        }
    }

    if(children.find("mac-move") == children.end())
    {
        if(mac_move != nullptr)
        {
            children["mac-move"] = mac_move;
        }
    }

    if(children.find("multicast-drop") == children.end())
    {
        if(multicast_drop != nullptr)
        {
            children["multicast-drop"] = multicast_drop;
        }
    }

    if(children.find("received-drops") == children.end())
    {
        if(received_drops != nullptr)
        {
            children["received-drops"] = received_drops;
        }
    }

    if(children.find("unicast-drop") == children.end())
    {
        if(unicast_drop != nullptr)
        {
            children["unicast-drop"] = unicast_drop;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionStat' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionMtuDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionTailDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnicastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BroadcastDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "received-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedDrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DaiDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpsgDrop' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionOoODrops' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DispositionP2MpStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KnownUnicast' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{
    yang_name = "mac-move"; yang_parent_name = "dispostion-stats";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(operation)
	|| is_set(byte_counts.operation)
	|| is_set(packet_counts.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacMove' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.operation)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.operation)) leaf_name_data.push_back(packet_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{
    yang_name = "sequence-number"; yang_parent_name = "statistics";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(operation)
	|| is_set(bypassed_inbound_sequence_packet.operation)
	|| is_set(bypassed_out_sequence_packet.operation)
	|| is_set(sequence_number_expected.operation)
	|| is_set(sequence_number_sent.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SequenceNumber' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.operation)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.operation)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.operation)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.operation)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::Statistics::SequenceNumber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::P2MpPw()
    :
    local_available{YType::boolean, "local-available"},
    local_extended_tunnel_id{YType::str, "local-extended-tunnel-id"},
    local_flags{YType::uint8, "local-flags"},
    local_label{YType::uint32, "local-label"},
    local_p2mp_id{YType::uint32, "local-p2mp-id"},
    local_ptree_type{YType::enumeration, "local-ptree-type"},
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    remote_available{YType::boolean, "remote-available"},
    remote_extended_tunnel_id{YType::str, "remote-extended-tunnel-id"},
    remote_flags{YType::uint8, "remote-flags"},
    remote_label{YType::uint32, "remote-label"},
    remote_p2mp_id{YType::uint32, "remote-p2mp-id"},
    remote_ptree_type{YType::enumeration, "remote-ptree-type"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
{
    yang_name = "p2mp-pw"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::~P2MpPw()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::has_data() const
{
    return local_available.is_set
	|| local_extended_tunnel_id.is_set
	|| local_flags.is_set
	|| local_label.is_set
	|| local_p2mp_id.is_set
	|| local_ptree_type.is_set
	|| local_tunnel_id.is_set
	|| remote_available.is_set
	|| remote_extended_tunnel_id.is_set
	|| remote_flags.is_set
	|| remote_label.is_set
	|| remote_p2mp_id.is_set
	|| remote_ptree_type.is_set
	|| remote_tunnel_id.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::has_operation() const
{
    return is_set(operation)
	|| is_set(local_available.operation)
	|| is_set(local_extended_tunnel_id.operation)
	|| is_set(local_flags.operation)
	|| is_set(local_label.operation)
	|| is_set(local_p2mp_id.operation)
	|| is_set(local_ptree_type.operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(remote_available.operation)
	|| is_set(remote_extended_tunnel_id.operation)
	|| is_set(remote_flags.operation)
	|| is_set(remote_label.operation)
	|| is_set(remote_p2mp_id.operation)
	|| is_set(remote_ptree_type.operation)
	|| is_set(remote_tunnel_id.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-pw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2MpPw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_available.is_set || is_set(local_available.operation)) leaf_name_data.push_back(local_available.get_name_leafdata());
    if (local_extended_tunnel_id.is_set || is_set(local_extended_tunnel_id.operation)) leaf_name_data.push_back(local_extended_tunnel_id.get_name_leafdata());
    if (local_flags.is_set || is_set(local_flags.operation)) leaf_name_data.push_back(local_flags.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_p2mp_id.is_set || is_set(local_p2mp_id.operation)) leaf_name_data.push_back(local_p2mp_id.get_name_leafdata());
    if (local_ptree_type.is_set || is_set(local_ptree_type.operation)) leaf_name_data.push_back(local_ptree_type.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_available.is_set || is_set(remote_available.operation)) leaf_name_data.push_back(remote_available.get_name_leafdata());
    if (remote_extended_tunnel_id.is_set || is_set(remote_extended_tunnel_id.operation)) leaf_name_data.push_back(remote_extended_tunnel_id.get_name_leafdata());
    if (remote_flags.is_set || is_set(remote_flags.operation)) leaf_name_data.push_back(remote_flags.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_p2mp_id.is_set || is_set(remote_p2mp_id.operation)) leaf_name_data.push_back(remote_p2mp_id.get_name_leafdata());
    if (remote_ptree_type.is_set || is_set(remote_ptree_type.operation)) leaf_name_data.push_back(remote_ptree_type.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-available")
    {
        local_available = value;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id = value;
    }
    if(value_path == "local-flags")
    {
        local_flags = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id = value;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type = value;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "remote-available")
    {
        remote_available = value;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id = value;
    }
    if(value_path == "remote-flags")
    {
        remote_flags = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id = value;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::SecurityParameters()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dhcpv4_trust{YType::boolean, "dhcpv4-trust"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    base(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base>())
	,storm_control(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl>())
{
    base->parent = this;
    children["base"] = base;

    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "security-parameters"; yang_parent_name = "bridge-pw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::~SecurityParameters()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dhcpv4_trust.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (base !=  nullptr && base->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dhcpv4_trust.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (base !=  nullptr && base->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecurityParameters' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dhcpv4_trust.is_set || is_set(dhcpv4_trust.operation)) leaf_name_data.push_back(dhcpv4_trust.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base")
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
        else
        {
            base = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base>();
            base->parent = this;
            children["base"] = base;
        }
        return children.at("base");
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::get_children()
{
    if(children.find("base") == children.end())
    {
        if(base != nullptr)
        {
            children["base"] = base;
        }
    }

    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dhcpv4-trust")
    {
        dhcpv4_trust = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::Base()
    :
    broadcast_storm_control_kb_ps{YType::uint64, "broadcast-storm-control-kb-ps"},
    broadcast_storm_control_pps{YType::uint64, "broadcast-storm-control-pps"},
    broadcast_storm_control_rate_unit{YType::enumeration, "broadcast-storm-control-rate-unit"},
    dai_address_validation_mask{YType::uint8, "dai-address-validation-mask"},
    dhcpv4_profile_name{YType::str, "dhcpv4-profile-name"},
    dhcpv4_snoop{YType::boolean, "dhcpv4-snoop"},
    flood_unknown_unicast_enabled{YType::boolean, "flood-unknown-unicast-enabled"},
    flood_uu_disabled_mac_limit_action{YType::boolean, "flood-uu-disabled-mac-limit-action"},
    igm_pv4_disabled{YType::boolean, "igm-pv4-disabled"},
    igm_pv4_profile_name{YType::str, "igm-pv4-profile-name"},
    is_dai_addr_validate_destination_mac_enabled{YType::boolean, "is-dai-addr-validate-destination-mac-enabled"},
    is_dai_addr_validate_ipv4_enabled{YType::boolean, "is-dai-addr-validate-ipv4-enabled"},
    is_dai_addr_validate_source_mac_enabled{YType::boolean, "is-dai-addr-validate-source-mac-enabled"},
    is_dai_enabled{YType::boolean, "is-dai-enabled"},
    is_dai_logging_enabled{YType::boolean, "is-dai-logging-enabled"},
    is_ip_source_guard_enabled{YType::boolean, "is-ip-source-guard-enabled"},
    is_ipsg_logging_enabled{YType::boolean, "is-ipsg-logging-enabled"},
    is_mac_secure_accept_shutdown_enabled{YType::boolean, "is-mac-secure-accept-shutdown-enabled"},
    is_mac_secure_enabled{YType::boolean, "is-mac-secure-enabled"},
    is_mac_secure_logging_enabled{YType::boolean, "is-mac-secure-logging-enabled"},
    learn_disabled_mac_limit_action{YType::boolean, "learn-disabled-mac-limit-action"},
    mac_aging_mode{YType::enumeration, "mac-aging-mode"},
    mac_aging_time{YType::uint32, "mac-aging-time"},
    mac_flooding{YType::boolean, "mac-flooding"},
    mac_learning{YType::boolean, "mac-learning"},
    mac_limit{YType::uint32, "mac-limit"},
    mac_limit_action{YType::enumeration, "mac-limit-action"},
    mac_limit_notification{YType::enumeration, "mac-limit-notification"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    mac_port_down_flush_enabled{YType::boolean, "mac-port-down-flush-enabled"},
    mac_secure_action{YType::enumeration, "mac-secure-action"},
    mld_profile_name{YType::str, "mld-profile-name"},
    mmrp_flood_optimization{YType::boolean, "mmrp-flood-optimization"},
    multicast_storm_control_kb_ps{YType::uint64, "multicast-storm-control-kb-ps"},
    multicast_storm_control_pps{YType::uint64, "multicast-storm-control-pps"},
    multicast_storm_control_rate_unit{YType::enumeration, "multicast-storm-control-rate-unit"},
    split_horizon_group_id{YType::uint32, "split-horizon-group-id"},
    unicast_storm_control_kb_ps{YType::uint64, "unicast-storm-control-kb-ps"},
    unicast_storm_control_pps{YType::uint64, "unicast-storm-control-pps"},
    unicast_storm_control_rate_unit{YType::enumeration, "unicast-storm-control-rate-unit"}
    	,
    storm_control(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl>())
{
    storm_control->parent = this;
    children["storm-control"] = storm_control;

    yang_name = "base"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::~Base()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::has_data() const
{
    return broadcast_storm_control_kb_ps.is_set
	|| broadcast_storm_control_pps.is_set
	|| broadcast_storm_control_rate_unit.is_set
	|| dai_address_validation_mask.is_set
	|| dhcpv4_profile_name.is_set
	|| dhcpv4_snoop.is_set
	|| flood_unknown_unicast_enabled.is_set
	|| flood_uu_disabled_mac_limit_action.is_set
	|| igm_pv4_disabled.is_set
	|| igm_pv4_profile_name.is_set
	|| is_dai_addr_validate_destination_mac_enabled.is_set
	|| is_dai_addr_validate_ipv4_enabled.is_set
	|| is_dai_addr_validate_source_mac_enabled.is_set
	|| is_dai_enabled.is_set
	|| is_dai_logging_enabled.is_set
	|| is_ip_source_guard_enabled.is_set
	|| is_ipsg_logging_enabled.is_set
	|| is_mac_secure_accept_shutdown_enabled.is_set
	|| is_mac_secure_enabled.is_set
	|| is_mac_secure_logging_enabled.is_set
	|| learn_disabled_mac_limit_action.is_set
	|| mac_aging_mode.is_set
	|| mac_aging_time.is_set
	|| mac_flooding.is_set
	|| mac_learning.is_set
	|| mac_limit.is_set
	|| mac_limit_action.is_set
	|| mac_limit_notification.is_set
	|| mac_limit_reached.is_set
	|| mac_port_down_flush_enabled.is_set
	|| mac_secure_action.is_set
	|| mld_profile_name.is_set
	|| mmrp_flood_optimization.is_set
	|| multicast_storm_control_kb_ps.is_set
	|| multicast_storm_control_pps.is_set
	|| multicast_storm_control_rate_unit.is_set
	|| split_horizon_group_id.is_set
	|| unicast_storm_control_kb_ps.is_set
	|| unicast_storm_control_pps.is_set
	|| unicast_storm_control_rate_unit.is_set
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_storm_control_kb_ps.operation)
	|| is_set(broadcast_storm_control_pps.operation)
	|| is_set(broadcast_storm_control_rate_unit.operation)
	|| is_set(dai_address_validation_mask.operation)
	|| is_set(dhcpv4_profile_name.operation)
	|| is_set(dhcpv4_snoop.operation)
	|| is_set(flood_unknown_unicast_enabled.operation)
	|| is_set(flood_uu_disabled_mac_limit_action.operation)
	|| is_set(igm_pv4_disabled.operation)
	|| is_set(igm_pv4_profile_name.operation)
	|| is_set(is_dai_addr_validate_destination_mac_enabled.operation)
	|| is_set(is_dai_addr_validate_ipv4_enabled.operation)
	|| is_set(is_dai_addr_validate_source_mac_enabled.operation)
	|| is_set(is_dai_enabled.operation)
	|| is_set(is_dai_logging_enabled.operation)
	|| is_set(is_ip_source_guard_enabled.operation)
	|| is_set(is_ipsg_logging_enabled.operation)
	|| is_set(is_mac_secure_accept_shutdown_enabled.operation)
	|| is_set(is_mac_secure_enabled.operation)
	|| is_set(is_mac_secure_logging_enabled.operation)
	|| is_set(learn_disabled_mac_limit_action.operation)
	|| is_set(mac_aging_mode.operation)
	|| is_set(mac_aging_time.operation)
	|| is_set(mac_flooding.operation)
	|| is_set(mac_learning.operation)
	|| is_set(mac_limit.operation)
	|| is_set(mac_limit_action.operation)
	|| is_set(mac_limit_notification.operation)
	|| is_set(mac_limit_reached.operation)
	|| is_set(mac_port_down_flush_enabled.operation)
	|| is_set(mac_secure_action.operation)
	|| is_set(mld_profile_name.operation)
	|| is_set(mmrp_flood_optimization.operation)
	|| is_set(multicast_storm_control_kb_ps.operation)
	|| is_set(multicast_storm_control_pps.operation)
	|| is_set(multicast_storm_control_rate_unit.operation)
	|| is_set(split_horizon_group_id.operation)
	|| is_set(unicast_storm_control_kb_ps.operation)
	|| is_set(unicast_storm_control_pps.operation)
	|| is_set(unicast_storm_control_rate_unit.operation)
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_storm_control_kb_ps.is_set || is_set(broadcast_storm_control_kb_ps.operation)) leaf_name_data.push_back(broadcast_storm_control_kb_ps.get_name_leafdata());
    if (broadcast_storm_control_pps.is_set || is_set(broadcast_storm_control_pps.operation)) leaf_name_data.push_back(broadcast_storm_control_pps.get_name_leafdata());
    if (broadcast_storm_control_rate_unit.is_set || is_set(broadcast_storm_control_rate_unit.operation)) leaf_name_data.push_back(broadcast_storm_control_rate_unit.get_name_leafdata());
    if (dai_address_validation_mask.is_set || is_set(dai_address_validation_mask.operation)) leaf_name_data.push_back(dai_address_validation_mask.get_name_leafdata());
    if (dhcpv4_profile_name.is_set || is_set(dhcpv4_profile_name.operation)) leaf_name_data.push_back(dhcpv4_profile_name.get_name_leafdata());
    if (dhcpv4_snoop.is_set || is_set(dhcpv4_snoop.operation)) leaf_name_data.push_back(dhcpv4_snoop.get_name_leafdata());
    if (flood_unknown_unicast_enabled.is_set || is_set(flood_unknown_unicast_enabled.operation)) leaf_name_data.push_back(flood_unknown_unicast_enabled.get_name_leafdata());
    if (flood_uu_disabled_mac_limit_action.is_set || is_set(flood_uu_disabled_mac_limit_action.operation)) leaf_name_data.push_back(flood_uu_disabled_mac_limit_action.get_name_leafdata());
    if (igm_pv4_disabled.is_set || is_set(igm_pv4_disabled.operation)) leaf_name_data.push_back(igm_pv4_disabled.get_name_leafdata());
    if (igm_pv4_profile_name.is_set || is_set(igm_pv4_profile_name.operation)) leaf_name_data.push_back(igm_pv4_profile_name.get_name_leafdata());
    if (is_dai_addr_validate_destination_mac_enabled.is_set || is_set(is_dai_addr_validate_destination_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_destination_mac_enabled.get_name_leafdata());
    if (is_dai_addr_validate_ipv4_enabled.is_set || is_set(is_dai_addr_validate_ipv4_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_ipv4_enabled.get_name_leafdata());
    if (is_dai_addr_validate_source_mac_enabled.is_set || is_set(is_dai_addr_validate_source_mac_enabled.operation)) leaf_name_data.push_back(is_dai_addr_validate_source_mac_enabled.get_name_leafdata());
    if (is_dai_enabled.is_set || is_set(is_dai_enabled.operation)) leaf_name_data.push_back(is_dai_enabled.get_name_leafdata());
    if (is_dai_logging_enabled.is_set || is_set(is_dai_logging_enabled.operation)) leaf_name_data.push_back(is_dai_logging_enabled.get_name_leafdata());
    if (is_ip_source_guard_enabled.is_set || is_set(is_ip_source_guard_enabled.operation)) leaf_name_data.push_back(is_ip_source_guard_enabled.get_name_leafdata());
    if (is_ipsg_logging_enabled.is_set || is_set(is_ipsg_logging_enabled.operation)) leaf_name_data.push_back(is_ipsg_logging_enabled.get_name_leafdata());
    if (is_mac_secure_accept_shutdown_enabled.is_set || is_set(is_mac_secure_accept_shutdown_enabled.operation)) leaf_name_data.push_back(is_mac_secure_accept_shutdown_enabled.get_name_leafdata());
    if (is_mac_secure_enabled.is_set || is_set(is_mac_secure_enabled.operation)) leaf_name_data.push_back(is_mac_secure_enabled.get_name_leafdata());
    if (is_mac_secure_logging_enabled.is_set || is_set(is_mac_secure_logging_enabled.operation)) leaf_name_data.push_back(is_mac_secure_logging_enabled.get_name_leafdata());
    if (learn_disabled_mac_limit_action.is_set || is_set(learn_disabled_mac_limit_action.operation)) leaf_name_data.push_back(learn_disabled_mac_limit_action.get_name_leafdata());
    if (mac_aging_mode.is_set || is_set(mac_aging_mode.operation)) leaf_name_data.push_back(mac_aging_mode.get_name_leafdata());
    if (mac_aging_time.is_set || is_set(mac_aging_time.operation)) leaf_name_data.push_back(mac_aging_time.get_name_leafdata());
    if (mac_flooding.is_set || is_set(mac_flooding.operation)) leaf_name_data.push_back(mac_flooding.get_name_leafdata());
    if (mac_learning.is_set || is_set(mac_learning.operation)) leaf_name_data.push_back(mac_learning.get_name_leafdata());
    if (mac_limit.is_set || is_set(mac_limit.operation)) leaf_name_data.push_back(mac_limit.get_name_leafdata());
    if (mac_limit_action.is_set || is_set(mac_limit_action.operation)) leaf_name_data.push_back(mac_limit_action.get_name_leafdata());
    if (mac_limit_notification.is_set || is_set(mac_limit_notification.operation)) leaf_name_data.push_back(mac_limit_notification.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.operation)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (mac_port_down_flush_enabled.is_set || is_set(mac_port_down_flush_enabled.operation)) leaf_name_data.push_back(mac_port_down_flush_enabled.get_name_leafdata());
    if (mac_secure_action.is_set || is_set(mac_secure_action.operation)) leaf_name_data.push_back(mac_secure_action.get_name_leafdata());
    if (mld_profile_name.is_set || is_set(mld_profile_name.operation)) leaf_name_data.push_back(mld_profile_name.get_name_leafdata());
    if (mmrp_flood_optimization.is_set || is_set(mmrp_flood_optimization.operation)) leaf_name_data.push_back(mmrp_flood_optimization.get_name_leafdata());
    if (multicast_storm_control_kb_ps.is_set || is_set(multicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(multicast_storm_control_kb_ps.get_name_leafdata());
    if (multicast_storm_control_pps.is_set || is_set(multicast_storm_control_pps.operation)) leaf_name_data.push_back(multicast_storm_control_pps.get_name_leafdata());
    if (multicast_storm_control_rate_unit.is_set || is_set(multicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(multicast_storm_control_rate_unit.get_name_leafdata());
    if (split_horizon_group_id.is_set || is_set(split_horizon_group_id.operation)) leaf_name_data.push_back(split_horizon_group_id.get_name_leafdata());
    if (unicast_storm_control_kb_ps.is_set || is_set(unicast_storm_control_kb_ps.operation)) leaf_name_data.push_back(unicast_storm_control_kb_ps.get_name_leafdata());
    if (unicast_storm_control_pps.is_set || is_set(unicast_storm_control_pps.operation)) leaf_name_data.push_back(unicast_storm_control_pps.get_name_leafdata());
    if (unicast_storm_control_rate_unit.is_set || is_set(unicast_storm_control_rate_unit.operation)) leaf_name_data.push_back(unicast_storm_control_rate_unit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
        else
        {
            storm_control = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl>();
            storm_control->parent = this;
            children["storm-control"] = storm_control;
        }
        return children.at("storm-control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::get_children()
{
    if(children.find("storm-control") == children.end())
    {
        if(storm_control != nullptr)
        {
            children["storm-control"] = storm_control;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-storm-control-kb-ps")
    {
        broadcast_storm_control_kb_ps = value;
    }
    if(value_path == "broadcast-storm-control-pps")
    {
        broadcast_storm_control_pps = value;
    }
    if(value_path == "broadcast-storm-control-rate-unit")
    {
        broadcast_storm_control_rate_unit = value;
    }
    if(value_path == "dai-address-validation-mask")
    {
        dai_address_validation_mask = value;
    }
    if(value_path == "dhcpv4-profile-name")
    {
        dhcpv4_profile_name = value;
    }
    if(value_path == "dhcpv4-snoop")
    {
        dhcpv4_snoop = value;
    }
    if(value_path == "flood-unknown-unicast-enabled")
    {
        flood_unknown_unicast_enabled = value;
    }
    if(value_path == "flood-uu-disabled-mac-limit-action")
    {
        flood_uu_disabled_mac_limit_action = value;
    }
    if(value_path == "igm-pv4-disabled")
    {
        igm_pv4_disabled = value;
    }
    if(value_path == "igm-pv4-profile-name")
    {
        igm_pv4_profile_name = value;
    }
    if(value_path == "is-dai-addr-validate-destination-mac-enabled")
    {
        is_dai_addr_validate_destination_mac_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-ipv4-enabled")
    {
        is_dai_addr_validate_ipv4_enabled = value;
    }
    if(value_path == "is-dai-addr-validate-source-mac-enabled")
    {
        is_dai_addr_validate_source_mac_enabled = value;
    }
    if(value_path == "is-dai-enabled")
    {
        is_dai_enabled = value;
    }
    if(value_path == "is-dai-logging-enabled")
    {
        is_dai_logging_enabled = value;
    }
    if(value_path == "is-ip-source-guard-enabled")
    {
        is_ip_source_guard_enabled = value;
    }
    if(value_path == "is-ipsg-logging-enabled")
    {
        is_ipsg_logging_enabled = value;
    }
    if(value_path == "is-mac-secure-accept-shutdown-enabled")
    {
        is_mac_secure_accept_shutdown_enabled = value;
    }
    if(value_path == "is-mac-secure-enabled")
    {
        is_mac_secure_enabled = value;
    }
    if(value_path == "is-mac-secure-logging-enabled")
    {
        is_mac_secure_logging_enabled = value;
    }
    if(value_path == "learn-disabled-mac-limit-action")
    {
        learn_disabled_mac_limit_action = value;
    }
    if(value_path == "mac-aging-mode")
    {
        mac_aging_mode = value;
    }
    if(value_path == "mac-aging-time")
    {
        mac_aging_time = value;
    }
    if(value_path == "mac-flooding")
    {
        mac_flooding = value;
    }
    if(value_path == "mac-learning")
    {
        mac_learning = value;
    }
    if(value_path == "mac-limit")
    {
        mac_limit = value;
    }
    if(value_path == "mac-limit-action")
    {
        mac_limit_action = value;
    }
    if(value_path == "mac-limit-notification")
    {
        mac_limit_notification = value;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
    }
    if(value_path == "mac-port-down-flush-enabled")
    {
        mac_port_down_flush_enabled = value;
    }
    if(value_path == "mac-secure-action")
    {
        mac_secure_action = value;
    }
    if(value_path == "mld-profile-name")
    {
        mld_profile_name = value;
    }
    if(value_path == "mmrp-flood-optimization")
    {
        mmrp_flood_optimization = value;
    }
    if(value_path == "multicast-storm-control-kb-ps")
    {
        multicast_storm_control_kb_ps = value;
    }
    if(value_path == "multicast-storm-control-pps")
    {
        multicast_storm_control_pps = value;
    }
    if(value_path == "multicast-storm-control-rate-unit")
    {
        multicast_storm_control_rate_unit = value;
    }
    if(value_path == "split-horizon-group-id")
    {
        split_horizon_group_id = value;
    }
    if(value_path == "unicast-storm-control-kb-ps")
    {
        unicast_storm_control_kb_ps = value;
    }
    if(value_path == "unicast-storm-control-pps")
    {
        unicast_storm_control_pps = value;
    }
    if(value_path == "unicast-storm-control-rate-unit")
    {
        unicast_storm_control_rate_unit = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "base";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::~StormControl()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::Base::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::StormControl()
    :
    bd_policer{YType::boolean, "bd-policer"},
    broadcast{YType::boolean, "broadcast"},
    multicast{YType::boolean, "multicast"},
    unicast{YType::boolean, "unicast"}
{
    yang_name = "storm-control"; yang_parent_name = "security-parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::~StormControl()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::has_data() const
{
    return bd_policer.is_set
	|| broadcast.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_policer.operation)
	|| is_set(broadcast.operation)
	|| is_set(multicast.operation)
	|| is_set(unicast.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_policer.is_set || is_set(bd_policer.operation)) leaf_name_data.push_back(bd_policer.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::SecurityParameters::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-policer")
    {
        bd_policer = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::StaticMac()
    :
    address{YType::str, "address"},
    bmac{YType::str, "bmac"},
    next_hop_ip{YType::str, "next-hop-ip"}
{
    yang_name = "static-mac"; yang_parent_name = "bridge-pw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::~StaticMac()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::has_data() const
{
    return address.is_set
	|| bmac.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(bmac.operation)
	|| is_set(next_hop_ip.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticMac' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (bmac.is_set || is_set(bmac.operation)) leaf_name_data.push_back(bmac.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeAccessVfiTable::BridgePws::BridgePw::StaticMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "bmac")
    {
        bmac = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgeCoreVfiTable()
    :
    bridge_pws(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws>())
{
    bridge_pws->parent = this;
    children["bridge-pws"] = bridge_pws;

    yang_name = "bridge-core-vfi-table"; yang_parent_name = "bridge-domain";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::~BridgeCoreVfiTable()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::has_data() const
{
    return (bridge_pws !=  nullptr && bridge_pws->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::has_operation() const
{
    return is_set(operation)
	|| (bridge_pws !=  nullptr && bridge_pws->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-core-vfi-table";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeCoreVfiTable' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-pws")
    {
        if(bridge_pws != nullptr)
        {
            children["bridge-pws"] = bridge_pws;
        }
        else
        {
            bridge_pws = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws>();
            bridge_pws->parent = this;
            children["bridge-pws"] = bridge_pws;
        }
        return children.at("bridge-pws");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::get_children()
{
    if(children.find("bridge-pws") == children.end())
    {
        if(bridge_pws != nullptr)
        {
            children["bridge-pws"] = bridge_pws;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePws()
{
    yang_name = "bridge-pws"; yang_parent_name = "bridge-core-vfi-table";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::~BridgePws()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::has_data() const
{
    for (std::size_t index=0; index<bridge_pw.size(); index++)
    {
        if(bridge_pw[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::has_operation() const
{
    for (std::size_t index=0; index<bridge_pw.size(); index++)
    {
        if(bridge_pw[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-pws";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgePws' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-pw")
    {
        for(auto const & c : bridge_pw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw>();
        c->parent = this;
        bridge_pw.push_back(std::move(c));
        children[segment_path] = bridge_pw.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::get_children()
{
    for (auto const & c : bridge_pw)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::set_value(const std::string & value_path, std::string value)
{
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::BridgePw()
    :
    is_access{YType::boolean, "is-access"},
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    pw_type{YType::enumeration, "pw-type"},
    ve_id_vpls_id_0_3{YType::uint32, "ve-id-vpls-id-0-3"},
    vpls_id_4_7{YType::uint32, "vpls-id-4-7"}
    	,
    pseudowire(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire>())
	,security_parameters(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters>())
{
    pseudowire->parent = this;
    children["pseudowire"] = pseudowire;

    security_parameters->parent = this;
    children["security-parameters"] = security_parameters;

    yang_name = "bridge-pw"; yang_parent_name = "bridge-pws";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::~BridgePw()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::has_data() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_data())
            return true;
    }
    return is_access.is_set
	|| neighbor.is_set
	|| pseudowire_id.is_set
	|| pw_type.is_set
	|| ve_id_vpls_id_0_3.is_set
	|| vpls_id_4_7.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data())
	|| (security_parameters !=  nullptr && security_parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::has_operation() const
{
    for (std::size_t index=0; index<static_mac.size(); index++)
    {
        if(static_mac[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_access.operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(pw_type.operation)
	|| is_set(ve_id_vpls_id_0_3.operation)
	|| is_set(vpls_id_4_7.operation)
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (security_parameters !=  nullptr && security_parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-pw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgePw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_access.is_set || is_set(is_access.operation)) leaf_name_data.push_back(is_access.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (pw_type.is_set || is_set(pw_type.operation)) leaf_name_data.push_back(pw_type.get_name_leafdata());
    if (ve_id_vpls_id_0_3.is_set || is_set(ve_id_vpls_id_0_3.operation)) leaf_name_data.push_back(ve_id_vpls_id_0_3.get_name_leafdata());
    if (vpls_id_4_7.is_set || is_set(vpls_id_4_7.operation)) leaf_name_data.push_back(vpls_id_4_7.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire")
    {
        if(pseudowire != nullptr)
        {
            children["pseudowire"] = pseudowire;
        }
        else
        {
            pseudowire = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire>();
            pseudowire->parent = this;
            children["pseudowire"] = pseudowire;
        }
        return children.at("pseudowire");
    }

    if(child_yang_name == "security-parameters")
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
        else
        {
            security_parameters = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::SecurityParameters>();
            security_parameters->parent = this;
            children["security-parameters"] = security_parameters;
        }
        return children.at("security-parameters");
    }

    if(child_yang_name == "static-mac")
    {
        for(auto const & c : static_mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::StaticMac>();
        c->parent = this;
        static_mac.push_back(std::move(c));
        children[segment_path] = static_mac.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::get_children()
{
    if(children.find("pseudowire") == children.end())
    {
        if(pseudowire != nullptr)
        {
            children["pseudowire"] = pseudowire;
        }
    }

    if(children.find("security-parameters") == children.end())
    {
        if(security_parameters != nullptr)
        {
            children["security-parameters"] = security_parameters;
        }
    }

    for (auto const & c : static_mac)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-access")
    {
        is_access = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "pw-type")
    {
        pw_type = value;
    }
    if(value_path == "ve-id-vpls-id-0-3")
    {
        ve_id_vpls_id_0_3 = value;
    }
    if(value_path == "vpls-id-4-7")
    {
        vpls_id_4_7 = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Pseudowire()
    :
    ad_method{YType::uint32, "ad-method"},
    ad_remote_down{YType::boolean, "ad-remote-down"},
    admited_bw{YType::uint32, "admited-bw"},
    auto_discovery{YType::boolean, "auto-discovery"},
    backup_active{YType::boolean, "backup-active"},
    backup_force_active{YType::boolean, "backup-force-active"},
    backup_pw{YType::boolean, "backup-pw"},
    bitrate_mismatched{YType::boolean, "bitrate-mismatched"},
    bridge_pw_type_mismatch{YType::boolean, "bridge-pw-type-mismatch"},
    cas_mismatched{YType::boolean, "cas-mismatched"},
    diff_ts_mismatched{YType::boolean, "diff-ts-mismatched"},
    disable_delay{YType::uint8, "disable-delay"},
    disable_never{YType::boolean, "disable-never"},
    evpn_src_acid{YType::uint32, "evpn-src-acid"},
    fe_ctype{YType::enumeration, "fe-ctype"},
    forward_class{YType::uint8, "forward-class"},
    freq_mismatched{YType::boolean, "freq-mismatched"},
    illegal_control_word{YType::boolean, "illegal-control-word"},
    imposed_vlan_id{YType::uint32, "imposed-vlan-id"},
    interworking{YType::enumeration, "interworking"},
    ipv6_local_source_address{YType::str, "ipv6-local-source-address"},
    is_evpnvpws_type{YType::boolean, "is-evpnvpws-type"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    is_multi_segment_pseudowire{YType::boolean, "is-multi-segment-pseudowire"},
    is_partially_programmed{YType::boolean, "is-partially-programmed"},
    is_pwr_type{YType::boolean, "is-pwr-type"},
    is_vfi{YType::boolean, "is-vfi"},
    last_time_status_changed{YType::str, "last-time-status-changed"},
    last_time_status_down{YType::str, "last-time-status-down"},
    ldp_label_advertise_failed{YType::boolean, "ldp-label-advertise-failed"},
    load_balance{YType::enumeration, "load-balance"},
    local_control_word{YType::enumeration, "local-control-word"},
    local_label_failed{YType::boolean, "local-label-failed"},
    local_pseudo_wire_type{YType::enumeration, "local-pseudo-wire-type"},
    local_source_address{YType::str, "local-source-address"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    not_supported_qinq{YType::boolean, "not-supported-qinq"},
    num_ma_cwithdraw_msg_received{YType::uint32, "num-ma-cwithdraw-msg-received"},
    number_ma_cwithdraw_message_sent{YType::uint32, "number-ma-cwithdraw-message-sent"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    payload_bytes_mismatched{YType::boolean, "payload-bytes-mismatched"},
    payload_type_mismatched{YType::boolean, "payload-type-mismatched"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    primary_peer_id{YType::str, "primary-peer-id"},
    primary_pseudo_wire_id{YType::uint64, "primary-pseudo-wire-id"},
    primary_pw{YType::boolean, "primary-pw"},
    protocol{YType::enumeration, "protocol"},
    pseudo_wire_id{YType::uint64, "pseudo-wire-id"},
    pseudo_wire_state{YType::enumeration, "pseudo-wire-state"},
    pseudo_wire_type_mismatched{YType::boolean, "pseudo-wire-type-mismatched"},
    pw_class_name{YType::str, "pw-class-name"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    pw_flow_label_type{YType::enumeration, "pw-flow-label-type"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    pw_redundancy_initial_delay{YType::uint8, "pw-redundancy-initial-delay"},
    pw_redundancy_one_way{YType::boolean, "pw-redundancy-one-way"},
    pw_status_use{YType::boolean, "pw-status-use"},
    pwlsd_rewrite_failed{YType::boolean, "pwlsd-rewrite-failed"},
    remote_control_word{YType::enumeration, "remote-control-word"},
    remote_label_failed{YType::boolean, "remote-label-failed"},
    remote_pseudo_wire_type{YType::enumeration, "remote-pseudo-wire-type"},
    required_bw{YType::uint32, "required-bw"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    rtp_mismatched{YType::boolean, "rtp-mismatched"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    shutdown{YType::boolean, "shutdown"},
    sig_pkts_mismatched{YType::boolean, "sig-pkts-mismatched"},
    ssrc_mismatched{YType::boolean, "ssrc-mismatched"},
    state{YType::enumeration, "state"},
    table_policy_name{YType::str, "table-policy-name"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    time_created{YType::str, "time-created"},
    time_elapsed_creation{YType::str, "time-elapsed-creation"},
    time_elapsed_status_changed{YType::str, "time-elapsed-status-changed"},
    time_elapsed_status_down{YType::uint32, "time-elapsed-status-down"},
    transport_lsp_down{YType::boolean, "transport-lsp-down"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    encapsulation_info(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo>())
	,local_interface(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface>())
	,local_signalling(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling>())
	,p2mp_pw(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw>())
	,peer_id(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId>())
	,preferred_path(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath>())
	,remote_interface(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface>())
	,remote_signalling(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling>())
	,statistics(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics>())
{
    encapsulation_info->parent = this;
    children["encapsulation-info"] = encapsulation_info;

    local_interface->parent = this;
    children["local-interface"] = local_interface;

    local_signalling->parent = this;
    children["local-signalling"] = local_signalling;

    p2mp_pw->parent = this;
    children["p2mp-pw"] = p2mp_pw;

    peer_id->parent = this;
    children["peer-id"] = peer_id;

    preferred_path->parent = this;
    children["preferred-path"] = preferred_path;

    remote_interface->parent = this;
    children["remote-interface"] = remote_interface;

    remote_signalling->parent = this;
    children["remote-signalling"] = remote_signalling;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "pseudowire"; yang_parent_name = "bridge-pw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::~Pseudowire()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::has_data() const
{
    return ad_method.is_set
	|| ad_remote_down.is_set
	|| admited_bw.is_set
	|| auto_discovery.is_set
	|| backup_active.is_set
	|| backup_force_active.is_set
	|| backup_pw.is_set
	|| bitrate_mismatched.is_set
	|| bridge_pw_type_mismatch.is_set
	|| cas_mismatched.is_set
	|| diff_ts_mismatched.is_set
	|| disable_delay.is_set
	|| disable_never.is_set
	|| evpn_src_acid.is_set
	|| fe_ctype.is_set
	|| forward_class.is_set
	|| freq_mismatched.is_set
	|| illegal_control_word.is_set
	|| imposed_vlan_id.is_set
	|| interworking.is_set
	|| ipv6_local_source_address.is_set
	|| is_evpnvpws_type.is_set
	|| is_flow_label_static.is_set
	|| is_multi_segment_pseudowire.is_set
	|| is_partially_programmed.is_set
	|| is_pwr_type.is_set
	|| is_vfi.is_set
	|| last_time_status_changed.is_set
	|| last_time_status_down.is_set
	|| ldp_label_advertise_failed.is_set
	|| load_balance.is_set
	|| local_control_word.is_set
	|| local_label_failed.is_set
	|| local_pseudo_wire_type.is_set
	|| local_source_address.is_set
	|| mac_limit_oper_down.is_set
	|| mtu_mismatched.is_set
	|| not_supported_qinq.is_set
	|| num_ma_cwithdraw_msg_received.is_set
	|| number_ma_cwithdraw_message_sent.is_set
	|| out_of_memory_state.is_set
	|| payload_bytes_mismatched.is_set
	|| payload_type_mismatched.is_set
	|| preferred_path_disable_fallback.is_set
	|| primary_peer_id.is_set
	|| primary_pseudo_wire_id.is_set
	|| primary_pw.is_set
	|| protocol.is_set
	|| pseudo_wire_id.is_set
	|| pseudo_wire_state.is_set
	|| pseudo_wire_type_mismatched.is_set
	|| pw_class_name.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| pw_flow_label_type.is_set
	|| pw_flow_label_type_cfg.is_set
	|| pw_redundancy_initial_delay.is_set
	|| pw_redundancy_one_way.is_set
	|| pw_status_use.is_set
	|| pwlsd_rewrite_failed.is_set
	|| remote_control_word.is_set
	|| remote_label_failed.is_set
	|| remote_pseudo_wire_type.is_set
	|| required_bw.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| rtp_mismatched.is_set
	|| sequencing_type.is_set
	|| shutdown.is_set
	|| sig_pkts_mismatched.is_set
	|| ssrc_mismatched.is_set
	|| state.is_set
	|| table_policy_name.is_set
	|| tag_rewrite.is_set
	|| time_created.is_set
	|| time_elapsed_creation.is_set
	|| time_elapsed_status_changed.is_set
	|| time_elapsed_status_down.is_set
	|| transport_lsp_down.is_set
	|| xconnect_id.is_set
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_interface !=  nullptr && local_interface->has_data())
	|| (local_signalling !=  nullptr && local_signalling->has_data())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_data())
	|| (peer_id !=  nullptr && peer_id->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (remote_interface !=  nullptr && remote_interface->has_data())
	|| (remote_signalling !=  nullptr && remote_signalling->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(ad_method.operation)
	|| is_set(ad_remote_down.operation)
	|| is_set(admited_bw.operation)
	|| is_set(auto_discovery.operation)
	|| is_set(backup_active.operation)
	|| is_set(backup_force_active.operation)
	|| is_set(backup_pw.operation)
	|| is_set(bitrate_mismatched.operation)
	|| is_set(bridge_pw_type_mismatch.operation)
	|| is_set(cas_mismatched.operation)
	|| is_set(diff_ts_mismatched.operation)
	|| is_set(disable_delay.operation)
	|| is_set(disable_never.operation)
	|| is_set(evpn_src_acid.operation)
	|| is_set(fe_ctype.operation)
	|| is_set(forward_class.operation)
	|| is_set(freq_mismatched.operation)
	|| is_set(illegal_control_word.operation)
	|| is_set(imposed_vlan_id.operation)
	|| is_set(interworking.operation)
	|| is_set(ipv6_local_source_address.operation)
	|| is_set(is_evpnvpws_type.operation)
	|| is_set(is_flow_label_static.operation)
	|| is_set(is_multi_segment_pseudowire.operation)
	|| is_set(is_partially_programmed.operation)
	|| is_set(is_pwr_type.operation)
	|| is_set(is_vfi.operation)
	|| is_set(last_time_status_changed.operation)
	|| is_set(last_time_status_down.operation)
	|| is_set(ldp_label_advertise_failed.operation)
	|| is_set(load_balance.operation)
	|| is_set(local_control_word.operation)
	|| is_set(local_label_failed.operation)
	|| is_set(local_pseudo_wire_type.operation)
	|| is_set(local_source_address.operation)
	|| is_set(mac_limit_oper_down.operation)
	|| is_set(mtu_mismatched.operation)
	|| is_set(not_supported_qinq.operation)
	|| is_set(num_ma_cwithdraw_msg_received.operation)
	|| is_set(number_ma_cwithdraw_message_sent.operation)
	|| is_set(out_of_memory_state.operation)
	|| is_set(payload_bytes_mismatched.operation)
	|| is_set(payload_type_mismatched.operation)
	|| is_set(preferred_path_disable_fallback.operation)
	|| is_set(primary_peer_id.operation)
	|| is_set(primary_pseudo_wire_id.operation)
	|| is_set(primary_pw.operation)
	|| is_set(protocol.operation)
	|| is_set(pseudo_wire_id.operation)
	|| is_set(pseudo_wire_state.operation)
	|| is_set(pseudo_wire_type_mismatched.operation)
	|| is_set(pw_class_name.operation)
	|| is_set(pw_flow_label_code17_disabled.operation)
	|| is_set(pw_flow_label_type.operation)
	|| is_set(pw_flow_label_type_cfg.operation)
	|| is_set(pw_redundancy_initial_delay.operation)
	|| is_set(pw_redundancy_one_way.operation)
	|| is_set(pw_status_use.operation)
	|| is_set(pwlsd_rewrite_failed.operation)
	|| is_set(remote_control_word.operation)
	|| is_set(remote_label_failed.operation)
	|| is_set(remote_pseudo_wire_type.operation)
	|| is_set(required_bw.operation)
	|| is_set(resync_enabled.operation)
	|| is_set(resync_threshold.operation)
	|| is_set(rtp_mismatched.operation)
	|| is_set(sequencing_type.operation)
	|| is_set(shutdown.operation)
	|| is_set(sig_pkts_mismatched.operation)
	|| is_set(ssrc_mismatched.operation)
	|| is_set(state.operation)
	|| is_set(table_policy_name.operation)
	|| is_set(tag_rewrite.operation)
	|| is_set(time_created.operation)
	|| is_set(time_elapsed_creation.operation)
	|| is_set(time_elapsed_status_changed.operation)
	|| is_set(time_elapsed_status_down.operation)
	|| is_set(transport_lsp_down.operation)
	|| is_set(xconnect_id.operation)
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_interface !=  nullptr && local_interface->has_operation())
	|| (local_signalling !=  nullptr && local_signalling->has_operation())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_operation())
	|| (peer_id !=  nullptr && peer_id->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (remote_interface !=  nullptr && remote_interface->has_operation())
	|| (remote_signalling !=  nullptr && remote_signalling->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pseudowire' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_method.is_set || is_set(ad_method.operation)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (ad_remote_down.is_set || is_set(ad_remote_down.operation)) leaf_name_data.push_back(ad_remote_down.get_name_leafdata());
    if (admited_bw.is_set || is_set(admited_bw.operation)) leaf_name_data.push_back(admited_bw.get_name_leafdata());
    if (auto_discovery.is_set || is_set(auto_discovery.operation)) leaf_name_data.push_back(auto_discovery.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_force_active.is_set || is_set(backup_force_active.operation)) leaf_name_data.push_back(backup_force_active.get_name_leafdata());
    if (backup_pw.is_set || is_set(backup_pw.operation)) leaf_name_data.push_back(backup_pw.get_name_leafdata());
    if (bitrate_mismatched.is_set || is_set(bitrate_mismatched.operation)) leaf_name_data.push_back(bitrate_mismatched.get_name_leafdata());
    if (bridge_pw_type_mismatch.is_set || is_set(bridge_pw_type_mismatch.operation)) leaf_name_data.push_back(bridge_pw_type_mismatch.get_name_leafdata());
    if (cas_mismatched.is_set || is_set(cas_mismatched.operation)) leaf_name_data.push_back(cas_mismatched.get_name_leafdata());
    if (diff_ts_mismatched.is_set || is_set(diff_ts_mismatched.operation)) leaf_name_data.push_back(diff_ts_mismatched.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.operation)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.operation)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (evpn_src_acid.is_set || is_set(evpn_src_acid.operation)) leaf_name_data.push_back(evpn_src_acid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.operation)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (freq_mismatched.is_set || is_set(freq_mismatched.operation)) leaf_name_data.push_back(freq_mismatched.get_name_leafdata());
    if (illegal_control_word.is_set || is_set(illegal_control_word.operation)) leaf_name_data.push_back(illegal_control_word.get_name_leafdata());
    if (imposed_vlan_id.is_set || is_set(imposed_vlan_id.operation)) leaf_name_data.push_back(imposed_vlan_id.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (ipv6_local_source_address.is_set || is_set(ipv6_local_source_address.operation)) leaf_name_data.push_back(ipv6_local_source_address.get_name_leafdata());
    if (is_evpnvpws_type.is_set || is_set(is_evpnvpws_type.operation)) leaf_name_data.push_back(is_evpnvpws_type.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.operation)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (is_multi_segment_pseudowire.is_set || is_set(is_multi_segment_pseudowire.operation)) leaf_name_data.push_back(is_multi_segment_pseudowire.get_name_leafdata());
    if (is_partially_programmed.is_set || is_set(is_partially_programmed.operation)) leaf_name_data.push_back(is_partially_programmed.get_name_leafdata());
    if (is_pwr_type.is_set || is_set(is_pwr_type.operation)) leaf_name_data.push_back(is_pwr_type.get_name_leafdata());
    if (is_vfi.is_set || is_set(is_vfi.operation)) leaf_name_data.push_back(is_vfi.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.operation)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (last_time_status_down.is_set || is_set(last_time_status_down.operation)) leaf_name_data.push_back(last_time_status_down.get_name_leafdata());
    if (ldp_label_advertise_failed.is_set || is_set(ldp_label_advertise_failed.operation)) leaf_name_data.push_back(ldp_label_advertise_failed.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.operation)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (local_control_word.is_set || is_set(local_control_word.operation)) leaf_name_data.push_back(local_control_word.get_name_leafdata());
    if (local_label_failed.is_set || is_set(local_label_failed.operation)) leaf_name_data.push_back(local_label_failed.get_name_leafdata());
    if (local_pseudo_wire_type.is_set || is_set(local_pseudo_wire_type.operation)) leaf_name_data.push_back(local_pseudo_wire_type.get_name_leafdata());
    if (local_source_address.is_set || is_set(local_source_address.operation)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.operation)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.operation)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (not_supported_qinq.is_set || is_set(not_supported_qinq.operation)) leaf_name_data.push_back(not_supported_qinq.get_name_leafdata());
    if (num_ma_cwithdraw_msg_received.is_set || is_set(num_ma_cwithdraw_msg_received.operation)) leaf_name_data.push_back(num_ma_cwithdraw_msg_received.get_name_leafdata());
    if (number_ma_cwithdraw_message_sent.is_set || is_set(number_ma_cwithdraw_message_sent.operation)) leaf_name_data.push_back(number_ma_cwithdraw_message_sent.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.operation)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (payload_bytes_mismatched.is_set || is_set(payload_bytes_mismatched.operation)) leaf_name_data.push_back(payload_bytes_mismatched.get_name_leafdata());
    if (payload_type_mismatched.is_set || is_set(payload_type_mismatched.operation)) leaf_name_data.push_back(payload_type_mismatched.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.operation)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (primary_peer_id.is_set || is_set(primary_peer_id.operation)) leaf_name_data.push_back(primary_peer_id.get_name_leafdata());
    if (primary_pseudo_wire_id.is_set || is_set(primary_pseudo_wire_id.operation)) leaf_name_data.push_back(primary_pseudo_wire_id.get_name_leafdata());
    if (primary_pw.is_set || is_set(primary_pw.operation)) leaf_name_data.push_back(primary_pw.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pseudo_wire_id.is_set || is_set(pseudo_wire_id.operation)) leaf_name_data.push_back(pseudo_wire_id.get_name_leafdata());
    if (pseudo_wire_state.is_set || is_set(pseudo_wire_state.operation)) leaf_name_data.push_back(pseudo_wire_state.get_name_leafdata());
    if (pseudo_wire_type_mismatched.is_set || is_set(pseudo_wire_type_mismatched.operation)) leaf_name_data.push_back(pseudo_wire_type_mismatched.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.operation)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.operation)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (pw_flow_label_type.is_set || is_set(pw_flow_label_type.operation)) leaf_name_data.push_back(pw_flow_label_type.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.operation)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_redundancy_initial_delay.is_set || is_set(pw_redundancy_initial_delay.operation)) leaf_name_data.push_back(pw_redundancy_initial_delay.get_name_leafdata());
    if (pw_redundancy_one_way.is_set || is_set(pw_redundancy_one_way.operation)) leaf_name_data.push_back(pw_redundancy_one_way.get_name_leafdata());
    if (pw_status_use.is_set || is_set(pw_status_use.operation)) leaf_name_data.push_back(pw_status_use.get_name_leafdata());
    if (pwlsd_rewrite_failed.is_set || is_set(pwlsd_rewrite_failed.operation)) leaf_name_data.push_back(pwlsd_rewrite_failed.get_name_leafdata());
    if (remote_control_word.is_set || is_set(remote_control_word.operation)) leaf_name_data.push_back(remote_control_word.get_name_leafdata());
    if (remote_label_failed.is_set || is_set(remote_label_failed.operation)) leaf_name_data.push_back(remote_label_failed.get_name_leafdata());
    if (remote_pseudo_wire_type.is_set || is_set(remote_pseudo_wire_type.operation)) leaf_name_data.push_back(remote_pseudo_wire_type.get_name_leafdata());
    if (required_bw.is_set || is_set(required_bw.operation)) leaf_name_data.push_back(required_bw.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.operation)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.operation)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (rtp_mismatched.is_set || is_set(rtp_mismatched.operation)) leaf_name_data.push_back(rtp_mismatched.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.operation)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (sig_pkts_mismatched.is_set || is_set(sig_pkts_mismatched.operation)) leaf_name_data.push_back(sig_pkts_mismatched.get_name_leafdata());
    if (ssrc_mismatched.is_set || is_set(ssrc_mismatched.operation)) leaf_name_data.push_back(ssrc_mismatched.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.operation)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.operation)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.operation)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.operation)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.operation)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (time_elapsed_status_down.is_set || is_set(time_elapsed_status_down.operation)) leaf_name_data.push_back(time_elapsed_status_down.get_name_leafdata());
    if (transport_lsp_down.is_set || is_set(transport_lsp_down.operation)) leaf_name_data.push_back(transport_lsp_down.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info != nullptr)
        {
            children["encapsulation-info"] = encapsulation_info;
        }
        else
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo>();
            encapsulation_info->parent = this;
            children["encapsulation-info"] = encapsulation_info;
        }
        return children.at("encapsulation-info");
    }

    if(child_yang_name == "local-interface")
    {
        if(local_interface != nullptr)
        {
            children["local-interface"] = local_interface;
        }
        else
        {
            local_interface = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface>();
            local_interface->parent = this;
            children["local-interface"] = local_interface;
        }
        return children.at("local-interface");
    }

    if(child_yang_name == "local-signalling")
    {
        if(local_signalling != nullptr)
        {
            children["local-signalling"] = local_signalling;
        }
        else
        {
            local_signalling = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling>();
            local_signalling->parent = this;
            children["local-signalling"] = local_signalling;
        }
        return children.at("local-signalling");
    }

    if(child_yang_name == "p2mp-pw")
    {
        if(p2mp_pw != nullptr)
        {
            children["p2mp-pw"] = p2mp_pw;
        }
        else
        {
            p2mp_pw = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::P2MpPw>();
            p2mp_pw->parent = this;
            children["p2mp-pw"] = p2mp_pw;
        }
        return children.at("p2mp-pw");
    }

    if(child_yang_name == "peer-id")
    {
        if(peer_id != nullptr)
        {
            children["peer-id"] = peer_id;
        }
        else
        {
            peer_id = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId>();
            peer_id->parent = this;
            children["peer-id"] = peer_id;
        }
        return children.at("peer-id");
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
        else
        {
            preferred_path = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath>();
            preferred_path->parent = this;
            children["preferred-path"] = preferred_path;
        }
        return children.at("preferred-path");
    }

    if(child_yang_name == "remote-interface")
    {
        if(remote_interface != nullptr)
        {
            children["remote-interface"] = remote_interface;
        }
        else
        {
            remote_interface = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface>();
            remote_interface->parent = this;
            children["remote-interface"] = remote_interface;
        }
        return children.at("remote-interface");
    }

    if(child_yang_name == "remote-signalling")
    {
        if(remote_signalling != nullptr)
        {
            children["remote-signalling"] = remote_signalling;
        }
        else
        {
            remote_signalling = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling>();
            remote_signalling->parent = this;
            children["remote-signalling"] = remote_signalling;
        }
        return children.at("remote-signalling");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::get_children()
{
    if(children.find("encapsulation-info") == children.end())
    {
        if(encapsulation_info != nullptr)
        {
            children["encapsulation-info"] = encapsulation_info;
        }
    }

    if(children.find("local-interface") == children.end())
    {
        if(local_interface != nullptr)
        {
            children["local-interface"] = local_interface;
        }
    }

    if(children.find("local-signalling") == children.end())
    {
        if(local_signalling != nullptr)
        {
            children["local-signalling"] = local_signalling;
        }
    }

    if(children.find("p2mp-pw") == children.end())
    {
        if(p2mp_pw != nullptr)
        {
            children["p2mp-pw"] = p2mp_pw;
        }
    }

    if(children.find("peer-id") == children.end())
    {
        if(peer_id != nullptr)
        {
            children["peer-id"] = peer_id;
        }
    }

    if(children.find("preferred-path") == children.end())
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
    }

    if(children.find("remote-interface") == children.end())
    {
        if(remote_interface != nullptr)
        {
            children["remote-interface"] = remote_interface;
        }
    }

    if(children.find("remote-signalling") == children.end())
    {
        if(remote_signalling != nullptr)
        {
            children["remote-signalling"] = remote_signalling;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-method")
    {
        ad_method = value;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down = value;
    }
    if(value_path == "admited-bw")
    {
        admited_bw = value;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery = value;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active = value;
    }
    if(value_path == "backup-pw")
    {
        backup_pw = value;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched = value;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch = value;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched = value;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched = value;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid = value;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched = value;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word = value;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address = value;
    }
    if(value_path == "is-evpnvpws-type")
    {
        is_evpnvpws_type = value;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire = value;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed = value;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type = value;
    }
    if(value_path == "is-vfi")
    {
        is_vfi = value;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down = value;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed = value;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
    }
    if(value_path == "local-control-word")
    {
        local_control_word = value;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed = value;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type = value;
    }
    if(value_path == "local-source-address")
    {
        local_source_address = value;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq = value;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received = value;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent = value;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched = value;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched = value;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id = value;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id = value;
    }
    if(value_path == "primary-pw")
    {
        primary_pw = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id = value;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state = value;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched = value;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type = value;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay = value;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way = value;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use = value;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed = value;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word = value;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed = value;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type = value;
    }
    if(value_path == "required-bw")
    {
        required_bw = value;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched = value;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched = value;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
    }
    if(value_path == "time-created")
    {
        time_created = value;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down = value;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::PeerId()
    :
    internal_label{YType::uint32, "internal-label"},
    ipv4_peer_id{YType::str, "ipv4-peer-id"},
    ipv6_peer_id{YType::str, "ipv6-peer-id"},
    type{YType::enumeration, "type"}
{
    yang_name = "peer-id"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::~PeerId()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::has_data() const
{
    return internal_label.is_set
	|| ipv4_peer_id.is_set
	|| ipv6_peer_id.is_set
	|| type.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(ipv4_peer_id.operation)
	|| is_set(ipv6_peer_id.operation)
	|| is_set(type.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerId' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ipv4_peer_id.is_set || is_set(ipv4_peer_id.operation)) leaf_name_data.push_back(ipv4_peer_id.get_name_leafdata());
    if (ipv6_peer_id.is_set || is_set(ipv6_peer_id.operation)) leaf_name_data.push_back(ipv6_peer_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PeerId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id = value;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    atom(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom>())
	,l2tpv3(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3>())
{
    atom->parent = this;
    children["atom"] = atom;

    l2tpv3->parent = this;
    children["l2tpv3"] = l2tpv3;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (atom !=  nullptr && atom->has_data())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| (atom !=  nullptr && atom->has_operation())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EncapsulationInfo' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atom")
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
        else
        {
            atom = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom>();
            atom->parent = this;
            children["atom"] = atom;
        }
        return children.at("atom");
    }

    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 != nullptr)
        {
            children["l2tpv3"] = l2tpv3;
        }
        else
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3>();
            l2tpv3->parent = this;
            children["l2tpv3"] = l2tpv3;
        }
        return children.at("l2tpv3");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::get_children()
{
    if(children.find("atom") == children.end())
    {
        if(atom != nullptr)
        {
            children["atom"] = atom;
        }
    }

    if(children.find("l2tpv3") == children.end())
    {
        if(l2tpv3 != nullptr)
        {
            children["l2tpv3"] = l2tpv3;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::Atom()
    :
    is_pseudowire_headend{YType::boolean, "is-pseudowire-headend"},
    is_sai_itype2{YType::boolean, "is-sai-itype2"},
    is_tai_itype2{YType::boolean, "is-tai-itype2"},
    ldp_label_advertisment_failed{YType::boolean, "ldp-label-advertisment-failed"},
    local_c_ctype{YType::uint8, "local-c-ctype"},
    local_ceid{YType::uint32, "local-ceid"},
    local_cv_type{YType::uint8, "local-cv-type"},
    local_group_id{YType::uint32, "local-group-id"},
    local_label{YType::uint32, "local-label"},
    local_ldp_id{YType::str, "local-ldp-id"},
    local_saii_gbl_id{YType::uint32, "local-saii-gbl-id"},
    local_saiiac_id{YType::uint32, "local-saiiac-id"},
    local_taii_gbl_id{YType::uint32, "local-taii-gbl-id"},
    local_taiiac_id{YType::uint32, "local-taiiac-id"},
    local_veid{YType::uint32, "local-veid"},
    lsd_rewrite_failed{YType::boolean, "lsd-rewrite-failed"},
    rem_saii{YType::str, "rem-saii"},
    rem_saii_gbl_id{YType::uint32, "rem-saii-gbl-id"},
    rem_saiiac_id{YType::uint32, "rem-saiiac-id"},
    rem_taii{YType::str, "rem-taii"},
    rem_taii_gbl_id{YType::uint32, "rem-taii-gbl-id"},
    rem_taiiac_id{YType::uint32, "rem-taiiac-id"},
    remote_c_ctype{YType::uint8, "remote-c-ctype"},
    remote_ceid{YType::uint32, "remote-ceid"},
    remote_cv_type{YType::uint8, "remote-cv-type"},
    remote_group_id{YType::uint32, "remote-group-id"},
    remote_label{YType::uint32, "remote-label"},
    remote_ldp_id{YType::str, "remote-ldp-id"},
    remote_source_address{YType::str, "remote-source-address"},
    remote_veid{YType::uint32, "remote-veid"},
    saii{YType::str, "saii"},
    source_address{YType::str, "source-address"},
    taii{YType::str, "taii"}
    	,
    local_agi(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi>())
	,multi_segment_pseudowire_stats(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>())
	,remote_agi(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi>())
{
    local_agi->parent = this;
    children["local-agi"] = local_agi;

    multi_segment_pseudowire_stats->parent = this;
    children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;

    remote_agi->parent = this;
    children["remote-agi"] = remote_agi;

    yang_name = "atom"; yang_parent_name = "encapsulation-info";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::~Atom()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::has_data() const
{
    return is_pseudowire_headend.is_set
	|| is_sai_itype2.is_set
	|| is_tai_itype2.is_set
	|| ldp_label_advertisment_failed.is_set
	|| local_c_ctype.is_set
	|| local_ceid.is_set
	|| local_cv_type.is_set
	|| local_group_id.is_set
	|| local_label.is_set
	|| local_ldp_id.is_set
	|| local_saii_gbl_id.is_set
	|| local_saiiac_id.is_set
	|| local_taii_gbl_id.is_set
	|| local_taiiac_id.is_set
	|| local_veid.is_set
	|| lsd_rewrite_failed.is_set
	|| rem_saii.is_set
	|| rem_saii_gbl_id.is_set
	|| rem_saiiac_id.is_set
	|| rem_taii.is_set
	|| rem_taii_gbl_id.is_set
	|| rem_taiiac_id.is_set
	|| remote_c_ctype.is_set
	|| remote_ceid.is_set
	|| remote_cv_type.is_set
	|| remote_group_id.is_set
	|| remote_label.is_set
	|| remote_ldp_id.is_set
	|| remote_source_address.is_set
	|| remote_veid.is_set
	|| saii.is_set
	|| source_address.is_set
	|| taii.is_set
	|| (local_agi !=  nullptr && local_agi->has_data())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_data())
	|| (remote_agi !=  nullptr && remote_agi->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::has_operation() const
{
    return is_set(operation)
	|| is_set(is_pseudowire_headend.operation)
	|| is_set(is_sai_itype2.operation)
	|| is_set(is_tai_itype2.operation)
	|| is_set(ldp_label_advertisment_failed.operation)
	|| is_set(local_c_ctype.operation)
	|| is_set(local_ceid.operation)
	|| is_set(local_cv_type.operation)
	|| is_set(local_group_id.operation)
	|| is_set(local_label.operation)
	|| is_set(local_ldp_id.operation)
	|| is_set(local_saii_gbl_id.operation)
	|| is_set(local_saiiac_id.operation)
	|| is_set(local_taii_gbl_id.operation)
	|| is_set(local_taiiac_id.operation)
	|| is_set(local_veid.operation)
	|| is_set(lsd_rewrite_failed.operation)
	|| is_set(rem_saii.operation)
	|| is_set(rem_saii_gbl_id.operation)
	|| is_set(rem_saiiac_id.operation)
	|| is_set(rem_taii.operation)
	|| is_set(rem_taii_gbl_id.operation)
	|| is_set(rem_taiiac_id.operation)
	|| is_set(remote_c_ctype.operation)
	|| is_set(remote_ceid.operation)
	|| is_set(remote_cv_type.operation)
	|| is_set(remote_group_id.operation)
	|| is_set(remote_label.operation)
	|| is_set(remote_ldp_id.operation)
	|| is_set(remote_source_address.operation)
	|| is_set(remote_veid.operation)
	|| is_set(saii.operation)
	|| is_set(source_address.operation)
	|| is_set(taii.operation)
	|| (local_agi !=  nullptr && local_agi->has_operation())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_operation())
	|| (remote_agi !=  nullptr && remote_agi->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atom' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pseudowire_headend.is_set || is_set(is_pseudowire_headend.operation)) leaf_name_data.push_back(is_pseudowire_headend.get_name_leafdata());
    if (is_sai_itype2.is_set || is_set(is_sai_itype2.operation)) leaf_name_data.push_back(is_sai_itype2.get_name_leafdata());
    if (is_tai_itype2.is_set || is_set(is_tai_itype2.operation)) leaf_name_data.push_back(is_tai_itype2.get_name_leafdata());
    if (ldp_label_advertisment_failed.is_set || is_set(ldp_label_advertisment_failed.operation)) leaf_name_data.push_back(ldp_label_advertisment_failed.get_name_leafdata());
    if (local_c_ctype.is_set || is_set(local_c_ctype.operation)) leaf_name_data.push_back(local_c_ctype.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.operation)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (local_cv_type.is_set || is_set(local_cv_type.operation)) leaf_name_data.push_back(local_cv_type.get_name_leafdata());
    if (local_group_id.is_set || is_set(local_group_id.operation)) leaf_name_data.push_back(local_group_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_ldp_id.is_set || is_set(local_ldp_id.operation)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (local_saii_gbl_id.is_set || is_set(local_saii_gbl_id.operation)) leaf_name_data.push_back(local_saii_gbl_id.get_name_leafdata());
    if (local_saiiac_id.is_set || is_set(local_saiiac_id.operation)) leaf_name_data.push_back(local_saiiac_id.get_name_leafdata());
    if (local_taii_gbl_id.is_set || is_set(local_taii_gbl_id.operation)) leaf_name_data.push_back(local_taii_gbl_id.get_name_leafdata());
    if (local_taiiac_id.is_set || is_set(local_taiiac_id.operation)) leaf_name_data.push_back(local_taiiac_id.get_name_leafdata());
    if (local_veid.is_set || is_set(local_veid.operation)) leaf_name_data.push_back(local_veid.get_name_leafdata());
    if (lsd_rewrite_failed.is_set || is_set(lsd_rewrite_failed.operation)) leaf_name_data.push_back(lsd_rewrite_failed.get_name_leafdata());
    if (rem_saii.is_set || is_set(rem_saii.operation)) leaf_name_data.push_back(rem_saii.get_name_leafdata());
    if (rem_saii_gbl_id.is_set || is_set(rem_saii_gbl_id.operation)) leaf_name_data.push_back(rem_saii_gbl_id.get_name_leafdata());
    if (rem_saiiac_id.is_set || is_set(rem_saiiac_id.operation)) leaf_name_data.push_back(rem_saiiac_id.get_name_leafdata());
    if (rem_taii.is_set || is_set(rem_taii.operation)) leaf_name_data.push_back(rem_taii.get_name_leafdata());
    if (rem_taii_gbl_id.is_set || is_set(rem_taii_gbl_id.operation)) leaf_name_data.push_back(rem_taii_gbl_id.get_name_leafdata());
    if (rem_taiiac_id.is_set || is_set(rem_taiiac_id.operation)) leaf_name_data.push_back(rem_taiiac_id.get_name_leafdata());
    if (remote_c_ctype.is_set || is_set(remote_c_ctype.operation)) leaf_name_data.push_back(remote_c_ctype.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.operation)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (remote_cv_type.is_set || is_set(remote_cv_type.operation)) leaf_name_data.push_back(remote_cv_type.get_name_leafdata());
    if (remote_group_id.is_set || is_set(remote_group_id.operation)) leaf_name_data.push_back(remote_group_id.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_ldp_id.is_set || is_set(remote_ldp_id.operation)) leaf_name_data.push_back(remote_ldp_id.get_name_leafdata());
    if (remote_source_address.is_set || is_set(remote_source_address.operation)) leaf_name_data.push_back(remote_source_address.get_name_leafdata());
    if (remote_veid.is_set || is_set(remote_veid.operation)) leaf_name_data.push_back(remote_veid.get_name_leafdata());
    if (saii.is_set || is_set(saii.operation)) leaf_name_data.push_back(saii.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (taii.is_set || is_set(taii.operation)) leaf_name_data.push_back(taii.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-agi")
    {
        if(local_agi != nullptr)
        {
            children["local-agi"] = local_agi;
        }
        else
        {
            local_agi = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi>();
            local_agi->parent = this;
            children["local-agi"] = local_agi;
        }
        return children.at("local-agi");
    }

    if(child_yang_name == "multi-segment-pseudowire-stats")
    {
        if(multi_segment_pseudowire_stats != nullptr)
        {
            children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
        }
        else
        {
            multi_segment_pseudowire_stats = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>();
            multi_segment_pseudowire_stats->parent = this;
            children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
        }
        return children.at("multi-segment-pseudowire-stats");
    }

    if(child_yang_name == "remote-agi")
    {
        if(remote_agi != nullptr)
        {
            children["remote-agi"] = remote_agi;
        }
        else
        {
            remote_agi = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi>();
            remote_agi->parent = this;
            children["remote-agi"] = remote_agi;
        }
        return children.at("remote-agi");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::get_children()
{
    if(children.find("local-agi") == children.end())
    {
        if(local_agi != nullptr)
        {
            children["local-agi"] = local_agi;
        }
    }

    if(children.find("multi-segment-pseudowire-stats") == children.end())
    {
        if(multi_segment_pseudowire_stats != nullptr)
        {
            children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
        }
    }

    if(children.find("remote-agi") == children.end())
    {
        if(remote_agi != nullptr)
        {
            children["remote-agi"] = remote_agi;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend = value;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2 = value;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2 = value;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed = value;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype = value;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type = value;
    }
    if(value_path == "local-group-id")
    {
        local_group_id = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id = value;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id = value;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id = value;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id = value;
    }
    if(value_path == "local-veid")
    {
        local_veid = value;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed = value;
    }
    if(value_path == "rem-saii")
    {
        rem_saii = value;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id = value;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id = value;
    }
    if(value_path == "rem-taii")
    {
        rem_taii = value;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id = value;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id = value;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype = value;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type = value;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id = value;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address = value;
    }
    if(value_path == "remote-veid")
    {
        remote_veid = value;
    }
    if(value_path == "saii")
    {
        saii = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "taii")
    {
        taii = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::LocalAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "local-agi"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::~LocalAgi()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-agi";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAgi' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "local-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::RemoteAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "remote-agi"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::~RemoteAgi()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::has_operation() const
{
    return is_set(operation)
	|| is_set(vpls_id_type.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-agi";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteAgi' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.operation)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{
    yang_name = "auto"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(asn.operation)
	|| is_set(vpn_id.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.operation)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.operation)) leaf_name_data.push_back(vpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn")
    {
        asn = value;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "remote-agi";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::MultiSegmentPseudowireStats()
    :
    received_bytes{YType::uint64, "received-bytes"},
    received_packets{YType::uint64, "received-packets"}
{
    yang_name = "multi-segment-pseudowire-stats"; yang_parent_name = "atom";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::~MultiSegmentPseudowireStats()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_data() const
{
    return received_bytes.is_set
	|| received_packets.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_operation() const
{
    return is_set(operation)
	|| is_set(received_bytes.operation)
	|| is_set(received_packets.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-segment-pseudowire-stats";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiSegmentPseudowireStats' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_bytes.is_set || is_set(received_bytes.operation)) leaf_name_data.push_back(received_bytes.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-bytes")
    {
        received_bytes = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv6_source_address{YType::str, "ipv6-source-address"},
    l2tp_class_name{YType::str, "l2tp-class-name"},
    local_cookie_high_value{YType::uint32, "local-cookie-high-value"},
    local_cookie_low_value{YType::uint32, "local-cookie-low-value"},
    local_cookie_size{YType::uint8, "local-cookie-size"},
    local_secondary_cookie_high_value{YType::uint32, "local-secondary-cookie-high-value"},
    local_secondary_cookie_low_value{YType::uint32, "local-secondary-cookie-low-value"},
    local_secondary_cookie_size{YType::uint8, "local-secondary-cookie-size"},
    local_session_id{YType::uint32, "local-session-id"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    remote_circuit_status_up{YType::boolean, "remote-circuit-status-up"},
    remote_cookie_high_value{YType::uint32, "remote-cookie-high-value"},
    remote_cookie_low_value{YType::uint32, "remote-cookie-low-value"},
    remote_cookie_size{YType::uint8, "remote-cookie-size"},
    remote_session_id{YType::uint32, "remote-session-id"},
    tos{YType::uint8, "tos"},
    tos_mode{YType::enumeration, "tos-mode"},
    ttl{YType::uint8, "ttl"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::has_data() const
{
    return dont_fragment_bit.is_set
	|| ipv4_source_address.is_set
	|| ipv6_source_address.is_set
	|| l2tp_class_name.is_set
	|| local_cookie_high_value.is_set
	|| local_cookie_low_value.is_set
	|| local_cookie_size.is_set
	|| local_secondary_cookie_high_value.is_set
	|| local_secondary_cookie_low_value.is_set
	|| local_secondary_cookie_size.is_set
	|| local_session_id.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| remote_circuit_status_up.is_set
	|| remote_cookie_high_value.is_set
	|| remote_cookie_low_value.is_set
	|| remote_cookie_size.is_set
	|| remote_session_id.is_set
	|| tos.is_set
	|| tos_mode.is_set
	|| ttl.is_set
	|| tunnel_state.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(operation)
	|| is_set(dont_fragment_bit.operation)
	|| is_set(ipv4_source_address.operation)
	|| is_set(ipv6_source_address.operation)
	|| is_set(l2tp_class_name.operation)
	|| is_set(local_cookie_high_value.operation)
	|| is_set(local_cookie_low_value.operation)
	|| is_set(local_cookie_size.operation)
	|| is_set(local_secondary_cookie_high_value.operation)
	|| is_set(local_secondary_cookie_low_value.operation)
	|| is_set(local_secondary_cookie_size.operation)
	|| is_set(local_session_id.operation)
	|| is_set(path_mtu_enabled.operation)
	|| is_set(path_mtu_max_value.operation)
	|| is_set(remote_circuit_status_up.operation)
	|| is_set(remote_cookie_high_value.operation)
	|| is_set(remote_cookie_low_value.operation)
	|| is_set(remote_cookie_size.operation)
	|| is_set(remote_session_id.operation)
	|| is_set(tos.operation)
	|| is_set(tos_mode.operation)
	|| is_set(ttl.operation)
	|| is_set(tunnel_state.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.operation)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.operation)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv6_source_address.is_set || is_set(ipv6_source_address.operation)) leaf_name_data.push_back(ipv6_source_address.get_name_leafdata());
    if (l2tp_class_name.is_set || is_set(l2tp_class_name.operation)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (local_cookie_high_value.is_set || is_set(local_cookie_high_value.operation)) leaf_name_data.push_back(local_cookie_high_value.get_name_leafdata());
    if (local_cookie_low_value.is_set || is_set(local_cookie_low_value.operation)) leaf_name_data.push_back(local_cookie_low_value.get_name_leafdata());
    if (local_cookie_size.is_set || is_set(local_cookie_size.operation)) leaf_name_data.push_back(local_cookie_size.get_name_leafdata());
    if (local_secondary_cookie_high_value.is_set || is_set(local_secondary_cookie_high_value.operation)) leaf_name_data.push_back(local_secondary_cookie_high_value.get_name_leafdata());
    if (local_secondary_cookie_low_value.is_set || is_set(local_secondary_cookie_low_value.operation)) leaf_name_data.push_back(local_secondary_cookie_low_value.get_name_leafdata());
    if (local_secondary_cookie_size.is_set || is_set(local_secondary_cookie_size.operation)) leaf_name_data.push_back(local_secondary_cookie_size.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.operation)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.operation)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.operation)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (remote_circuit_status_up.is_set || is_set(remote_circuit_status_up.operation)) leaf_name_data.push_back(remote_circuit_status_up.get_name_leafdata());
    if (remote_cookie_high_value.is_set || is_set(remote_cookie_high_value.operation)) leaf_name_data.push_back(remote_cookie_high_value.get_name_leafdata());
    if (remote_cookie_low_value.is_set || is_set(remote_cookie_low_value.operation)) leaf_name_data.push_back(remote_cookie_low_value.get_name_leafdata());
    if (remote_cookie_size.is_set || is_set(remote_cookie_size.operation)) leaf_name_data.push_back(remote_cookie_size.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.operation)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.operation)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address = value;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value = value;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value = value;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size = value;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value = value;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value = value;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size = value;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up = value;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value = value;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value = value;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size = value;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::LocalInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters>())
{
    parameters->parent = this;
    children["parameters"] = parameters;

    yang_name = "local-interface"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::~LocalInterface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(payload_bytes.operation)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalInterface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::get_children()
{
    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan>())
{
    atm->parent = this;
    children["atm"] = atm;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    fr->parent = this;
    children["fr"] = fr;

    pseudowire_ether->parent = this;
    children["pseudowire-ether"] = pseudowire_ether;

    pseudowire_iw->parent = this;
    children["pseudowire-iw"] = pseudowire_iw;

    tdm->parent = this;
    children["tdm"] = tdm;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "parameters"; yang_parent_name = "local-interface";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameters' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atm")
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
        else
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm>();
            atm->parent = this;
            children["atm"] = atm;
        }
        return children.at("atm");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "fr")
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
        else
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr>();
            fr->parent = this;
            children["fr"] = fr;
        }
        return children.at("fr");
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
        else
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther>();
            pseudowire_ether->parent = this;
            children["pseudowire-ether"] = pseudowire_ether;
        }
        return children.at("pseudowire-ether");
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
        else
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw>();
            pseudowire_iw->parent = this;
            children["pseudowire-iw"] = pseudowire_iw;
        }
        return children.at("pseudowire-iw");
    }

    if(child_yang_name == "tdm")
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
        else
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm>();
            tdm->parent = this;
            children["tdm"] = tdm;
        }
        return children.at("tdm");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::get_children()
{
    if(children.find("atm") == children.end())
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("fr") == children.end())
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
    }

    if(children.find("pseudowire-ether") == children.end())
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
    }

    if(children.find("pseudowire-iw") == children.end())
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
    }

    if(children.find("tdm") == children.end())
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "ethernet"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    rewrite_tag{YType::uint16, "rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "vlan"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(outer_tag.operation)
	|| is_set(rewrite_tag.operation)
	|| is_set(simple_efp.operation)
	|| is_set(vlan_rewrite_tag.operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.operation)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.operation)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    auto rewrite_tag_name_datas = rewrite_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rewrite_tag_name_datas.begin(), rewrite_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(std::move(c));
        children[segment_path] = vlan_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::get_children()
{
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "rewrite-tag")
    {
        rewrite_tag.append(value);
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "vlan-range"; yang_parent_name = "vlan";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;
    children["tdm-options"] = tdm_options;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tdm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tdm-options")
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
        else
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>();
            tdm_options->parent = this;
            children["tdm-options"] = tdm_options;
        }
        return children.at("tdm-options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::get_children()
{
    if(children.find("tdm-options") == children.end())
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdmOptions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::RemoteInterface()
    :
    mtu{YType::uint32, "mtu"},
    name{YType::str, "name"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters>())
{
    parameters->parent = this;
    children["parameters"] = parameters;

    yang_name = "remote-interface"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::~RemoteInterface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::has_data() const
{
    return mtu.is_set
	|| name.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(name.operation)
	|| is_set(payload_bytes.operation)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteInterface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::get_children()
{
    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    atm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm>())
	,ethernet(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan>())
{
    atm->parent = this;
    children["atm"] = atm;

    ethernet->parent = this;
    children["ethernet"] = ethernet;

    fr->parent = this;
    children["fr"] = fr;

    pseudowire_ether->parent = this;
    children["pseudowire-ether"] = pseudowire_ether;

    pseudowire_iw->parent = this;
    children["pseudowire-iw"] = pseudowire_iw;

    tdm->parent = this;
    children["tdm"] = tdm;

    vlan->parent = this;
    children["vlan"] = vlan;

    yang_name = "parameters"; yang_parent_name = "remote-interface";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::has_data() const
{
    return type.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameters' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "atm")
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
        else
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm>();
            atm->parent = this;
            children["atm"] = atm;
        }
        return children.at("atm");
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
        else
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet>();
            ethernet->parent = this;
            children["ethernet"] = ethernet;
        }
        return children.at("ethernet");
    }

    if(child_yang_name == "fr")
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
        else
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr>();
            fr->parent = this;
            children["fr"] = fr;
        }
        return children.at("fr");
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
        else
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther>();
            pseudowire_ether->parent = this;
            children["pseudowire-ether"] = pseudowire_ether;
        }
        return children.at("pseudowire-ether");
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
        else
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw>();
            pseudowire_iw->parent = this;
            children["pseudowire-iw"] = pseudowire_iw;
        }
        return children.at("pseudowire-iw");
    }

    if(child_yang_name == "tdm")
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
        else
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm>();
            tdm->parent = this;
            children["tdm"] = tdm;
        }
        return children.at("tdm");
    }

    if(child_yang_name == "vlan")
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
        else
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan>();
            vlan->parent = this;
            children["vlan"] = vlan;
        }
        return children.at("vlan");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::get_children()
{
    if(children.find("atm") == children.end())
    {
        if(atm != nullptr)
        {
            children["atm"] = atm;
        }
    }

    if(children.find("ethernet") == children.end())
    {
        if(ethernet != nullptr)
        {
            children["ethernet"] = ethernet;
        }
    }

    if(children.find("fr") == children.end())
    {
        if(fr != nullptr)
        {
            children["fr"] = fr;
        }
    }

    if(children.find("pseudowire-ether") == children.end())
    {
        if(pseudowire_ether != nullptr)
        {
            children["pseudowire-ether"] = pseudowire_ether;
        }
    }

    if(children.find("pseudowire-iw") == children.end())
    {
        if(pseudowire_iw != nullptr)
        {
            children["pseudowire-iw"] = pseudowire_iw;
        }
    }

    if(children.find("tdm") == children.end())
    {
        if(tdm != nullptr)
        {
            children["tdm"] = tdm;
        }
    }

    if(children.find("vlan") == children.end())
    {
        if(vlan != nullptr)
        {
            children["vlan"] = vlan;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "ethernet"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    rewrite_tag{YType::uint16, "rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{
    yang_name = "vlan"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : rewrite_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(outer_tag.operation)
	|| is_set(rewrite_tag.operation)
	|| is_set(simple_efp.operation)
	|| is_set(vlan_rewrite_tag.operation)
	|| is_set(xconnect_tags.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.operation)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.operation)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.operation)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.operation)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    auto rewrite_tag_name_datas = rewrite_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), rewrite_tag_name_datas.begin(), rewrite_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(std::move(c));
        children[segment_path] = vlan_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::get_children()
{
    for (auto const & c : vlan_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
    }
    if(value_path == "rewrite-tag")
    {
        rewrite_tag.append(value);
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{
    yang_name = "vlan-range"; yang_parent_name = "vlan";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanRange' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;
    children["tdm-options"] = tdm_options;

    yang_name = "tdm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::has_operation() const
{
    return is_set(operation)
	|| is_set(tdm_mode.operation)
	|| is_set(timeslot_group.operation)
	|| is_set(timeslot_rate.operation)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tdm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.operation)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.operation)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.operation)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tdm-options")
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
        else
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>();
            tdm_options->parent = this;
            children["tdm-options"] = tdm_options;
        }
        return children.at("tdm-options");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::get_children()
{
    if(children.find("tdm-options") == children.end())
    {
        if(tdm_options != nullptr)
        {
            children["tdm-options"] = tdm_options;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{
    yang_name = "tdm-options"; yang_parent_name = "tdm";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(bit_rate.operation)
	|| is_set(cas.operation)
	|| is_set(payload_bytes.operation)
	|| is_set(rtp.operation)
	|| is_set(rtp_header_payload_type.operation)
	|| is_set(signalling_packets.operation)
	|| is_set(ssrc.operation)
	|| is_set(timestamp_clock_freq.operation)
	|| is_set(timestamp_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TdmOptions' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.operation)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.operation)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.operation)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.operation)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.operation)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.operation)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.operation)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.operation)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.operation)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
    }
    if(value_path == "cas")
    {
        cas = value;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
    }
    if(value_path == "rtp")
    {
        rtp = value;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::Atm()
    :
    atm_mode{YType::enumeration, "atm-mode"},
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    vci{YType::uint16, "vci"},
    vpi{YType::uint16, "vpi"}
{
    yang_name = "atm"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::has_data() const
{
    return atm_mode.is_set
	|| maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| vci.is_set
	|| vpi.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_mode.operation)
	|| is_set(maximum_number_cells_packed.operation)
	|| is_set(maximum_number_cells_un_packed.operation)
	|| is_set(vci.operation)
	|| is_set(vpi.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Atm' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_mode.is_set || is_set(atm_mode.operation)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.operation)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.operation)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (vci.is_set || is_set(vci.operation)) leaf_name_data.push_back(vci.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.operation)) leaf_name_data.push_back(vpi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Atm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-mode")
    {
        atm_mode = value;
    }
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
    }
    if(value_path == "vci")
    {
        vci = value;
    }
    if(value_path == "vpi")
    {
        vpi = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::Fr()
    :
    dlci{YType::uint32, "dlci"},
    fr_mode{YType::enumeration, "fr-mode"}
{
    yang_name = "fr"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::has_data() const
{
    return dlci.is_set
	|| fr_mode.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::has_operation() const
{
    return is_set(operation)
	|| is_set(dlci.operation)
	|| is_set(fr_mode.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fr' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dlci.is_set || is_set(dlci.operation)) leaf_name_data.push_back(dlci.get_name_leafdata());
    if (fr_mode.is_set || is_set(fr_mode.operation)) leaf_name_data.push_back(fr_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::Fr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dlci")
    {
        dlci = value;
    }
    if(value_path == "fr-mode")
    {
        fr_mode = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEther' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;
    children["interface-list"] = interface_list;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_label.operation)
	|| is_set(is_valid.operation)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIw' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-list")
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
        else
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>();
            interface_list->parent = this;
            children["interface-list"] = interface_list;
        }
        return children.at("interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_children()
{
    if(children.find("interface-list") == children.end())
    {
        if(interface_list != nullptr)
        {
            children["interface-list"] = interface_list;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{
    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_list_id.operation)
	|| is_set(interface_list_name.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.operation)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.operation)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{
    yang_name = "interface"; yang_parent_name = "interface-list";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(replicate_status.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.operation)) leaf_name_data.push_back(replicate_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::PreferredPath()
    :
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    option{YType::enumeration, "option"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
{
    yang_name = "preferred-path"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::has_data() const
{
    return ip_tunnel_interface_number.is_set
	|| next_hop_ip.is_set
	|| option.is_set
	|| te_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_tunnel_interface_number.operation)
	|| is_set(next_hop_ip.operation)
	|| is_set(option.operation)
	|| is_set(te_tunnel_interface_number.operation)
	|| is_set(tp_tunnel_interface_number.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreferredPath' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.operation)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.operation)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.operation)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::PreferredPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::LocalSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv>())
{
    status_tlv->parent = this;
    children["status-tlv"] = status_tlv;

    yang_name = "local-signalling"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::~LocalSignalling()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pw_status.operation)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-signalling";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalSignalling' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.operation)) leaf_name_data.push_back(pw_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-tlv")
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
        else
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv>();
            status_tlv->parent = this;
            children["status-tlv"] = status_tlv;
        }
        return children.at("status-tlv");
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(std::move(c));
        children[segment_path] = tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::get_children()
{
    if(children.find("status-tlv") == children.end())
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
    }

    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "status-tlv"; yang_parent_name = "local-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatusTlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::StatusTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "tlv"; yang_parent_name = "local-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::LocalSignalling::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv>())
{
    status_tlv->parent = this;
    children["status-tlv"] = status_tlv;

    yang_name = "remote-signalling"; yang_parent_name = "pseudowire";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pw_status.operation)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteSignalling' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.operation)) leaf_name_data.push_back(pw_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status-tlv")
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
        else
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv>();
            status_tlv->parent = this;
            children["status-tlv"] = status_tlv;
        }
        return children.at("status-tlv");
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(std::move(c));
        children[segment_path] = tlv.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::get_children()
{
    if(children.find("status-tlv") == children.end())
    {
        if(status_tlv != nullptr)
        {
            children["status-tlv"] = status_tlv;
        }
    }

    for (auto const & c : tlv)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "status-tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatusTlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "tlv"; yang_parent_name = "remote-signalling";
}

L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(operation)
	|| is_set(description.operation)
	|| is_set(local_address.operation)
	|| is_set(pw_id.operation)
	|| is_set(remote_address.operation);
}

std::string L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";

    return path_buffer.str();

}

EntityPath L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tlv' in Cisco_IOS_XR_l2vpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.operation)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::get_children()
{
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeDomains::BridgeDomain::BridgeCoreVfiTable::BridgePws::BridgePw::Pseudowire::RemoteSignalling::Tlv::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}


}
}

