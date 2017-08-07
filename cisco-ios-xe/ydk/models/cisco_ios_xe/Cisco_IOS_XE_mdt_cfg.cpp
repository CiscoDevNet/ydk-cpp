
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mdt_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_cfg {

MdtSubscriptions::MdtSubscriptions()
{
    yang_name = "mdt-subscriptions"; yang_parent_name = "Cisco-IOS-XE-mdt-cfg";
}

MdtSubscriptions::~MdtSubscriptions()
{
}

bool MdtSubscriptions::has_data() const
{
    for (std::size_t index=0; index<mdt_subscription.size(); index++)
    {
        if(mdt_subscription[index]->has_data())
            return true;
    }
    return false;
}

bool MdtSubscriptions::has_operation() const
{
    for (std::size_t index=0; index<mdt_subscription.size(); index++)
    {
        if(mdt_subscription[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MdtSubscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-cfg:mdt-subscriptions";

    return path_buffer.str();

}

const EntityPath MdtSubscriptions::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MdtSubscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt-subscription")
    {
        for(auto const & c : mdt_subscription)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MdtSubscriptions::MdtSubscription>();
        c->parent = this;
        mdt_subscription.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtSubscriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mdt_subscription)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MdtSubscriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MdtSubscriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MdtSubscriptions::clone_ptr() const
{
    return std::make_shared<MdtSubscriptions>();
}

std::string MdtSubscriptions::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MdtSubscriptions::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MdtSubscriptions::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MdtSubscriptions::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MdtSubscriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt-subscription")
        return true;
    return false;
}

MdtSubscriptions::MdtSubscription::MdtSubscription()
    :
    subscription_id{YType::uint32, "subscription-id"}
    	,
    base(std::make_shared<MdtSubscriptions::MdtSubscription::Base>())
{
    base->parent = this;

    yang_name = "mdt-subscription"; yang_parent_name = "mdt-subscriptions";
}

MdtSubscriptions::MdtSubscription::~MdtSubscription()
{
}

bool MdtSubscriptions::MdtSubscription::has_data() const
{
    for (std::size_t index=0; index<mdt_receivers.size(); index++)
    {
        if(mdt_receivers[index]->has_data())
            return true;
    }
    return subscription_id.is_set
	|| (base !=  nullptr && base->has_data());
}

bool MdtSubscriptions::MdtSubscription::has_operation() const
{
    for (std::size_t index=0; index<mdt_receivers.size(); index++)
    {
        if(mdt_receivers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string MdtSubscriptions::MdtSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-subscription" <<"[subscription-id='" <<subscription_id <<"']";

    return path_buffer.str();

}

const EntityPath MdtSubscriptions::MdtSubscription::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mdt-cfg:mdt-subscriptions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MdtSubscriptions::MdtSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<MdtSubscriptions::MdtSubscription::Base>();
        }
        return base;
    }

    if(child_yang_name == "mdt-receivers")
    {
        for(auto const & c : mdt_receivers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MdtSubscriptions::MdtSubscription::MdtReceivers>();
        c->parent = this;
        mdt_receivers.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtSubscriptions::MdtSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    for (auto const & c : mdt_receivers)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MdtSubscriptions::MdtSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
}

void MdtSubscriptions::MdtSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
}

bool MdtSubscriptions::MdtSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "mdt-receivers" || name == "subscription-id")
        return true;
    return false;
}

MdtSubscriptions::MdtSubscription::Base::Base()
    :
    encoding{YType::str, "encoding"},
    no_filter{YType::uint32, "no-filter"},
    no_synch_on_start{YType::boolean, "no-synch-on-start"},
    no_trigger{YType::uint32, "no-trigger"},
    period{YType::uint32, "period"},
    stream{YType::str, "stream"},
    xpath{YType::str, "xpath"}
{
    yang_name = "base"; yang_parent_name = "mdt-subscription";
}

MdtSubscriptions::MdtSubscription::Base::~Base()
{
}

bool MdtSubscriptions::MdtSubscription::Base::has_data() const
{
    return encoding.is_set
	|| no_filter.is_set
	|| no_synch_on_start.is_set
	|| no_trigger.is_set
	|| period.is_set
	|| stream.is_set
	|| xpath.is_set;
}

bool MdtSubscriptions::MdtSubscription::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(no_filter.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(no_trigger.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(xpath.yfilter);
}

std::string MdtSubscriptions::MdtSubscription::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath MdtSubscriptions::MdtSubscription::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XE_mdt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (no_filter.is_set || is_set(no_filter.yfilter)) leaf_name_data.push_back(no_filter.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (no_trigger.is_set || is_set(no_trigger.yfilter)) leaf_name_data.push_back(no_trigger.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (xpath.is_set || is_set(xpath.yfilter)) leaf_name_data.push_back(xpath.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MdtSubscriptions::MdtSubscription::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtSubscriptions::MdtSubscription::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MdtSubscriptions::MdtSubscription::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-filter")
    {
        no_filter = value;
        no_filter.value_namespace = name_space;
        no_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-trigger")
    {
        no_trigger = value;
        no_trigger.value_namespace = name_space;
        no_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath")
    {
        xpath = value;
        xpath.value_namespace = name_space;
        xpath.value_namespace_prefix = name_space_prefix;
    }
}

void MdtSubscriptions::MdtSubscription::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "no-filter")
    {
        no_filter.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "no-trigger")
    {
        no_trigger.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "xpath")
    {
        xpath.yfilter = yfilter;
    }
}

bool MdtSubscriptions::MdtSubscription::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encoding" || name == "no-filter" || name == "no-synch-on-start" || name == "no-trigger" || name == "period" || name == "stream" || name == "xpath")
        return true;
    return false;
}

MdtSubscriptions::MdtSubscription::MdtReceivers::MdtReceivers()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    protocol{YType::str, "protocol"}
{
    yang_name = "mdt-receivers"; yang_parent_name = "mdt-subscription";
}

MdtSubscriptions::MdtSubscription::MdtReceivers::~MdtReceivers()
{
}

bool MdtSubscriptions::MdtSubscription::MdtReceivers::has_data() const
{
    return address.is_set
	|| port.is_set
	|| protocol.is_set;
}

bool MdtSubscriptions::MdtSubscription::MdtReceivers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string MdtSubscriptions::MdtSubscription::MdtReceivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-receivers" <<"[address='" <<address <<"']" <<"[port='" <<port <<"']";

    return path_buffer.str();

}

const EntityPath MdtSubscriptions::MdtSubscription::MdtReceivers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MdtReceivers' in Cisco_IOS_XE_mdt_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MdtSubscriptions::MdtSubscription::MdtReceivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtSubscriptions::MdtSubscription::MdtReceivers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MdtSubscriptions::MdtSubscription::MdtReceivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void MdtSubscriptions::MdtSubscription::MdtReceivers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool MdtSubscriptions::MdtSubscription::MdtReceivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "protocol")
        return true;
    return false;
}


}
}

