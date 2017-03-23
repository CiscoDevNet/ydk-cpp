
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_cfg {

SubscriberManager::SubscriberManager()
    :
    accounting(std::make_shared<SubscriberManager::Accounting>())
	,srg(std::make_shared<SubscriberManager::Srg>())
{
    accounting->parent = this;
    children["accounting"] = accounting;

    srg->parent = this;
    children["srg"] = srg;

    yang_name = "subscriber-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg";
}

SubscriberManager::~SubscriberManager()
{
}

bool SubscriberManager::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (srg !=  nullptr && srg->has_data());
}

bool SubscriberManager::has_operation() const
{
    return is_set(operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (srg !=  nullptr && srg->has_operation());
}

std::string SubscriberManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager";

    return path_buffer.str();

}

EntityPath SubscriberManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting;
        }
        else
        {
            accounting = std::make_shared<SubscriberManager::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting;
        }
        return children.at("accounting");
    }

    if(child_yang_name == "srg")
    {
        if(srg != nullptr)
        {
            children["srg"] = srg;
        }
        else
        {
            srg = std::make_shared<SubscriberManager::Srg>();
            srg->parent = this;
            children["srg"] = srg;
        }
        return children.at("srg");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberManager::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting;
        }
    }

    if(children.find("srg") == children.end())
    {
        if(srg != nullptr)
        {
            children["srg"] = srg;
        }
    }

    return children;
}

void SubscriberManager::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SubscriberManager::clone_ptr() const
{
    return std::make_shared<SubscriberManager>();
}

std::string SubscriberManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubscriberManager::Accounting::Accounting()
    :
    interim(std::make_shared<SubscriberManager::Accounting::Interim>())
	,send_stop(std::make_shared<SubscriberManager::Accounting::SendStop>())
{
    interim->parent = this;
    children["interim"] = interim;

    send_stop->parent = this;
    children["send-stop"] = send_stop;

    yang_name = "accounting"; yang_parent_name = "subscriber-manager";
}

SubscriberManager::Accounting::~Accounting()
{
}

bool SubscriberManager::Accounting::has_data() const
{
    return (interim !=  nullptr && interim->has_data())
	|| (send_stop !=  nullptr && send_stop->has_data());
}

bool SubscriberManager::Accounting::has_operation() const
{
    return is_set(operation)
	|| (interim !=  nullptr && interim->has_operation())
	|| (send_stop !=  nullptr && send_stop->has_operation());
}

std::string SubscriberManager::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath SubscriberManager::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberManager::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interim")
    {
        if(interim != nullptr)
        {
            children["interim"] = interim;
        }
        else
        {
            interim = std::make_shared<SubscriberManager::Accounting::Interim>();
            interim->parent = this;
            children["interim"] = interim;
        }
        return children.at("interim");
    }

    if(child_yang_name == "send-stop")
    {
        if(send_stop != nullptr)
        {
            children["send-stop"] = send_stop;
        }
        else
        {
            send_stop = std::make_shared<SubscriberManager::Accounting::SendStop>();
            send_stop->parent = this;
            children["send-stop"] = send_stop;
        }
        return children.at("send-stop");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberManager::Accounting::get_children()
{
    if(children.find("interim") == children.end())
    {
        if(interim != nullptr)
        {
            children["interim"] = interim;
        }
    }

    if(children.find("send-stop") == children.end())
    {
        if(send_stop != nullptr)
        {
            children["send-stop"] = send_stop;
        }
    }

    return children;
}

void SubscriberManager::Accounting::set_value(const std::string & value_path, std::string value)
{
}

SubscriberManager::Accounting::SendStop::SendStop()
    :
    setup_failure{YType::str, "setup-failure"}
{
    yang_name = "send-stop"; yang_parent_name = "accounting";
}

SubscriberManager::Accounting::SendStop::~SendStop()
{
}

bool SubscriberManager::Accounting::SendStop::has_data() const
{
    return setup_failure.is_set;
}

bool SubscriberManager::Accounting::SendStop::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_failure.operation);
}

std::string SubscriberManager::Accounting::SendStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-stop";

    return path_buffer.str();

}

EntityPath SubscriberManager::Accounting::SendStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_failure.is_set || is_set(setup_failure.operation)) leaf_name_data.push_back(setup_failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberManager::Accounting::SendStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SubscriberManager::Accounting::SendStop::get_children()
{
    return children;
}

void SubscriberManager::Accounting::SendStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-failure")
    {
        setup_failure = value;
    }
}

SubscriberManager::Accounting::Interim::Interim()
    :
    variation(std::make_shared<SubscriberManager::Accounting::Interim::Variation>())
{
    variation->parent = this;
    children["variation"] = variation;

    yang_name = "interim"; yang_parent_name = "accounting";
}

SubscriberManager::Accounting::Interim::~Interim()
{
}

bool SubscriberManager::Accounting::Interim::has_data() const
{
    return (variation !=  nullptr && variation->has_data());
}

