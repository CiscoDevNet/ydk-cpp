
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mdt_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_oper {

MdtOperData::MdtOperData()
    :
    mdt_streams(std::make_shared<MdtOperData::MdtStreams>())
    , mdt_subscriptions(this, {"subscription_id"})
    , mdt_connections(this, {"address", "port", "source_vrf", "source_address"})
{
    mdt_streams->parent = this;

    yang_name = "mdt-oper-data"; yang_parent_name = "Cisco-IOS-XE-mdt-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

MdtOperData::~MdtOperData()
{
}

bool MdtOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_subscriptions.len(); index++)
    {
        if(mdt_subscriptions[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mdt_connections.len(); index++)
    {
        if(mdt_connections[index]->has_data())
            return true;
    }
    return (mdt_streams !=  nullptr && mdt_streams->has_data());
}

bool MdtOperData::has_operation() const
{
    for (std::size_t index=0; index<mdt_subscriptions.len(); index++)
    {
        if(mdt_subscriptions[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mdt_connections.len(); index++)
    {
        if(mdt_connections[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (mdt_streams !=  nullptr && mdt_streams->has_operation());
}

std::string MdtOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-oper:mdt-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MdtOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt-streams")
    {
        if(mdt_streams == nullptr)
        {
            mdt_streams = std::make_shared<MdtOperData::MdtStreams>();
        }
        return mdt_streams;
    }

    if(child_yang_name == "mdt-subscriptions")
    {
        auto ent_ = std::make_shared<MdtOperData::MdtSubscriptions>();
        ent_->parent = this;
        mdt_subscriptions.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mdt-connections")
    {
        auto ent_ = std::make_shared<MdtOperData::MdtConnections>();
        ent_->parent = this;
        mdt_connections.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MdtOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mdt_streams != nullptr)
    {
        _children["mdt-streams"] = mdt_streams;
    }

    count_ = 0;
    for (auto ent_ : mdt_subscriptions.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mdt_connections.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MdtOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MdtOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MdtOperData::clone_ptr() const
{
    return std::make_shared<MdtOperData>();
}

std::string MdtOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MdtOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MdtOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MdtOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MdtOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt-streams" || name == "mdt-subscriptions" || name == "mdt-connections")
        return true;
    return false;
}

MdtOperData::MdtStreams::MdtStreams()
    :
    stream{YType::str, "stream"}
{

    yang_name = "mdt-streams"; yang_parent_name = "mdt-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

MdtOperData::MdtStreams::~MdtStreams()
{
}

bool MdtOperData::MdtStreams::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : stream.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MdtOperData::MdtStreams::has_operation() const
{
    for (auto const & leaf : stream.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(stream.yfilter);
}

std::string MdtOperData::MdtStreams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-oper:mdt-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string MdtOperData::MdtStreams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-streams";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtOperData::MdtStreams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto stream_name_datas = stream.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), stream_name_datas.begin(), stream_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MdtOperData::MdtStreams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MdtOperData::MdtStreams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MdtOperData::MdtStreams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stream")
    {
        stream.append(value);
    }
}

void MdtOperData::MdtStreams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stream")
    {
        stream.yfilter = yfilter;
    }
}

bool MdtOperData::MdtStreams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream")
        return true;
    return false;
}

MdtOperData::MdtSubscriptions::MdtSubscriptions()
    :
    subscription_id{YType::uint32, "subscription-id"},
    type{YType::enumeration, "type"},
    state{YType::enumeration, "state"},
    comments{YType::str, "comments"},
    updates_in{YType::uint64, "updates-in"},
    updates_dampened{YType::uint64, "updates-dampened"},
    updates_dropped{YType::uint64, "updates-dropped"}
        ,
    base(std::make_shared<MdtOperData::MdtSubscriptions::Base>())
    , mdt_receivers(this, {"address", "port"})
{
    base->parent = this;

    yang_name = "mdt-subscriptions"; yang_parent_name = "mdt-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

MdtOperData::MdtSubscriptions::~MdtSubscriptions()
{
}

bool MdtOperData::MdtSubscriptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_receivers.len(); index++)
    {
        if(mdt_receivers[index]->has_data())
            return true;
    }
    return subscription_id.is_set
	|| type.is_set
	|| state.is_set
	|| comments.is_set
	|| updates_in.is_set
	|| updates_dampened.is_set
	|| updates_dropped.is_set
	|| (base !=  nullptr && base->has_data());
}

bool MdtOperData::MdtSubscriptions::has_operation() const
{
    for (std::size_t index=0; index<mdt_receivers.len(); index++)
    {
        if(mdt_receivers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subscription_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(comments.yfilter)
	|| ydk::is_set(updates_in.yfilter)
	|| ydk::is_set(updates_dampened.yfilter)
	|| ydk::is_set(updates_dropped.yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string MdtOperData::MdtSubscriptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-oper:mdt-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string MdtOperData::MdtSubscriptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-subscriptions";
    ADD_KEY_TOKEN(subscription_id, "subscription-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtOperData::MdtSubscriptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscription_id.is_set || is_set(subscription_id.yfilter)) leaf_name_data.push_back(subscription_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (comments.is_set || is_set(comments.yfilter)) leaf_name_data.push_back(comments.get_name_leafdata());
    if (updates_in.is_set || is_set(updates_in.yfilter)) leaf_name_data.push_back(updates_in.get_name_leafdata());
    if (updates_dampened.is_set || is_set(updates_dampened.yfilter)) leaf_name_data.push_back(updates_dampened.get_name_leafdata());
    if (updates_dropped.is_set || is_set(updates_dropped.yfilter)) leaf_name_data.push_back(updates_dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MdtOperData::MdtSubscriptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<MdtOperData::MdtSubscriptions::Base>();
        }
        return base;
    }

    if(child_yang_name == "mdt-receivers")
    {
        auto ent_ = std::make_shared<MdtOperData::MdtSubscriptions::MdtReceivers>();
        ent_->parent = this;
        mdt_receivers.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MdtOperData::MdtSubscriptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    count_ = 0;
    for (auto ent_ : mdt_receivers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MdtOperData::MdtSubscriptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscription-id")
    {
        subscription_id = value;
        subscription_id.value_namespace = name_space;
        subscription_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comments")
    {
        comments = value;
        comments.value_namespace = name_space;
        comments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-in")
    {
        updates_in = value;
        updates_in.value_namespace = name_space;
        updates_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-dampened")
    {
        updates_dampened = value;
        updates_dampened.value_namespace = name_space;
        updates_dampened.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-dropped")
    {
        updates_dropped = value;
        updates_dropped.value_namespace = name_space;
        updates_dropped.value_namespace_prefix = name_space_prefix;
    }
}

void MdtOperData::MdtSubscriptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscription-id")
    {
        subscription_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "comments")
    {
        comments.yfilter = yfilter;
    }
    if(value_path == "updates-in")
    {
        updates_in.yfilter = yfilter;
    }
    if(value_path == "updates-dampened")
    {
        updates_dampened.yfilter = yfilter;
    }
    if(value_path == "updates-dropped")
    {
        updates_dropped.yfilter = yfilter;
    }
}

bool MdtOperData::MdtSubscriptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base" || name == "mdt-receivers" || name == "subscription-id" || name == "type" || name == "state" || name == "comments" || name == "updates-in" || name == "updates-dampened" || name == "updates-dropped")
        return true;
    return false;
}

MdtOperData::MdtSubscriptions::Base::Base()
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

    yang_name = "base"; yang_parent_name = "mdt-subscriptions"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtOperData::MdtSubscriptions::Base::~Base()
{
}

bool MdtOperData::MdtSubscriptions::Base::has_data() const
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

bool MdtOperData::MdtSubscriptions::Base::has_operation() const
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

std::string MdtOperData::MdtSubscriptions::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtOperData::MdtSubscriptions::Base::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> MdtOperData::MdtSubscriptions::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MdtOperData::MdtSubscriptions::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MdtOperData::MdtSubscriptions::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MdtOperData::MdtSubscriptions::Base::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MdtOperData::MdtSubscriptions::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stream" || name == "encoding" || name == "source-vrf" || name == "source-address" || name == "no-trigger" || name == "period" || name == "no-synch-on-start" || name == "no-filter" || name == "xpath" || name == "tdl-uri" || name == "transform-name")
        return true;
    return false;
}

MdtOperData::MdtSubscriptions::MdtReceivers::MdtReceivers()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    protocol{YType::str, "protocol"},
    state{YType::enumeration, "state"},
    comments{YType::str, "comments"},
    profile{YType::str, "profile"}
{

    yang_name = "mdt-receivers"; yang_parent_name = "mdt-subscriptions"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtOperData::MdtSubscriptions::MdtReceivers::~MdtReceivers()
{
}

bool MdtOperData::MdtSubscriptions::MdtReceivers::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| port.is_set
	|| protocol.is_set
	|| state.is_set
	|| comments.is_set
	|| profile.is_set;
}

bool MdtOperData::MdtSubscriptions::MdtReceivers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(comments.yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string MdtOperData::MdtSubscriptions::MdtReceivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-receivers";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(port, "port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtOperData::MdtSubscriptions::MdtReceivers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (comments.is_set || is_set(comments.yfilter)) leaf_name_data.push_back(comments.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MdtOperData::MdtSubscriptions::MdtReceivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MdtOperData::MdtSubscriptions::MdtReceivers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MdtOperData::MdtSubscriptions::MdtReceivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comments")
    {
        comments = value;
        comments.value_namespace = name_space;
        comments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void MdtOperData::MdtSubscriptions::MdtReceivers::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "comments")
    {
        comments.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool MdtOperData::MdtSubscriptions::MdtReceivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "port" || name == "protocol" || name == "state" || name == "comments" || name == "profile")
        return true;
    return false;
}

MdtOperData::MdtConnections::MdtConnections()
    :
    address{YType::str, "address"},
    port{YType::uint16, "port"},
    source_vrf{YType::str, "source-vrf"},
    source_address{YType::str, "source-address"},
    transport{YType::str, "transport"},
    peer_id{YType::str, "peer-id"},
    state{YType::enumeration, "state"},
    profile{YType::str, "profile"}
        ,
    mdt_sub_con_stats(this, {"sub_id"})
{

    yang_name = "mdt-connections"; yang_parent_name = "mdt-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

MdtOperData::MdtConnections::~MdtConnections()
{
}

bool MdtOperData::MdtConnections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mdt_sub_con_stats.len(); index++)
    {
        if(mdt_sub_con_stats[index]->has_data())
            return true;
    }
    return address.is_set
	|| port.is_set
	|| source_vrf.is_set
	|| source_address.is_set
	|| transport.is_set
	|| peer_id.is_set
	|| state.is_set
	|| profile.is_set;
}

bool MdtOperData::MdtConnections::has_operation() const
{
    for (std::size_t index=0; index<mdt_sub_con_stats.len(); index++)
    {
        if(mdt_sub_con_stats[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(source_vrf.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string MdtOperData::MdtConnections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mdt-oper:mdt-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string MdtOperData::MdtConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-connections";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(port, "port");
    ADD_KEY_TOKEN(source_vrf, "source-vrf");
    ADD_KEY_TOKEN(source_address, "source-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtOperData::MdtConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (source_vrf.is_set || is_set(source_vrf.yfilter)) leaf_name_data.push_back(source_vrf.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MdtOperData::MdtConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdt-sub-con-stats")
    {
        auto ent_ = std::make_shared<MdtOperData::MdtConnections::MdtSubConStats>();
        ent_->parent = this;
        mdt_sub_con_stats.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MdtOperData::MdtConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mdt_sub_con_stats.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MdtOperData::MdtConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void MdtOperData::MdtConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "source-vrf")
    {
        source_vrf.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool MdtOperData::MdtConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdt-sub-con-stats" || name == "address" || name == "port" || name == "source-vrf" || name == "source-address" || name == "transport" || name == "peer-id" || name == "state" || name == "profile")
        return true;
    return false;
}

MdtOperData::MdtConnections::MdtSubConStats::MdtSubConStats()
    :
    sub_id{YType::uint32, "sub-id"},
    updates_sent{YType::uint64, "updates-sent"},
    updates_dropped{YType::uint64, "updates-dropped"}
{

    yang_name = "mdt-sub-con-stats"; yang_parent_name = "mdt-connections"; is_top_level_class = false; has_list_ancestor = true; 
}

MdtOperData::MdtConnections::MdtSubConStats::~MdtSubConStats()
{
}

bool MdtOperData::MdtConnections::MdtSubConStats::has_data() const
{
    if (is_presence_container) return true;
    return sub_id.is_set
	|| updates_sent.is_set
	|| updates_dropped.is_set;
}

bool MdtOperData::MdtConnections::MdtSubConStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| ydk::is_set(updates_sent.yfilter)
	|| ydk::is_set(updates_dropped.yfilter);
}

std::string MdtOperData::MdtConnections::MdtSubConStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-sub-con-stats";
    ADD_KEY_TOKEN(sub_id, "sub-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MdtOperData::MdtConnections::MdtSubConStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (updates_sent.is_set || is_set(updates_sent.yfilter)) leaf_name_data.push_back(updates_sent.get_name_leafdata());
    if (updates_dropped.is_set || is_set(updates_dropped.yfilter)) leaf_name_data.push_back(updates_dropped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MdtOperData::MdtConnections::MdtSubConStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MdtOperData::MdtConnections::MdtSubConStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MdtOperData::MdtConnections::MdtSubConStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-sent")
    {
        updates_sent = value;
        updates_sent.value_namespace = name_space;
        updates_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates-dropped")
    {
        updates_dropped = value;
        updates_dropped.value_namespace = name_space;
        updates_dropped.value_namespace_prefix = name_space_prefix;
    }
}

void MdtOperData::MdtConnections::MdtSubConStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
    if(value_path == "updates-sent")
    {
        updates_sent.yfilter = yfilter;
    }
    if(value_path == "updates-dropped")
    {
        updates_dropped.yfilter = yfilter;
    }
}

bool MdtOperData::MdtConnections::MdtSubConStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-id" || name == "updates-sent" || name == "updates-dropped")
        return true;
    return false;
}

const Enum::YLeaf MdtSubState::sub_state_valid {0, "sub-state-valid"};
const Enum::YLeaf MdtSubState::sub_state_suspended {1, "sub-state-suspended"};
const Enum::YLeaf MdtSubState::sub_state_terminated {2, "sub-state-terminated"};
const Enum::YLeaf MdtSubState::sub_state_invalid {3, "sub-state-invalid"};

const Enum::YLeaf MdtConState::con_state_active {0, "con-state-active"};
const Enum::YLeaf MdtConState::con_state_connecting {1, "con-state-connecting"};
const Enum::YLeaf MdtConState::con_state_pending {2, "con-state-pending"};
const Enum::YLeaf MdtConState::con_state_disconnecting {3, "con-state-disconnecting"};

const Enum::YLeaf MdtSubType::sub_type_dynamic {1, "sub-type-dynamic"};
const Enum::YLeaf MdtSubType::sub_type_static {2, "sub-type-static"};
const Enum::YLeaf MdtSubType::sub_type_permanent {3, "sub-type-permanent"};

const Enum::YLeaf MdtReceiverState::rcvr_state_invalid {1, "rcvr-state-invalid"};
const Enum::YLeaf MdtReceiverState::rcvr_state_disconnected {2, "rcvr-state-disconnected"};
const Enum::YLeaf MdtReceiverState::rcvr_state_connecting {3, "rcvr-state-connecting"};
const Enum::YLeaf MdtReceiverState::rcvr_state_connected {4, "rcvr-state-connected"};


}
}

