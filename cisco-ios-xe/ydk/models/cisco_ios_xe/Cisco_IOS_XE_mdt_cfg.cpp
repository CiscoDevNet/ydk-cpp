
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mdt_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_cfg {

MdtConfigData::MdtConfigData()
    :
    mdt_subscription(this, {"subscription_id"})
    , mdt_xfrm(this, {"name"})
{

    yang_name = "mdt-config-data"; yang_parent_name = "Cisco-IOS-XE-mdt-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

MdtConfigData::~MdtConfigData()
{
}

bool MdtConfigData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_subscription.len(); index++)
    {
        if(mdt_subscription[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mdt_xfrm.len(); index++)
    {
        if(mdt_xfrm[index]->has_data())
            return true;
    }
    return false;
}

bool MdtConfigData::has_operation() const
{
    for (std::size_t index=0; index<mdt_subscription.len(); index++)
    {
        if(mdt_subscription[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mdt_xfrm.len(); index++)
    {
        if(mdt_xfrm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MdtConfigData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-cfg:mdt-config-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt-subscription")
    {
        auto c = std::make_shared<MdtConfigData::MdtSubscription>();
        c->parent = this;
        mdt_subscription.append(c);
        return c;
    }

    if(child_yang_name == "mdt-xfrm")
    {
        auto c = std::make_shared<MdtConfigData::MdtXfrm>();
        c->parent = this;
        mdt_xfrm.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mdt_subscription.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mdt_xfrm.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MdtConfigData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MdtConfigData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MdtConfigData::clone_ptr() const
{
    return std::make_shared<MdtConfigData>();
}

std::string MdtConfigData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MdtConfigData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MdtConfigData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MdtConfigData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MdtConfigData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt-subscription" || name == "mdt-xfrm")
        return true;
    return false;
}

MdtConfigData::MdtSubscription::MdtSubscription()
    :
    subscription_id{YType::uint32, "subscription-id"}
        ,
    base(std::make_shared<MdtConfigData::MdtSubscription::Base>())
    , mdt_receivers(this, {"address", "port"})
{
    base->parent = this;

    yang_name = "mdt-subscription"; yang_parent_name = "mdt-config-data"; is_top_level_class = false; has_list_ancestor = false; 
}

MdtConfigData::MdtSubscription::~MdtSubscription()
{
}

bool MdtConfigData::MdtSubscription::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_receivers.len(); index++)
    {
        if(mdt_receivers[index]->has_data())
            return true;
    }
    return subscription_id.is_set
	|| (base !=  nullptr && base->has_data());
}

bool MdtConfigData::MdtSubscription::has_operation() const
{
    for (std::size_t index=0; index<mdt_receivers.len(); index++)
    {
        if(mdt_receivers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string MdtConfigData::MdtSubscription::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-cfg:mdt-config-data/" << get_segment_path();
    return path_buffer.str();
}

std::string MdtConfigData::MdtSubscription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-subscription";
    ADD_KEY_TOKEN(subscription_id, "subscription-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtSubscription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtSubscription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<MdtConfigData::MdtSubscription::Base>();
        }
        return base;
    }

    if(child_yang_name == "mdt-receivers")
    {
        auto c = std::make_shared<MdtConfigData::MdtSubscription::MdtReceivers>();
        c->parent = this;
        mdt_receivers.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtSubscription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(base != nullptr)
    {
        children["base"] = base;
    }

    count = 0;
    for (auto c : mdt_receivers.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MdtConfigData::MdtSubscription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtSubscription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtSubscription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "mdt-receivers" || name == "subscription-id")
        return true;
    return false;
}

MdtConfigData::MdtSubscription::Base::Base()
    :
    stream{YType::str, "stream"},
    encoding{YType::str, "encoding"},
    source_vrf{YType::str, "source-vrf"},
    source_address{YType::str, "source-address"},
    no_trigger{YType::uint32, "no-trigger"},
    period{YType::uint32, "period"},
    no_synch_on_start{YType::boolean, "no-synch-on-start"},
    no_filter{YType::uint32, "no-filter"},
    xpath{YType::str, "xpath"},
    tdl_uri{YType::str, "tdl-uri"},
    transform_name{YType::str, "transform-name"}
{

    yang_name = "base"; yang_parent_name = "mdt-subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtSubscription::Base::~Base()
{
}

bool MdtConfigData::MdtSubscription::Base::has_data() const
{
    if (is_presence_container) return true;
    return stream.is_set
	|| encoding.is_set
	|| source_vrf.is_set
	|| source_address.is_set
	|| no_trigger.is_set
	|| period.is_set
	|| no_synch_on_start.is_set
	|| no_filter.is_set
	|| xpath.is_set
	|| tdl_uri.is_set
	|| transform_name.is_set;
}

bool MdtConfigData::MdtSubscription::Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stream.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(source_vrf.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(no_trigger.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(no_synch_on_start.yfilter)
	|| ydk::is_set(no_filter.yfilter)
	|| ydk::is_set(xpath.yfilter)
	|| ydk::is_set(tdl_uri.yfilter)
	|| ydk::is_set(transform_name.yfilter);
}

std::string MdtConfigData::MdtSubscription::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtSubscription::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stream.is_set || is_set(stream.yfilter)) leaf_name_data.push_back(stream.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (source_vrf.is_set || is_set(source_vrf.yfilter)) leaf_name_data.push_back(source_vrf.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (no_trigger.is_set || is_set(no_trigger.yfilter)) leaf_name_data.push_back(no_trigger.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (no_synch_on_start.is_set || is_set(no_synch_on_start.yfilter)) leaf_name_data.push_back(no_synch_on_start.get_name_leafdata());
    if (no_filter.is_set || is_set(no_filter.yfilter)) leaf_name_data.push_back(no_filter.get_name_leafdata());
    if (xpath.is_set || is_set(xpath.yfilter)) leaf_name_data.push_back(xpath.get_name_leafdata());
    if (tdl_uri.is_set || is_set(tdl_uri.yfilter)) leaf_name_data.push_back(tdl_uri.get_name_leafdata());
    if (transform_name.is_set || is_set(transform_name.yfilter)) leaf_name_data.push_back(transform_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtSubscription::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtSubscription::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MdtConfigData::MdtSubscription::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream")
    {
        stream = value;
        stream.value_namespace = name_space;
        stream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vrf")
    {
        source_vrf = value;
        source_vrf.value_namespace = name_space;
        source_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start = value;
        no_synch_on_start.value_namespace = name_space;
        no_synch_on_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-filter")
    {
        no_filter = value;
        no_filter.value_namespace = name_space;
        no_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xpath")
    {
        xpath = value;
        xpath.value_namespace = name_space;
        xpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdl-uri")
    {
        tdl_uri = value;
        tdl_uri.value_namespace = name_space;
        tdl_uri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-name")
    {
        transform_name = value;
        transform_name.value_namespace = name_space;
        transform_name.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtSubscription::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "source-vrf")
    {
        source_vrf.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "no-trigger")
    {
        no_trigger.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "no-synch-on-start")
    {
        no_synch_on_start.yfilter = yfilter;
    }
    if(value_path == "no-filter")
    {
        no_filter.yfilter = yfilter;
    }
    if(value_path == "xpath")
    {
        xpath.yfilter = yfilter;
    }
    if(value_path == "tdl-uri")
    {
        tdl_uri.yfilter = yfilter;
    }
    if(value_path == "transform-name")
    {
        transform_name.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtSubscription::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream" || name == "encoding" || name == "source-vrf" || name == "source-address" || name == "no-trigger" || name == "period" || name == "no-synch-on-start" || name == "no-filter" || name == "xpath" || name == "tdl-uri" || name == "transform-name")
        return true;
    return false;
}

MdtConfigData::MdtSubscription::MdtReceivers::MdtReceivers()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    protocol{YType::str, "protocol"},
    profile{YType::str, "profile"}
{

    yang_name = "mdt-receivers"; yang_parent_name = "mdt-subscription"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtSubscription::MdtReceivers::~MdtReceivers()
{
}

bool MdtConfigData::MdtSubscription::MdtReceivers::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set
	|| protocol.is_set
	|| profile.is_set;
}

bool MdtConfigData::MdtSubscription::MdtReceivers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string MdtConfigData::MdtSubscription::MdtReceivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-receivers";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtSubscription::MdtReceivers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtSubscription::MdtReceivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtSubscription::MdtReceivers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MdtConfigData::MdtSubscription::MdtReceivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtSubscription::MdtReceivers::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtSubscription::MdtReceivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "protocol" || name == "profile")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrm()
    :
    name{YType::str, "name"},
    fully_specify{YType::boolean, "fully-specify"}
        ,
    mdt_xfrm_input(this, {"table_name"})
    , mdt_xfrm_op(this, {"id"})
{

    yang_name = "mdt-xfrm"; yang_parent_name = "mdt-config-data"; is_top_level_class = false; has_list_ancestor = false; 
}

MdtConfigData::MdtXfrm::~MdtXfrm()
{
}

bool MdtConfigData::MdtXfrm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_xfrm_input.len(); index++)
    {
        if(mdt_xfrm_input[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mdt_xfrm_op.len(); index++)
    {
        if(mdt_xfrm_op[index]->has_data())
            return true;
    }
    return name.is_set
	|| fully_specify.is_set;
}

bool MdtConfigData::MdtXfrm::has_operation() const
{
    for (std::size_t index=0; index<mdt_xfrm_input.len(); index++)
    {
        if(mdt_xfrm_input[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mdt_xfrm_op.len(); index++)
    {
        if(mdt_xfrm_op[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(fully_specify.yfilter);
}

std::string MdtConfigData::MdtXfrm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-cfg:mdt-config-data/" << get_segment_path();
    return path_buffer.str();
}

std::string MdtConfigData::MdtXfrm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-xfrm";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (fully_specify.is_set || is_set(fully_specify.yfilter)) leaf_name_data.push_back(fully_specify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt-xfrm-input")
    {
        auto c = std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmInput>();
        c->parent = this;
        mdt_xfrm_input.append(c);
        return c;
    }

    if(child_yang_name == "mdt-xfrm-op")
    {
        auto c = std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmOp>();
        c->parent = this;
        mdt_xfrm_op.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mdt_xfrm_input.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mdt_xfrm_op.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MdtConfigData::MdtXfrm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-specify")
    {
        fully_specify = value;
        fully_specify.value_namespace = name_space;
        fully_specify.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "fully-specify")
    {
        fully_specify.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt-xfrm-input" || name == "mdt-xfrm-op" || name == "name" || name == "fully-specify")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInput()
    :
    table_name{YType::str, "table-name"},
    uri{YType::str, "uri"},
    join_key{YType::str, "join-key"},
    attr_type{YType::enumeration, "attr-type"},
    lop{YType::enumeration, "lop"}
        ,
    mdt_xfrm_input_field(this, {"field"})
{

    yang_name = "mdt-xfrm-input"; yang_parent_name = "mdt-xfrm"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtXfrm::MdtXfrmInput::~MdtXfrmInput()
{
}

bool MdtConfigData::MdtXfrm::MdtXfrmInput::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_xfrm_input_field.len(); index++)
    {
        if(mdt_xfrm_input_field[index]->has_data())
            return true;
    }
    return table_name.is_set
	|| uri.is_set
	|| join_key.is_set
	|| attr_type.is_set
	|| lop.is_set;
}

bool MdtConfigData::MdtXfrm::MdtXfrmInput::has_operation() const
{
    for (std::size_t index=0; index<mdt_xfrm_input_field.len(); index++)
    {
        if(mdt_xfrm_input_field[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(uri.yfilter)
	|| ydk::is_set(join_key.yfilter)
	|| ydk::is_set(attr_type.yfilter)
	|| ydk::is_set(lop.yfilter);
}

std::string MdtConfigData::MdtXfrm::MdtXfrmInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-xfrm-input";
    ADD_KEY_TOKEN(table_name, "table-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::MdtXfrmInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (uri.is_set || is_set(uri.yfilter)) leaf_name_data.push_back(uri.get_name_leafdata());
    if (join_key.is_set || is_set(join_key.yfilter)) leaf_name_data.push_back(join_key.get_name_leafdata());
    if (attr_type.is_set || is_set(attr_type.yfilter)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (lop.is_set || is_set(lop.yfilter)) leaf_name_data.push_back(lop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::MdtXfrmInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt-xfrm-input-field")
    {
        auto c = std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField>();
        c->parent = this;
        mdt_xfrm_input_field.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::MdtXfrmInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mdt_xfrm_input_field.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MdtConfigData::MdtXfrm::MdtXfrmInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uri")
    {
        uri = value;
        uri.value_namespace = name_space;
        uri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-key")
    {
        join_key = value;
        join_key.value_namespace = name_space;
        join_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-type")
    {
        attr_type = value;
        attr_type.value_namespace = name_space;
        attr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lop")
    {
        lop = value;
        lop.value_namespace = name_space;
        lop.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::MdtXfrmInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "uri")
    {
        uri.yfilter = yfilter;
    }
    if(value_path == "join-key")
    {
        join_key.yfilter = yfilter;
    }
    if(value_path == "attr-type")
    {
        attr_type.yfilter = yfilter;
    }
    if(value_path == "lop")
    {
        lop.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::MdtXfrmInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt-xfrm-input-field" || name == "table-name" || name == "uri" || name == "join-key" || name == "attr-type" || name == "lop")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::MdtXfrmInputField()
    :
    field{YType::str, "field"}
{

    yang_name = "mdt-xfrm-input-field"; yang_parent_name = "mdt-xfrm-input"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::~MdtXfrmInputField()
{
}

bool MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::has_data() const
{
    if (is_presence_container) return true;
    return field.is_set;
}

bool MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field.yfilter);
}

std::string MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-xfrm-input-field";
    ADD_KEY_TOKEN(field, "field");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field.is_set || is_set(field.yfilter)) leaf_name_data.push_back(field.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field")
    {
        field = value;
        field.value_namespace = name_space;
        field.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field")
    {
        field.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::MdtXfrmInput::MdtXfrmInputField::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOp()
    :
    id{YType::uint32, "id"}
        ,
    mdt_xfrm_op_filters(this, {"filter_id"})
    , mdt_xfrm_op_fields(this, {"field_id"})
{

    yang_name = "mdt-xfrm-op"; yang_parent_name = "mdt-xfrm"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtXfrm::MdtXfrmOp::~MdtXfrmOp()
{
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_xfrm_op_filters.len(); index++)
    {
        if(mdt_xfrm_op_filters[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mdt_xfrm_op_fields.len(); index++)
    {
        if(mdt_xfrm_op_fields[index]->has_data())
            return true;
    }
    return id.is_set;
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::has_operation() const
{
    for (std::size_t index=0; index<mdt_xfrm_op_filters.len(); index++)
    {
        if(mdt_xfrm_op_filters[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mdt_xfrm_op_fields.len(); index++)
    {
        if(mdt_xfrm_op_fields[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string MdtConfigData::MdtXfrm::MdtXfrmOp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-xfrm-op";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::MdtXfrmOp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::MdtXfrmOp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt-xfrm-op-filters")
    {
        auto c = std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters>();
        c->parent = this;
        mdt_xfrm_op_filters.append(c);
        return c;
    }

    if(child_yang_name == "mdt-xfrm-op-fields")
    {
        auto c = std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields>();
        c->parent = this;
        mdt_xfrm_op_fields.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::MdtXfrmOp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mdt_xfrm_op_filters.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : mdt_xfrm_op_fields.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt-xfrm-op-filters" || name == "mdt-xfrm-op-fields" || name == "id")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::MdtXfrmOpFilters()
    :
    filter_id{YType::uint32, "filter-id"},
    field{YType::str, "field"},
    lop{YType::enumeration, "lop"},
    next_lop{YType::enumeration, "next-lop"}
        ,
    op_event(std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent>())
    , condition(std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition>())
{
    op_event->parent = this;
    condition->parent = this;

    yang_name = "mdt-xfrm-op-filters"; yang_parent_name = "mdt-xfrm-op"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::~MdtXfrmOpFilters()
{
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::has_data() const
{
    if (is_presence_container) return true;
    return filter_id.is_set
	|| field.is_set
	|| lop.is_set
	|| next_lop.is_set
	|| (op_event !=  nullptr && op_event->has_data())
	|| (condition !=  nullptr && condition->has_data());
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_id.yfilter)
	|| ydk::is_set(field.yfilter)
	|| ydk::is_set(lop.yfilter)
	|| ydk::is_set(next_lop.yfilter)
	|| (op_event !=  nullptr && op_event->has_operation())
	|| (condition !=  nullptr && condition->has_operation());
}

std::string MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-xfrm-op-filters";
    ADD_KEY_TOKEN(filter_id, "filter-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_id.is_set || is_set(filter_id.yfilter)) leaf_name_data.push_back(filter_id.get_name_leafdata());
    if (field.is_set || is_set(field.yfilter)) leaf_name_data.push_back(field.get_name_leafdata());
    if (lop.is_set || is_set(lop.yfilter)) leaf_name_data.push_back(lop.get_name_leafdata());
    if (next_lop.is_set || is_set(next_lop.yfilter)) leaf_name_data.push_back(next_lop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "op-event")
    {
        if(op_event == nullptr)
        {
            op_event = std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent>();
        }
        return op_event;
    }

    if(child_yang_name == "condition")
    {
        if(condition == nullptr)
        {
            condition = std::make_shared<MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition>();
        }
        return condition;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(op_event != nullptr)
    {
        children["op-event"] = op_event;
    }

    if(condition != nullptr)
    {
        children["condition"] = condition;
    }

    return children;
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-id")
    {
        filter_id = value;
        filter_id.value_namespace = name_space;
        filter_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "field")
    {
        field = value;
        field.value_namespace = name_space;
        field.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lop")
    {
        lop = value;
        lop.value_namespace = name_space;
        lop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-lop")
    {
        next_lop = value;
        next_lop.value_namespace = name_space;
        next_lop.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-id")
    {
        filter_id.yfilter = yfilter;
    }
    if(value_path == "field")
    {
        field.yfilter = yfilter;
    }
    if(value_path == "lop")
    {
        lop.yfilter = yfilter;
    }
    if(value_path == "next-lop")
    {
        next_lop.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "op-event" || name == "condition" || name == "filter-id" || name == "field" || name == "lop" || name == "next-lop")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::OpEvent()
    :
    onchange{YType::boolean, "onchange"}
{

    yang_name = "op-event"; yang_parent_name = "mdt-xfrm-op-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::~OpEvent()
{
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::has_data() const
{
    if (is_presence_container) return true;
    return onchange.is_set;
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(onchange.yfilter);
}

std::string MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "op-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onchange.is_set || is_set(onchange.yfilter)) leaf_name_data.push_back(onchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "onchange")
    {
        onchange = value;
        onchange.value_namespace = name_space;
        onchange.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "onchange")
    {
        onchange.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::OpEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onchange")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::Condition()
    :
    operator_{YType::enumeration, "operator"},
    value_{YType::str, "value"}
{

    yang_name = "condition"; yang_parent_name = "mdt-xfrm-op-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::~Condition()
{
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::has_data() const
{
    if (is_presence_container) return true;
    return operator_.is_set
	|| value_.is_set;
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "condition";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFilters::Condition::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "value")
        return true;
    return false;
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::MdtXfrmOpFields()
    :
    field_id{YType::uint32, "field-id"},
    field{YType::str, "field"},
    op_type{YType::enumeration, "op-type"}
{

    yang_name = "mdt-xfrm-op-fields"; yang_parent_name = "mdt-xfrm-op"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::~MdtXfrmOpFields()
{
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::has_data() const
{
    if (is_presence_container) return true;
    return field_id.is_set
	|| field.is_set
	|| op_type.is_set;
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(field_id.yfilter)
	|| ydk::is_set(field.yfilter)
	|| ydk::is_set(op_type.yfilter);
}

std::string MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-xfrm-op-fields";
    ADD_KEY_TOKEN(field_id, "field-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (field_id.is_set || is_set(field_id.yfilter)) leaf_name_data.push_back(field_id.get_name_leafdata());
    if (field.is_set || is_set(field.yfilter)) leaf_name_data.push_back(field.get_name_leafdata());
    if (op_type.is_set || is_set(op_type.yfilter)) leaf_name_data.push_back(op_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "field-id")
    {
        field_id = value;
        field_id.value_namespace = name_space;
        field_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "field")
    {
        field = value;
        field.value_namespace = name_space;
        field.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "op-type")
    {
        op_type = value;
        op_type.value_namespace = name_space;
        op_type.value_namespace_prefix = name_space_prefix;
    }
}

void MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "field-id")
    {
        field_id.yfilter = yfilter;
    }
    if(value_path == "field")
    {
        field.yfilter = yfilter;
    }
    if(value_path == "op-type")
    {
        op_type.yfilter = yfilter;
    }
}

bool MdtConfigData::MdtXfrm::MdtXfrmOp::MdtXfrmOpFields::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "field-id" || name == "field" || name == "op-type")
        return true;
    return false;
}

const Enum::YLeaf MdtXfrmOperator::operator_none {0, "operator-none"};
const Enum::YLeaf MdtXfrmOperator::eq {1, "eq"};
const Enum::YLeaf MdtXfrmOperator::ne {2, "ne"};
const Enum::YLeaf MdtXfrmOperator::gt {3, "gt"};
const Enum::YLeaf MdtXfrmOperator::ge {4, "ge"};
const Enum::YLeaf MdtXfrmOperator::lt {5, "lt"};
const Enum::YLeaf MdtXfrmOperator::le {6, "le"};

const Enum::YLeaf MdtXfrmOpType::sub_record {0, "sub-record"};
const Enum::YLeaf MdtXfrmOpType::delta {1, "delta"};

const Enum::YLeaf MdtXfrmLogicOp::mdt_xfrm_lop_none {0, "mdt-xfrm-lop-none"};
const Enum::YLeaf MdtXfrmLogicOp::and_ {1, "and"};
const Enum::YLeaf MdtXfrmLogicOp::or_ {2, "or"};

const Enum::YLeaf MdtXfrmAttrType::mdt_xfrm_attr_none {0, "mdt-xfrm-attr-none"};
const Enum::YLeaf MdtXfrmAttrType::mandatory {1, "mandatory"};
const Enum::YLeaf MdtXfrmAttrType::primary {2, "primary"};


}
}