bool SubscriberManager::Accounting::Interim::has_operation() const
{
    return is_set(operation)
	|| (variation !=  nullptr && variation->has_operation());
}

std::string SubscriberManager::Accounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";

    return path_buffer.str();

}

EntityPath SubscriberManager::Accounting::Interim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberManager::Accounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "variation")
    {
        if(variation != nullptr)
        {
            children["variation"] = variation;
        }
        else
        {
            variation = std::make_shared<SubscriberManager::Accounting::Interim::Variation>();
            variation->parent = this;
            children["variation"] = variation;
        }
        return children.at("variation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberManager::Accounting::Interim::get_children()
{
    if(children.find("variation") == children.end())
    {
        if(variation != nullptr)
        {
            children["variation"] = variation;
        }
    }

    return children;
}

void SubscriberManager::Accounting::Interim::set_value(const std::string & value_path, std::string value)
{
}

SubscriberManager::Accounting::Interim::Variation::Variation()
    :
    maximum_percentage_variation{YType::uint32, "maximum-percentage-variation"}
{
    yang_name = "variation"; yang_parent_name = "interim";
}

SubscriberManager::Accounting::Interim::Variation::~Variation()
{
}

bool SubscriberManager::Accounting::Interim::Variation::has_data() const
{
    return maximum_percentage_variation.is_set;
}

bool SubscriberManager::Accounting::Interim::Variation::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_percentage_variation.operation);
}

std::string SubscriberManager::Accounting::Interim::Variation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variation";

    return path_buffer.str();

}

EntityPath SubscriberManager::Accounting::Interim::Variation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/interim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_percentage_variation.is_set || is_set(maximum_percentage_variation.operation)) leaf_name_data.push_back(maximum_percentage_variation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberManager::Accounting::Interim::Variation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SubscriberManager::Accounting::Interim::Variation::get_children()
{
    return children;
}

void SubscriberManager::Accounting::Interim::Variation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-percentage-variation")
    {
        maximum_percentage_variation = value;
    }
}

SubscriberManager::Srg::Srg()
    :
    sync_account_session_id{YType::empty, "sync-account-session-id"}
{
    yang_name = "srg"; yang_parent_name = "subscriber-manager";
}

SubscriberManager::Srg::~Srg()
{
}

bool SubscriberManager::Srg::has_data() const
{
    return sync_account_session_id.is_set;
}

bool SubscriberManager::Srg::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_account_session_id.operation);
}

std::string SubscriberManager::Srg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg";

    return path_buffer.str();

}

EntityPath SubscriberManager::Srg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_account_session_id.is_set || is_set(sync_account_session_id.operation)) leaf_name_data.push_back(sync_account_session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberManager::Srg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SubscriberManager::Srg::get_children()
{
    return children;
}

void SubscriberManager::Srg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-account-session-id")
    {
        sync_account_session_id = value;
    }
}

SubscriberFeaturette::SubscriberFeaturette()
{
    yang_name = "subscriber-featurette"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg";
}

SubscriberFeaturette::~SubscriberFeaturette()
{
}

bool SubscriberFeaturette::has_data() const
{
    for (std::size_t index=0; index<identity_change.size(); index++)
    {
        if(identity_change[index]->has_data())
            return true;
    }
    return false;
}

bool SubscriberFeaturette::has_operation() const
{
    for (std::size_t index=0; index<identity_change.size(); index++)
    {
        if(identity_change[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubscriberFeaturette::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-featurette";

    return path_buffer.str();

}

EntityPath SubscriberFeaturette::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberFeaturette::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "identity-change")
    {
        for(auto const & c : identity_change)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubscriberFeaturette::IdentityChange>();
        c->parent = this;
        identity_change.push_back(std::move(c));
        children[segment_path] = identity_change.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubscriberFeaturette::get_children()
{
    for (auto const & c : identity_change)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubscriberFeaturette::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SubscriberFeaturette::clone_ptr() const
{
    return std::make_shared<SubscriberFeaturette>();
}

std::string SubscriberFeaturette::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubscriberFeaturette::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubscriberFeaturette::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubscriberFeaturette::IdentityChange::IdentityChange()
    :
    identity_change{YType::str, "identity-change"},
    enable{YType::int32, "enable"}
{
    yang_name = "identity-change"; yang_parent_name = "subscriber-featurette";
}

SubscriberFeaturette::IdentityChange::~IdentityChange()
{
}

bool SubscriberFeaturette::IdentityChange::has_data() const
{
    return identity_change.is_set
	|| enable.is_set;
}

bool SubscriberFeaturette::IdentityChange::has_operation() const
{
    return is_set(operation)
	|| is_set(identity_change.operation)
	|| is_set(enable.operation);
}

std::string SubscriberFeaturette::IdentityChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity-change" <<"[identity-change='" <<identity_change <<"']";

    return path_buffer.str();

}

EntityPath SubscriberFeaturette::IdentityChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-featurette/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity_change.is_set || is_set(identity_change.operation)) leaf_name_data.push_back(identity_change.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubscriberFeaturette::IdentityChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SubscriberFeaturette::IdentityChange::get_children()
{
    return children;
}

void SubscriberFeaturette::IdentityChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identity-change")
    {
        identity_change = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

IedgeLicenseManager::IedgeLicenseManager()
{
    yang_name = "iedge-license-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg";
}

IedgeLicenseManager::~IedgeLicenseManager()
{
}

bool IedgeLicenseManager::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool IedgeLicenseManager::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IedgeLicenseManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:iedge-license-manager";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IedgeLicenseManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<IedgeLicenseManager::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & IedgeLicenseManager::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void IedgeLicenseManager::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IedgeLicenseManager::clone_ptr() const
{
    return std::make_shared<IedgeLicenseManager>();
}

std::string IedgeLicenseManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IedgeLicenseManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IedgeLicenseManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

IedgeLicenseManager::Node::Node()
    :
    node_name{YType::str, "node-name"},
    session_limit{YType::int32, "session-limit"},
    session_threshold{YType::int32, "session-threshold"}
{
    yang_name = "node"; yang_parent_name = "iedge-license-manager";
}

IedgeLicenseManager::Node::~Node()
{
}

bool IedgeLicenseManager::Node::has_data() const
{
    return node_name.is_set
	|| session_limit.is_set
	|| session_threshold.is_set;
}

bool IedgeLicenseManager::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(session_limit.operation)
	|| is_set(session_threshold.operation);
}

std::string IedgeLicenseManager::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:iedge-license-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (session_threshold.is_set || is_set(session_threshold.operation)) leaf_name_data.push_back(session_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IedgeLicenseManager::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & IedgeLicenseManager::Node::get_children()
{
    return children;
}

void IedgeLicenseManager::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "session-threshold")
    {
        session_threshold = value;
    }
}

SubManager::SubManager()
{
    yang_name = "sub-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg";
}

SubManager::~SubManager()
{
}

bool SubManager::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool SubManager::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SubManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:sub-manager";

    return path_buffer.str();

}

EntityPath SubManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "location")
    {
        for(auto const & c : location)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SubManager::Location>();
        c->parent = this;
        location.push_back(std::move(c));
        children[segment_path] = location.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubManager::get_children()
{
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SubManager::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SubManager::clone_ptr() const
{
    return std::make_shared<SubManager>();
}

std::string SubManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SubManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SubManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

SubManager::Location::Location()
    :
    location1{YType::str, "location1"},
    history{YType::empty, "history"}
    	,
    trace(std::make_shared<SubManager::Location::Trace>())
{
    trace->parent = this;
    children["trace"] = trace;

    yang_name = "location"; yang_parent_name = "sub-manager";
}

SubManager::Location::~Location()
{
}

bool SubManager::Location::has_data() const
{
    return location1.is_set
	|| history.is_set
	|| (trace !=  nullptr && trace->has_data());
}

bool SubManager::Location::has_operation() const
{
    return is_set(operation)
	|| is_set(location1.operation)
	|| is_set(history.operation)
	|| (trace !=  nullptr && trace->has_operation());
}

std::string SubManager::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location1='" <<location1 <<"']";

    return path_buffer.str();

}

EntityPath SubManager::Location::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:sub-manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location1.is_set || is_set(location1.operation)) leaf_name_data.push_back(location1.get_name_leafdata());
    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubManager::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trace")
    {
        if(trace != nullptr)
        {
            children["trace"] = trace;
        }
        else
        {
            trace = std::make_shared<SubManager::Location::Trace>();
            trace->parent = this;
            children["trace"] = trace;
        }
        return children.at("trace");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SubManager::Location::get_children()
{
    if(children.find("trace") == children.end())
    {
        if(trace != nullptr)
        {
            children["trace"] = trace;
        }
    }

    return children;
}

void SubManager::Location::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "location1")
    {
        location1 = value;
    }
    if(value_path == "history")
    {
        history = value;
    }
}

SubManager::Location::Trace::Trace()
    :
    trace_level{YType::int32, "trace-level"}
{
    yang_name = "trace"; yang_parent_name = "location";
}

SubManager::Location::Trace::~Trace()
{
}

bool SubManager::Location::Trace::has_data() const
{
    return trace_level.is_set;
}

bool SubManager::Location::Trace::has_operation() const
{
    return is_set(operation)
	|| is_set(trace_level.operation);
}

std::string SubManager::Location::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";

    return path_buffer.str();

}

EntityPath SubManager::Location::Trace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trace' in Cisco_IOS_XR_iedge4710_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_level.is_set || is_set(trace_level.operation)) leaf_name_data.push_back(trace_level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SubManager::Location::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SubManager::Location::Trace::get_children()
{
    return children;
}

void SubManager::Location::Trace::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trace-level")
    {
        trace_level = value;
    }
}


}
}

