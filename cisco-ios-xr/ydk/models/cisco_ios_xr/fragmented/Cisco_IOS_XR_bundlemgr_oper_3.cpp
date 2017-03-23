
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::EventsItem()
    :
    item_name{YType::str, "item-name"}
{
    yang_name = "events-item"; yang_parent_name = "events-mbr-bundle-descendant-iccp-group";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::~EventsItem()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return item_name.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(item_name.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events-item";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items>();
        c->parent = this;
        items.push_back(std::move(c));
        children[segment_path] = items.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::get_children()
{
    for (auto const & c : items)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "item-name")
    {
        item_name = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::Items()
    :
    event_type{YType::enumeration, "event-type"}
    	,
    bundle_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>())
	,member_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>())
	,rg_evt_info(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>())
{
    bundle_evt_info->parent = this;
    children["bundle-evt-info"] = bundle_evt_info;

    member_evt_info->parent = this;
    children["member-evt-info"] = member_evt_info;

    rg_evt_info->parent = this;
    children["rg-evt-info"] = rg_evt_info;

    yang_name = "items"; yang_parent_name = "events-item";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::~Items()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::has_data() const
{
    return event_type.is_set
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_data())
	|| (member_evt_info !=  nullptr && member_evt_info->has_data())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::has_operation() const
{
    return is_set(operation)
	|| is_set(event_type.operation)
	|| (bundle_evt_info !=  nullptr && bundle_evt_info->has_operation())
	|| (member_evt_info !=  nullptr && member_evt_info->has_operation())
	|| (rg_evt_info !=  nullptr && rg_evt_info->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-evt-info")
    {
        if(bundle_evt_info != nullptr)
        {
            children["bundle-evt-info"] = bundle_evt_info;
        }
        else
        {
            bundle_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo>();
            bundle_evt_info->parent = this;
            children["bundle-evt-info"] = bundle_evt_info;
        }
        return children.at("bundle-evt-info");
    }

    if(child_yang_name == "member-evt-info")
    {
        if(member_evt_info != nullptr)
        {
            children["member-evt-info"] = member_evt_info;
        }
        else
        {
            member_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo>();
            member_evt_info->parent = this;
            children["member-evt-info"] = member_evt_info;
        }
        return children.at("member-evt-info");
    }

    if(child_yang_name == "rg-evt-info")
    {
        if(rg_evt_info != nullptr)
        {
            children["rg-evt-info"] = rg_evt_info;
        }
        else
        {
            rg_evt_info = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo>();
            rg_evt_info->parent = this;
            children["rg-evt-info"] = rg_evt_info;
        }
        return children.at("rg-evt-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::get_children()
{
    if(children.find("bundle-evt-info") == children.end())
    {
        if(bundle_evt_info != nullptr)
        {
            children["bundle-evt-info"] = bundle_evt_info;
        }
    }

    if(children.find("member-evt-info") == children.end())
    {
        if(member_evt_info != nullptr)
        {
            children["member-evt-info"] = member_evt_info;
        }
    }

    if(children.find("rg-evt-info") == children.end())
    {
        if(rg_evt_info != nullptr)
        {
            children["rg-evt-info"] = rg_evt_info;
        }
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::MemberEvtInfo()
    :
    member_event_type{YType::enumeration, "member-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "member-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::~MemberEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_data() const
{
    return member_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(member_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-evt-info";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::set_value(const std::string & value_path, std::string value)
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

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "member-evt-info";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::get_children()
{
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data::set_value(const std::string & value_path, std::string value)
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

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::BundleEvtInfo()
    :
    bundle_event_type{YType::enumeration, "bundle-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "bundle-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::~BundleEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_data() const
{
    return bundle_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-evt-info";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::set_value(const std::string & value_path, std::string value)
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

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "bundle-evt-info";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::get_children()
{
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data::set_value(const std::string & value_path, std::string value)
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

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::RgEvtInfo()
    :
    rg_event_type{YType::enumeration, "rg-event-type"},
    time_stamp{YType::uint64, "time-stamp"}
    	,
    data(std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>())
{
    data->parent = this;
    children["data"] = data;

    yang_name = "rg-evt-info"; yang_parent_name = "items";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::~RgEvtInfo()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_data() const
{
    return rg_event_type.is_set
	|| time_stamp.is_set
	|| (data !=  nullptr && data->has_data());
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(rg_event_type.operation)
	|| is_set(time_stamp.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rg-evt-info";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::set_value(const std::string & value_path, std::string value)
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

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::Data()
    :
    data_type{YType::enumeration, "data-type"},
    error{YType::uint32, "error"},
    no_data{YType::uint8, "no-data"},
    string_data{YType::str, "string-data"}
{
    yang_name = "data"; yang_parent_name = "rg-evt-info";
}

BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::~Data()
{
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_data() const
{
    return data_type.is_set
	|| error.is_set
	|| no_data.is_set
	|| string_data.is_set;
}

bool BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(data_type.operation)
	|| is_set(error.operation)
	|| is_set(no_data.operation)
	|| is_set(string_data.operation);
}

std::string BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::get_children()
{
    return children;
}

void BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data::set_value(const std::string & value_path, std::string value)
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

BundleInformation::MlacpIccpGroupCounters::MlacpIccpGroupCounters()
    :
    iccp_groups(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups>())
{
    iccp_groups->parent = this;
    children["iccp-groups"] = iccp_groups;

    yang_name = "mlacp-iccp-group-counters"; yang_parent_name = "bundle-information";
}

BundleInformation::MlacpIccpGroupCounters::~MlacpIccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::has_data() const
{
    return (iccp_groups !=  nullptr && iccp_groups->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::has_operation() const
{
    return is_set(operation)
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
        else
        {
            iccp_groups = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups>();
            iccp_groups->parent = this;
            children["iccp-groups"] = iccp_groups;
        }
        return children.at("iccp-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::get_children()
{
    if(children.find("iccp-groups") == children.end())
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroups()
{
    yang_name = "iccp-groups"; yang_parent_name = "mlacp-iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::~IccpGroups()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-iccp-group-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(std::move(c));
        children[segment_path] = iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_children()
{
    for (auto const & c : iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    iccp_group_ancestor_bundle(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle>())
	,iccp_group_ancestor_member(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember>())
	,iccp_group_ancestor_node(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode>())
	,iccp_group_item(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem>())
{
    iccp_group_ancestor_bundle->parent = this;
    children["iccp-group-ancestor-bundle"] = iccp_group_ancestor_bundle;

    iccp_group_ancestor_member->parent = this;
    children["iccp-group-ancestor-member"] = iccp_group_ancestor_member;

    iccp_group_ancestor_node->parent = this;
    children["iccp-group-ancestor-node"] = iccp_group_ancestor_node;

    iccp_group_item->parent = this;
    children["iccp-group-item"] = iccp_group_item;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (iccp_group_ancestor_bundle !=  nullptr && iccp_group_ancestor_bundle->has_data())
	|| (iccp_group_ancestor_member !=  nullptr && iccp_group_ancestor_member->has_data())
	|| (iccp_group_ancestor_node !=  nullptr && iccp_group_ancestor_node->has_data())
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (iccp_group_ancestor_bundle !=  nullptr && iccp_group_ancestor_bundle->has_operation())
	|| (iccp_group_ancestor_member !=  nullptr && iccp_group_ancestor_member->has_operation())
	|| (iccp_group_ancestor_node !=  nullptr && iccp_group_ancestor_node->has_operation())
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-iccp-group-counters/iccp-groups/" << get_segment_path();
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

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-ancestor-bundle")
    {
        if(iccp_group_ancestor_bundle != nullptr)
        {
            children["iccp-group-ancestor-bundle"] = iccp_group_ancestor_bundle;
        }
        else
        {
            iccp_group_ancestor_bundle = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle>();
            iccp_group_ancestor_bundle->parent = this;
            children["iccp-group-ancestor-bundle"] = iccp_group_ancestor_bundle;
        }
        return children.at("iccp-group-ancestor-bundle");
    }

    if(child_yang_name == "iccp-group-ancestor-member")
    {
        if(iccp_group_ancestor_member != nullptr)
        {
            children["iccp-group-ancestor-member"] = iccp_group_ancestor_member;
        }
        else
        {
            iccp_group_ancestor_member = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember>();
            iccp_group_ancestor_member->parent = this;
            children["iccp-group-ancestor-member"] = iccp_group_ancestor_member;
        }
        return children.at("iccp-group-ancestor-member");
    }

    if(child_yang_name == "iccp-group-ancestor-node")
    {
        if(iccp_group_ancestor_node != nullptr)
        {
            children["iccp-group-ancestor-node"] = iccp_group_ancestor_node;
        }
        else
        {
            iccp_group_ancestor_node = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode>();
            iccp_group_ancestor_node->parent = this;
            children["iccp-group-ancestor-node"] = iccp_group_ancestor_node;
        }
        return children.at("iccp-group-ancestor-node");
    }

    if(child_yang_name == "iccp-group-item")
    {
        if(iccp_group_item != nullptr)
        {
            children["iccp-group-item"] = iccp_group_item;
        }
        else
        {
            iccp_group_item = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem>();
            iccp_group_item->parent = this;
            children["iccp-group-item"] = iccp_group_item;
        }
        return children.at("iccp-group-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_children()
{
    if(children.find("iccp-group-ancestor-bundle") == children.end())
    {
        if(iccp_group_ancestor_bundle != nullptr)
        {
            children["iccp-group-ancestor-bundle"] = iccp_group_ancestor_bundle;
        }
    }

    if(children.find("iccp-group-ancestor-member") == children.end())
    {
        if(iccp_group_ancestor_member != nullptr)
        {
            children["iccp-group-ancestor-member"] = iccp_group_ancestor_member;
        }
    }

    if(children.find("iccp-group-ancestor-node") == children.end())
    {
        if(iccp_group_ancestor_node != nullptr)
        {
            children["iccp-group-ancestor-node"] = iccp_group_ancestor_node;
        }
    }

    if(children.find("iccp-group-item") == children.end())
    {
        if(iccp_group_item != nullptr)
        {
            children["iccp-group-item"] = iccp_group_item;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupAncestorBundle()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;
    children["iccp-group-counters"] = iccp_group_counters;

    yang_name = "iccp-group-ancestor-bundle"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::~IccpGroupAncestorBundle()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-ancestor-bundle";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupAncestorBundle' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
        else
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters>();
            iccp_group_counters->parent = this;
            children["iccp-group-counters"] = iccp_group_counters;
        }
        return children.at("iccp-group-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_children()
{
    if(children.find("iccp-group-counters") == children.end())
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    children["connection"] = connection;

    iccp_events->parent = this;
    children["iccp-events"] = iccp_events;

    iccp_messages->parent = this;
    children["iccp-messages"] = iccp_messages;

    invalid_tl_vs->parent = this;
    children["invalid-tl-vs"] = invalid_tl_vs;

    tl_vs->parent = this;
    children["tl-vs"] = tl_vs;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-ancestor-bundle";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(time_since_cleared.operation)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connection")
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
        else
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection>();
            connection->parent = this;
            children["connection"] = connection;
        }
        return children.at("connection");
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
        else
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents>();
            iccp_events->parent = this;
            children["iccp-events"] = iccp_events;
        }
        return children.at("iccp-events");
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
        else
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages>();
            iccp_messages->parent = this;
            children["iccp-messages"] = iccp_messages;
        }
        return children.at("iccp-messages");
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        else
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs>();
            invalid_tl_vs->parent = this;
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        return children.at("invalid-tl-vs");
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
        else
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs>();
            tl_vs->parent = this;
            children["tl-vs"] = tl_vs;
        }
        return children.at("tl-vs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_children()
{
    if(children.find("connection") == children.end())
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
    }

    if(children.find("iccp-events") == children.end())
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
    }

    if(children.find("iccp-messages") == children.end())
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
    }

    if(children.find("invalid-tl-vs") == children.end())
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
    }

    if(children.find("tl-vs") == children.end())
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{
    yang_name = "connection"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_config_connect_errors.operation)
	|| is_set(iccp_count_connect_errors.operation)
	|| is_set(iccp_invalid_connects.operation)
	|| is_set(iccp_invalid_disconnects.operation)
	|| is_set(received_connects.operation)
	|| is_set(received_disconnects.operation)
	|| is_set(received_wrong_versions.operation)
	|| is_set(sent_connects.operation)
	|| is_set(sent_disconnects.operation)
	|| is_set(sent_wrong_versions.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connection' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.operation)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.operation)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.operation)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.operation)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.operation)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.operation)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.operation)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.operation)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.operation)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.operation)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{
    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(received_config.operation)
	|| is_set(received_config_sync_requests.operation)
	|| is_set(received_na_ks.operation)
	|| is_set(received_solicited_sync_data.operation)
	|| is_set(received_state.operation)
	|| is_set(received_state_sync_requests.operation)
	|| is_set(received_sync_requests.operation)
	|| is_set(received_unsolicited_sync_data.operation)
	|| is_set(sent_config.operation)
	|| is_set(sent_config_sync_requests.operation)
	|| is_set(sent_na_ks.operation)
	|| is_set(sent_solicited_sync_data.operation)
	|| is_set(sent_state.operation)
	|| is_set(sent_state_sync_requests.operation)
	|| is_set(sent_sync_requests.operation)
	|| is_set(sent_unsolicited_sync_data.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.operation)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.operation)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.operation)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.operation)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.operation)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.operation)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.operation)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.operation)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.operation)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.operation)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.operation)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.operation)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.operation)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.operation)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.operation)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.operation)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-config")
    {
        received_config = value;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
    }
    if(value_path == "received-state")
    {
        received_state = value;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{
    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(incorrect_length.operation)
	|| is_set(invalid_data.operation)
	|| is_set(invalid_type.operation)
	|| is_set(unknown_bundle.operation)
	|| is_set(unknown_port.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvalidTlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.operation)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.operation)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.operation)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.operation)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.operation)) leaf_name_data.push_back(unknown_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{
    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(received_messages.operation)
	|| is_set(sent_buffer_messages.operation)
	|| is_set(sent_messages.operation)
	|| is_set(transmission_errors.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpMessages' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.operation)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.operation)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.operation)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{
    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_clear.operation)
	|| is_set(configured_set.operation)
	|| is_set(member_status_down.operation)
	|| is_set(member_status_up.operation)
	|| is_set(pe_isolated.operation)
	|| is_set(pe_isolated_clear.operation)
	|| is_set(reachability_cleared.operation)
	|| is_set(reachability_set.operation)
	|| is_set(transport_down.operation)
	|| is_set(transport_unavailable.operation)
	|| is_set(transport_up.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpEvents' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.operation)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.operation)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.operation)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.operation)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.operation)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.operation)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.operation)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.operation)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.operation)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.operation)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.operation)) leaf_name_data.push_back(transport_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupAncestorMember()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;
    children["iccp-group-counters"] = iccp_group_counters;

    yang_name = "iccp-group-ancestor-member"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::~IccpGroupAncestorMember()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-ancestor-member";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupAncestorMember' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
        else
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters>();
            iccp_group_counters->parent = this;
            children["iccp-group-counters"] = iccp_group_counters;
        }
        return children.at("iccp-group-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_children()
{
    if(children.find("iccp-group-counters") == children.end())
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    children["connection"] = connection;

    iccp_events->parent = this;
    children["iccp-events"] = iccp_events;

    iccp_messages->parent = this;
    children["iccp-messages"] = iccp_messages;

    invalid_tl_vs->parent = this;
    children["invalid-tl-vs"] = invalid_tl_vs;

    tl_vs->parent = this;
    children["tl-vs"] = tl_vs;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-ancestor-member";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(time_since_cleared.operation)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connection")
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
        else
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection>();
            connection->parent = this;
            children["connection"] = connection;
        }
        return children.at("connection");
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
        else
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents>();
            iccp_events->parent = this;
            children["iccp-events"] = iccp_events;
        }
        return children.at("iccp-events");
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
        else
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages>();
            iccp_messages->parent = this;
            children["iccp-messages"] = iccp_messages;
        }
        return children.at("iccp-messages");
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        else
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs>();
            invalid_tl_vs->parent = this;
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        return children.at("invalid-tl-vs");
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
        else
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs>();
            tl_vs->parent = this;
            children["tl-vs"] = tl_vs;
        }
        return children.at("tl-vs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_children()
{
    if(children.find("connection") == children.end())
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
    }

    if(children.find("iccp-events") == children.end())
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
    }

    if(children.find("iccp-messages") == children.end())
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
    }

    if(children.find("invalid-tl-vs") == children.end())
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
    }

    if(children.find("tl-vs") == children.end())
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{
    yang_name = "connection"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_config_connect_errors.operation)
	|| is_set(iccp_count_connect_errors.operation)
	|| is_set(iccp_invalid_connects.operation)
	|| is_set(iccp_invalid_disconnects.operation)
	|| is_set(received_connects.operation)
	|| is_set(received_disconnects.operation)
	|| is_set(received_wrong_versions.operation)
	|| is_set(sent_connects.operation)
	|| is_set(sent_disconnects.operation)
	|| is_set(sent_wrong_versions.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connection' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.operation)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.operation)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.operation)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.operation)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.operation)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.operation)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.operation)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.operation)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.operation)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.operation)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{
    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(received_config.operation)
	|| is_set(received_config_sync_requests.operation)
	|| is_set(received_na_ks.operation)
	|| is_set(received_solicited_sync_data.operation)
	|| is_set(received_state.operation)
	|| is_set(received_state_sync_requests.operation)
	|| is_set(received_sync_requests.operation)
	|| is_set(received_unsolicited_sync_data.operation)
	|| is_set(sent_config.operation)
	|| is_set(sent_config_sync_requests.operation)
	|| is_set(sent_na_ks.operation)
	|| is_set(sent_solicited_sync_data.operation)
	|| is_set(sent_state.operation)
	|| is_set(sent_state_sync_requests.operation)
	|| is_set(sent_sync_requests.operation)
	|| is_set(sent_unsolicited_sync_data.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.operation)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.operation)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.operation)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.operation)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.operation)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.operation)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.operation)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.operation)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.operation)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.operation)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.operation)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.operation)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.operation)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.operation)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.operation)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.operation)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-config")
    {
        received_config = value;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
    }
    if(value_path == "received-state")
    {
        received_state = value;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{
    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(incorrect_length.operation)
	|| is_set(invalid_data.operation)
	|| is_set(invalid_type.operation)
	|| is_set(unknown_bundle.operation)
	|| is_set(unknown_port.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvalidTlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.operation)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.operation)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.operation)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.operation)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.operation)) leaf_name_data.push_back(unknown_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{
    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(received_messages.operation)
	|| is_set(sent_buffer_messages.operation)
	|| is_set(sent_messages.operation)
	|| is_set(transmission_errors.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpMessages' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.operation)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.operation)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.operation)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{
    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_clear.operation)
	|| is_set(configured_set.operation)
	|| is_set(member_status_down.operation)
	|| is_set(member_status_up.operation)
	|| is_set(pe_isolated.operation)
	|| is_set(pe_isolated_clear.operation)
	|| is_set(reachability_cleared.operation)
	|| is_set(reachability_set.operation)
	|| is_set(transport_down.operation)
	|| is_set(transport_unavailable.operation)
	|| is_set(transport_up.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpEvents' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.operation)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.operation)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.operation)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.operation)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.operation)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.operation)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.operation)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.operation)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.operation)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.operation)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.operation)) leaf_name_data.push_back(transport_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupAncestorNode()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;
    children["iccp-group-counters"] = iccp_group_counters;

    yang_name = "iccp-group-ancestor-node"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::~IccpGroupAncestorNode()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-ancestor-node";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupAncestorNode' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
        else
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters>();
            iccp_group_counters->parent = this;
            children["iccp-group-counters"] = iccp_group_counters;
        }
        return children.at("iccp-group-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_children()
{
    if(children.find("iccp-group-counters") == children.end())
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    children["connection"] = connection;

    iccp_events->parent = this;
    children["iccp-events"] = iccp_events;

    iccp_messages->parent = this;
    children["iccp-messages"] = iccp_messages;

    invalid_tl_vs->parent = this;
    children["invalid-tl-vs"] = invalid_tl_vs;

    tl_vs->parent = this;
    children["tl-vs"] = tl_vs;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-ancestor-node";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(time_since_cleared.operation)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connection")
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
        else
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection>();
            connection->parent = this;
            children["connection"] = connection;
        }
        return children.at("connection");
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
        else
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents>();
            iccp_events->parent = this;
            children["iccp-events"] = iccp_events;
        }
        return children.at("iccp-events");
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
        else
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages>();
            iccp_messages->parent = this;
            children["iccp-messages"] = iccp_messages;
        }
        return children.at("iccp-messages");
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        else
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs>();
            invalid_tl_vs->parent = this;
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        return children.at("invalid-tl-vs");
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
        else
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs>();
            tl_vs->parent = this;
            children["tl-vs"] = tl_vs;
        }
        return children.at("tl-vs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_children()
{
    if(children.find("connection") == children.end())
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
    }

    if(children.find("iccp-events") == children.end())
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
    }

    if(children.find("iccp-messages") == children.end())
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
    }

    if(children.find("invalid-tl-vs") == children.end())
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
    }

    if(children.find("tl-vs") == children.end())
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{
    yang_name = "connection"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_config_connect_errors.operation)
	|| is_set(iccp_count_connect_errors.operation)
	|| is_set(iccp_invalid_connects.operation)
	|| is_set(iccp_invalid_disconnects.operation)
	|| is_set(received_connects.operation)
	|| is_set(received_disconnects.operation)
	|| is_set(received_wrong_versions.operation)
	|| is_set(sent_connects.operation)
	|| is_set(sent_disconnects.operation)
	|| is_set(sent_wrong_versions.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connection' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.operation)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.operation)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.operation)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.operation)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.operation)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.operation)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.operation)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.operation)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.operation)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.operation)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{
    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(received_config.operation)
	|| is_set(received_config_sync_requests.operation)
	|| is_set(received_na_ks.operation)
	|| is_set(received_solicited_sync_data.operation)
	|| is_set(received_state.operation)
	|| is_set(received_state_sync_requests.operation)
	|| is_set(received_sync_requests.operation)
	|| is_set(received_unsolicited_sync_data.operation)
	|| is_set(sent_config.operation)
	|| is_set(sent_config_sync_requests.operation)
	|| is_set(sent_na_ks.operation)
	|| is_set(sent_solicited_sync_data.operation)
	|| is_set(sent_state.operation)
	|| is_set(sent_state_sync_requests.operation)
	|| is_set(sent_sync_requests.operation)
	|| is_set(sent_unsolicited_sync_data.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.operation)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.operation)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.operation)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.operation)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.operation)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.operation)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.operation)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.operation)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.operation)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.operation)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.operation)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.operation)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.operation)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.operation)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.operation)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.operation)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-config")
    {
        received_config = value;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
    }
    if(value_path == "received-state")
    {
        received_state = value;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{
    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(incorrect_length.operation)
	|| is_set(invalid_data.operation)
	|| is_set(invalid_type.operation)
	|| is_set(unknown_bundle.operation)
	|| is_set(unknown_port.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvalidTlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.operation)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.operation)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.operation)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.operation)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.operation)) leaf_name_data.push_back(unknown_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{
    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(received_messages.operation)
	|| is_set(sent_buffer_messages.operation)
	|| is_set(sent_messages.operation)
	|| is_set(transmission_errors.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpMessages' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.operation)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.operation)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.operation)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{
    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_clear.operation)
	|| is_set(configured_set.operation)
	|| is_set(member_status_down.operation)
	|| is_set(member_status_up.operation)
	|| is_set(pe_isolated.operation)
	|| is_set(pe_isolated_clear.operation)
	|| is_set(reachability_cleared.operation)
	|| is_set(reachability_set.operation)
	|| is_set(transport_down.operation)
	|| is_set(transport_unavailable.operation)
	|| is_set(transport_up.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpEvents' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.operation)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.operation)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.operation)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.operation)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.operation)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.operation)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.operation)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.operation)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.operation)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.operation)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.operation)) leaf_name_data.push_back(transport_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupItem()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;
    children["iccp-group-counters"] = iccp_group_counters;

    yang_name = "iccp-group-item"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::~IccpGroupItem()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
        else
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters>();
            iccp_group_counters->parent = this;
            children["iccp-group-counters"] = iccp_group_counters;
        }
        return children.at("iccp-group-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::get_children()
{
    if(children.find("iccp-group-counters") == children.end())
    {
        if(iccp_group_counters != nullptr)
        {
            children["iccp-group-counters"] = iccp_group_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    children["connection"] = connection;

    iccp_events->parent = this;
    children["iccp-events"] = iccp_events;

    iccp_messages->parent = this;
    children["iccp-messages"] = iccp_messages;

    invalid_tl_vs->parent = this;
    children["invalid-tl-vs"] = invalid_tl_vs;

    tl_vs->parent = this;
    children["tl-vs"] = tl_vs;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-item";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(time_since_cleared.operation)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connection")
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
        else
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection>();
            connection->parent = this;
            children["connection"] = connection;
        }
        return children.at("connection");
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
        else
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents>();
            iccp_events->parent = this;
            children["iccp-events"] = iccp_events;
        }
        return children.at("iccp-events");
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
        else
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages>();
            iccp_messages->parent = this;
            children["iccp-messages"] = iccp_messages;
        }
        return children.at("iccp-messages");
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        else
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs>();
            invalid_tl_vs->parent = this;
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
        return children.at("invalid-tl-vs");
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
        else
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs>();
            tl_vs->parent = this;
            children["tl-vs"] = tl_vs;
        }
        return children.at("tl-vs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::get_children()
{
    if(children.find("connection") == children.end())
    {
        if(connection != nullptr)
        {
            children["connection"] = connection;
        }
    }

    if(children.find("iccp-events") == children.end())
    {
        if(iccp_events != nullptr)
        {
            children["iccp-events"] = iccp_events;
        }
    }

    if(children.find("iccp-messages") == children.end())
    {
        if(iccp_messages != nullptr)
        {
            children["iccp-messages"] = iccp_messages;
        }
    }

    if(children.find("invalid-tl-vs") == children.end())
    {
        if(invalid_tl_vs != nullptr)
        {
            children["invalid-tl-vs"] = invalid_tl_vs;
        }
    }

    if(children.find("tl-vs") == children.end())
    {
        if(tl_vs != nullptr)
        {
            children["tl-vs"] = tl_vs;
        }
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{
    yang_name = "connection"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_config_connect_errors.operation)
	|| is_set(iccp_count_connect_errors.operation)
	|| is_set(iccp_invalid_connects.operation)
	|| is_set(iccp_invalid_disconnects.operation)
	|| is_set(received_connects.operation)
	|| is_set(received_disconnects.operation)
	|| is_set(received_wrong_versions.operation)
	|| is_set(sent_connects.operation)
	|| is_set(sent_disconnects.operation)
	|| is_set(sent_wrong_versions.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connection' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.operation)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.operation)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.operation)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.operation)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.operation)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.operation)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.operation)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.operation)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.operation)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.operation)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{
    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(received_config.operation)
	|| is_set(received_config_sync_requests.operation)
	|| is_set(received_na_ks.operation)
	|| is_set(received_solicited_sync_data.operation)
	|| is_set(received_state.operation)
	|| is_set(received_state_sync_requests.operation)
	|| is_set(received_sync_requests.operation)
	|| is_set(received_unsolicited_sync_data.operation)
	|| is_set(sent_config.operation)
	|| is_set(sent_config_sync_requests.operation)
	|| is_set(sent_na_ks.operation)
	|| is_set(sent_solicited_sync_data.operation)
	|| is_set(sent_state.operation)
	|| is_set(sent_state_sync_requests.operation)
	|| is_set(sent_sync_requests.operation)
	|| is_set(sent_unsolicited_sync_data.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.operation)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.operation)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.operation)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.operation)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.operation)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.operation)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.operation)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.operation)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.operation)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.operation)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.operation)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.operation)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.operation)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.operation)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.operation)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.operation)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-config")
    {
        received_config = value;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
    }
    if(value_path == "received-state")
    {
        received_state = value;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{
    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(operation)
	|| is_set(incorrect_length.operation)
	|| is_set(invalid_data.operation)
	|| is_set(invalid_type.operation)
	|| is_set(unknown_bundle.operation)
	|| is_set(unknown_port.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InvalidTlVs' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.operation)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.operation)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.operation)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.operation)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.operation)) leaf_name_data.push_back(unknown_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{
    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(received_messages.operation)
	|| is_set(sent_buffer_messages.operation)
	|| is_set(sent_messages.operation)
	|| is_set(transmission_errors.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpMessages' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.operation)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.operation)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.operation)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.operation)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
    }
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{
    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters";
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_clear.operation)
	|| is_set(configured_set.operation)
	|| is_set(member_status_down.operation)
	|| is_set(member_status_up.operation)
	|| is_set(pe_isolated.operation)
	|| is_set(pe_isolated_clear.operation)
	|| is_set(reachability_cleared.operation)
	|| is_set(reachability_set.operation)
	|| is_set(transport_down.operation)
	|| is_set(transport_unavailable.operation)
	|| is_set(transport_up.operation);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpEvents' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.operation)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.operation)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.operation)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.operation)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.operation)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.operation)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.operation)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.operation)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.operation)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.operation)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.operation)) leaf_name_data.push_back(transport_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::get_children()
{
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
    }
}

BundleInformation::SystemId::SystemId()
    :
    system_id_global(std::make_shared<BundleInformation::SystemId::SystemIdGlobal>())
	,system_id_iccp_groups(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups>())
{
    system_id_global->parent = this;
    children["system-id-global"] = system_id_global;

    system_id_iccp_groups->parent = this;
    children["system-id-iccp-groups"] = system_id_iccp_groups;

    yang_name = "system-id"; yang_parent_name = "bundle-information";
}

BundleInformation::SystemId::~SystemId()
{
}

bool BundleInformation::SystemId::has_data() const
{
    return (system_id_global !=  nullptr && system_id_global->has_data())
	|| (system_id_iccp_groups !=  nullptr && system_id_iccp_groups->has_data());
}

bool BundleInformation::SystemId::has_operation() const
{
    return is_set(operation)
	|| (system_id_global !=  nullptr && system_id_global->has_operation())
	|| (system_id_iccp_groups !=  nullptr && system_id_iccp_groups->has_operation());
}

std::string BundleInformation::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id-global")
    {
        if(system_id_global != nullptr)
        {
            children["system-id-global"] = system_id_global;
        }
        else
        {
            system_id_global = std::make_shared<BundleInformation::SystemId::SystemIdGlobal>();
            system_id_global->parent = this;
            children["system-id-global"] = system_id_global;
        }
        return children.at("system-id-global");
    }

    if(child_yang_name == "system-id-iccp-groups")
    {
        if(system_id_iccp_groups != nullptr)
        {
            children["system-id-iccp-groups"] = system_id_iccp_groups;
        }
        else
        {
            system_id_iccp_groups = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups>();
            system_id_iccp_groups->parent = this;
            children["system-id-iccp-groups"] = system_id_iccp_groups;
        }
        return children.at("system-id-iccp-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::get_children()
{
    if(children.find("system-id-global") == children.end())
    {
        if(system_id_global != nullptr)
        {
            children["system-id-global"] = system_id_global;
        }
    }

    if(children.find("system-id-iccp-groups") == children.end())
    {
        if(system_id_iccp_groups != nullptr)
        {
            children["system-id-iccp-groups"] = system_id_iccp_groups;
        }
    }

    return children;
}

void BundleInformation::SystemId::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobal()
    :
    system_id_global_item(std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem>())
{
    system_id_global_item->parent = this;
    children["system-id-global-item"] = system_id_global_item;

    yang_name = "system-id-global"; yang_parent_name = "system-id";
}

BundleInformation::SystemId::SystemIdGlobal::~SystemIdGlobal()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::has_data() const
{
    return (system_id_global_item !=  nullptr && system_id_global_item->has_data());
}

bool BundleInformation::SystemId::SystemIdGlobal::has_operation() const
{
    return is_set(operation)
	|| (system_id_global_item !=  nullptr && system_id_global_item->has_operation());
}

std::string BundleInformation::SystemId::SystemIdGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-global";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id-global-item")
    {
        if(system_id_global_item != nullptr)
        {
            children["system-id-global-item"] = system_id_global_item;
        }
        else
        {
            system_id_global_item = std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem>();
            system_id_global_item->parent = this;
            children["system-id-global-item"] = system_id_global_item;
        }
        return children.at("system-id-global-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdGlobal::get_children()
{
    if(children.find("system-id-global-item") == children.end())
    {
        if(system_id_global_item != nullptr)
        {
            children["system-id-global-item"] = system_id_global_item;
        }
    }

    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemIdGlobalItem()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    system_mac_address{YType::str, "system-mac-address"},
    system_priority{YType::uint16, "system-priority"}
    	,
    system_id(std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_>())
{
    system_id->parent = this;
    children["system-id"] = system_id;

    yang_name = "system-id-global-item"; yang_parent_name = "system-id-global";
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::~SystemIdGlobalItem()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::has_data() const
{
    return iccp_group_id.is_set
	|| system_mac_address.is_set
	|| system_priority.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(system_mac_address.operation)
	|| is_set(system_priority.operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-global-item";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (system_mac_address.is_set || is_set(system_mac_address.operation)) leaf_name_data.push_back(system_mac_address.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id")
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
        else
        {
            system_id = std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_>();
            system_id->parent = this;
            children["system-id"] = system_id;
        }
        return children.at("system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::get_children()
{
    if(children.find("system-id") == children.end())
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
    }

    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemId_()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system-id"; yang_parent_name = "system-id-global-item";
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::~SystemId_()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-global/system-id-global-item/" << get_segment_path();
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

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system-id";
}

BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-global/system-id-global-item/system-id/" << get_segment_path();
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

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroups()
{
    yang_name = "system-id-iccp-groups"; yang_parent_name = "system-id";
}

BundleInformation::SystemId::SystemIdIccpGroups::~SystemIdIccpGroups()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::has_data() const
{
    for (std::size_t index=0; index<system_id_iccp_group.size(); index++)
    {
        if(system_id_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::SystemId::SystemIdIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<system_id_iccp_group.size(); index++)
    {
        if(system_id_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-iccp-groups";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdIccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id-iccp-group")
    {
        for(auto const & c : system_id_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup>();
        c->parent = this;
        system_id_iccp_group.push_back(std::move(c));
        children[segment_path] = system_id_iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdIccpGroups::get_children()
{
    for (auto const & c : system_id_iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    system_id_iccp_group_item(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem>())
{
    system_id_iccp_group_item->parent = this;
    children["system-id-iccp-group-item"] = system_id_iccp_group_item;

    yang_name = "system-id-iccp-group"; yang_parent_name = "system-id-iccp-groups";
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::~SystemIdIccpGroup()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (system_id_iccp_group_item !=  nullptr && system_id_iccp_group_item->has_data());
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (system_id_iccp_group_item !=  nullptr && system_id_iccp_group_item->has_operation());
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/system-id/system-id-iccp-groups/" << get_segment_path();
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

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id-iccp-group-item")
    {
        if(system_id_iccp_group_item != nullptr)
        {
            children["system-id-iccp-group-item"] = system_id_iccp_group_item;
        }
        else
        {
            system_id_iccp_group_item = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem>();
            system_id_iccp_group_item->parent = this;
            children["system-id-iccp-group-item"] = system_id_iccp_group_item;
        }
        return children.at("system-id-iccp-group-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::get_children()
{
    if(children.find("system-id-iccp-group-item") == children.end())
    {
        if(system_id_iccp_group_item != nullptr)
        {
            children["system-id-iccp-group-item"] = system_id_iccp_group_item;
        }
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemIdIccpGroupItem()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    system_mac_address{YType::str, "system-mac-address"},
    system_priority{YType::uint16, "system-priority"}
    	,
    system_id(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_>())
{
    system_id->parent = this;
    children["system-id"] = system_id;

    yang_name = "system-id-iccp-group-item"; yang_parent_name = "system-id-iccp-group";
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::~SystemIdIccpGroupItem()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::has_data() const
{
    return iccp_group_id.is_set
	|| system_mac_address.is_set
	|| system_priority.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(system_mac_address.operation)
	|| is_set(system_priority.operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id-iccp-group-item";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemIdIccpGroupItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (system_mac_address.is_set || is_set(system_mac_address.operation)) leaf_name_data.push_back(system_mac_address.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id")
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
        else
        {
            system_id = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_>();
            system_id->parent = this;
            children["system-id"] = system_id;
        }
        return children.at("system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::get_children()
{
    if(children.find("system-id") == children.end())
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemId_()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system-id"; yang_parent_name = "system-id-iccp-group-item";
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::~SystemId_()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SystemId_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system-id";
}

BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::get_children()
{
    return children;
}

void BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

BundleInformation::MlacpMemberCounters::MlacpMemberCounters()
    :
    bundles(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles>())
	,iccp_groups(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups>())
	,members(std::make_shared<BundleInformation::MlacpMemberCounters::Members>())
	,nodes(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes>())
{
    bundles->parent = this;
    children["bundles"] = bundles;

    iccp_groups->parent = this;
    children["iccp-groups"] = iccp_groups;

    members->parent = this;
    children["members"] = members;

    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "mlacp-member-counters"; yang_parent_name = "bundle-information";
}

BundleInformation::MlacpMemberCounters::~MlacpMemberCounters()
{
}

bool BundleInformation::MlacpMemberCounters::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data())
	|| (iccp_groups !=  nullptr && iccp_groups->has_data())
	|| (members !=  nullptr && members->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool BundleInformation::MlacpMemberCounters::has_operation() const
{
    return is_set(operation)
	|| (bundles !=  nullptr && bundles->has_operation())
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation())
	|| (members !=  nullptr && members->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundles")
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
        else
        {
            bundles = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles>();
            bundles->parent = this;
            children["bundles"] = bundles;
        }
        return children.at("bundles");
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
        else
        {
            iccp_groups = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups>();
            iccp_groups->parent = this;
            children["iccp-groups"] = iccp_groups;
        }
        return children.at("iccp-groups");
    }

    if(child_yang_name == "members")
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
        else
        {
            members = std::make_shared<BundleInformation::MlacpMemberCounters::Members>();
            members->parent = this;
            children["members"] = members;
        }
        return children.at("members");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::get_children()
{
    if(children.find("bundles") == children.end())
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
    }

    if(children.find("iccp-groups") == children.end())
    {
        if(iccp_groups != nullptr)
        {
            children["iccp-groups"] = iccp_groups;
        }
    }

    if(children.find("members") == children.end())
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroups()
{
    yang_name = "iccp-groups"; yang_parent_name = "mlacp-member-counters";
}

BundleInformation::MlacpMemberCounters::IccpGroups::~IccpGroups()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(std::move(c));
        children[segment_path] = iccp_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::get_children()
{
    for (auto const & c : iccp_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    iccp_group_item(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem>())
{
    iccp_group_item->parent = this;
    children["iccp-group-item"] = iccp_group_item;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[iccp-group='" <<iccp_group <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/iccp-groups/" << get_segment_path();
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

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-group-item")
    {
        if(iccp_group_item != nullptr)
        {
            children["iccp-group-item"] = iccp_group_item;
        }
        else
        {
            iccp_group_item = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem>();
            iccp_group_item->parent = this;
            children["iccp-group-item"] = iccp_group_item;
        }
        return children.at("iccp-group-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::get_children()
{
    if(children.find("iccp-group-item") == children.end())
    {
        if(iccp_group_item != nullptr)
        {
            children["iccp-group-item"] = iccp_group_item;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupItem()
{
    yang_name = "iccp-group-item"; yang_parent_name = "iccp-group";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::~IccpGroupItem()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpGroupItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items>();
        c->parent = this;
        items.push_back(std::move(c));
        children[segment_path] = items.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::get_children()
{
    for (auto const & c : items)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::Items()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData>())
{
    bundle_data->parent = this;
    children["bundle-data"] = bundle_data;

    yang_name = "items"; yang_parent_name = "iccp-group-item";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::~Items()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
        else
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData>();
            bundle_data->parent = this;
            children["bundle-data"] = bundle_data;
        }
        return children.at("bundle-data");
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::get_children()
{
    if(children.find("bundle-data") == children.end())
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
    }

    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;
    children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;

    yang_name = "bundle-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(iccp_group_id.operation)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
            mlacp_sync_requests_on_all_local_ports->parent = this;
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        return children.at("mlacp-sync-requests-on-all-local-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::get_children()
{
    if(children.find("mlacp-sync-requests-on-all-local-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;

    node_data->parent = this;
    children["node-data"] = node_data;

    yang_name = "node-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
            mlacp_sync_requests_on_all_foreign_ports->parent = this;
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-ports");
    }

    if(child_yang_name == "node-data")
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
        else
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_>();
            node_data->parent = this;
            children["node-data"] = node_data;
        }
        return children.at("node-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::get_children()
{
    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-foreign-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
    }

    if(children.find("node-data") == children.end())
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{
    yang_name = "node-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(node_id.operation);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Members()
{
    yang_name = "members"; yang_parent_name = "mlacp-member-counters";
}

BundleInformation::MlacpMemberCounters::Members::~Members()
{
}

bool BundleInformation::MlacpMemberCounters::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpMemberCounters::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member>();
        c->parent = this;
        member.push_back(std::move(c));
        children[segment_path] = member.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::get_children()
{
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"}
    	,
    member_item(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem>())
{
    member_item->parent = this;
    children["member-item"] = member_item;

    yang_name = "member"; yang_parent_name = "members";
}

BundleInformation::MlacpMemberCounters::Members::Member::~Member()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::has_data() const
{
    return member_interface.is_set
	|| (member_item !=  nullptr && member_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (member_item !=  nullptr && member_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/members/" << get_segment_path();
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

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-item")
    {
        if(member_item != nullptr)
        {
            children["member-item"] = member_item;
        }
        else
        {
            member_item = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem>();
            member_item->parent = this;
            children["member-item"] = member_item;
        }
        return children.at("member-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::get_children()
{
    if(children.find("member-item") == children.end())
    {
        if(member_item != nullptr)
        {
            children["member-item"] = member_item;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::MemberItem()
{
    yang_name = "member-item"; yang_parent_name = "member";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::~MemberItem()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items>();
        c->parent = this;
        items.push_back(std::move(c));
        children[segment_path] = items.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::get_children()
{
    for (auto const & c : items)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::Items()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData>())
{
    bundle_data->parent = this;
    children["bundle-data"] = bundle_data;

    yang_name = "items"; yang_parent_name = "member-item";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::~Items()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
        else
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData>();
            bundle_data->parent = this;
            children["bundle-data"] = bundle_data;
        }
        return children.at("bundle-data");
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::get_children()
{
    if(children.find("bundle-data") == children.end())
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
    }

    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;
    children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;

    yang_name = "bundle-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(iccp_group_id.operation)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
            mlacp_sync_requests_on_all_local_ports->parent = this;
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        return children.at("mlacp-sync-requests-on-all-local-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::get_children()
{
    if(children.find("mlacp-sync-requests-on-all-local-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;

    node_data->parent = this;
    children["node-data"] = node_data;

    yang_name = "node-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
            mlacp_sync_requests_on_all_foreign_ports->parent = this;
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-ports");
    }

    if(child_yang_name == "node-data")
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
        else
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_>();
            node_data->parent = this;
            children["node-data"] = node_data;
        }
        return children.at("node-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::get_children()
{
    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-foreign-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
    }

    if(children.find("node-data") == children.end())
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{
    yang_name = "node-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(node_id.operation);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundles()
{
    yang_name = "bundles"; yang_parent_name = "mlacp-member-counters";
}

BundleInformation::MlacpMemberCounters::Bundles::~Bundles()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(std::move(c));
        children[segment_path] = bundle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::get_children()
{
    for (auto const & c : bundle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_item(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem>())
{
    bundle_item->parent = this;
    children["bundle-item"] = bundle_item;

    yang_name = "bundle"; yang_parent_name = "bundles";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::~Bundle()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_item !=  nullptr && bundle_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (bundle_item !=  nullptr && bundle_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/bundles/" << get_segment_path();
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

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-item")
    {
        if(bundle_item != nullptr)
        {
            children["bundle-item"] = bundle_item;
        }
        else
        {
            bundle_item = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem>();
            bundle_item->parent = this;
            children["bundle-item"] = bundle_item;
        }
        return children.at("bundle-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::get_children()
{
    if(children.find("bundle-item") == children.end())
    {
        if(bundle_item != nullptr)
        {
            children["bundle-item"] = bundle_item;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleItem()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData>())
{
    bundle_data->parent = this;
    children["bundle-data"] = bundle_data;

    yang_name = "bundle-item"; yang_parent_name = "bundle";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::~BundleItem()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
        else
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData>();
            bundle_data->parent = this;
            children["bundle-data"] = bundle_data;
        }
        return children.at("bundle-data");
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::get_children()
{
    if(children.find("bundle-data") == children.end())
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
    }

    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;
    children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;

    yang_name = "bundle-data"; yang_parent_name = "bundle-item";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(iccp_group_id.operation)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
            mlacp_sync_requests_on_all_local_ports->parent = this;
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        return children.at("mlacp-sync-requests-on-all-local-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::get_children()
{
    if(children.find("mlacp-sync-requests-on-all-local-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;

    node_data->parent = this;
    children["node-data"] = node_data;

    yang_name = "node-data"; yang_parent_name = "bundle-item";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
            mlacp_sync_requests_on_all_foreign_ports->parent = this;
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-ports");
    }

    if(child_yang_name == "node-data")
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
        else
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_>();
            node_data->parent = this;
            children["node-data"] = node_data;
        }
        return children.at("node-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::get_children()
{
    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-foreign-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
    }

    if(children.find("node-data") == children.end())
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{
    yang_name = "node-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(node_id.operation);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "bundle-item";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "mlacp-member-counters";
}

BundleInformation::MlacpMemberCounters::Nodes::~Nodes()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::get_children()
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

void BundleInformation::MlacpMemberCounters::Nodes::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    node_item(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem>())
{
    node_item->parent = this;
    children["node-item"] = node_item;

    yang_name = "node"; yang_parent_name = "nodes";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::~Node()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::has_data() const
{
    return node.is_set
	|| (node_item !=  nullptr && node_item->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (node_item !=  nullptr && node_item->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-member-counters/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node-item")
    {
        if(node_item != nullptr)
        {
            children["node-item"] = node_item;
        }
        else
        {
            node_item = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem>();
            node_item->parent = this;
            children["node-item"] = node_item;
        }
        return children.at("node-item");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::get_children()
{
    if(children.find("node-item") == children.end())
    {
        if(node_item != nullptr)
        {
            children["node-item"] = node_item;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::NodeItem()
{
    yang_name = "node-item"; yang_parent_name = "node";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::~NodeItem()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::has_data() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::has_operation() const
{
    for (std::size_t index=0; index<items.size(); index++)
    {
        if(items[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-item";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeItem' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "items")
    {
        for(auto const & c : items)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items>();
        c->parent = this;
        items.push_back(std::move(c));
        children[segment_path] = items.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::get_children()
{
    for (auto const & c : items)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::Items()
    :
    bundle_data(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData>())
{
    bundle_data->parent = this;
    children["bundle-data"] = bundle_data;

    yang_name = "items"; yang_parent_name = "node-item";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::~Items()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (bundle_data !=  nullptr && bundle_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bundle_data !=  nullptr && bundle_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "items";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
        else
        {
            bundle_data = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData>();
            bundle_data->parent = this;
            children["bundle-data"] = bundle_data;
        }
        return children.at("bundle-data");
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData>();
        c->parent = this;
        node_data.push_back(std::move(c));
        children[segment_path] = node_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::get_children()
{
    if(children.find("bundle-data") == children.end())
    {
        if(bundle_data != nullptr)
        {
            children["bundle-data"] = bundle_data;
        }
    }

    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : node_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"},
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_ports->parent = this;
    children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;

    yang_name = "bundle-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::has_data() const
{
    return bundle_name.is_set
	|| iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(iccp_group_id.operation)
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_entity_path(Entity* ancestor) const
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

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts>();
            mlacp_sync_requests_on_all_local_ports->parent = this;
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
        return children.at("mlacp-sync-requests-on-all-local-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::get_children()
{
    if(children.find("mlacp-sync-requests-on-all-local-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_local_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "bundle-data";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllLocalPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData()
    :
    mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>())
	,node_data(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_>())
{
    mlacp_sync_requests_on_all_foreign_ports->parent = this;
    children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;

    node_data->parent = this;
    children["node-data"] = node_data;

    yang_name = "node-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::has_data() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_data())
            return true;
    }
    return (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data())
	|| (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::has_operation() const
{
    for (std::size_t index=0; index<member_data.size(); index++)
    {
        if(member_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation())
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-data")
    {
        for(auto const & c : member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData>();
        c->parent = this;
        member_data.push_back(std::move(c));
        children[segment_path] = member_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        else
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts>();
            mlacp_sync_requests_on_all_foreign_ports->parent = this;
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
        return children.at("mlacp-sync-requests-on-all-foreign-ports");
    }

    if(child_yang_name == "node-data")
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
        else
        {
            node_data = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_>();
            node_data->parent = this;
            children["node-data"] = node_data;
        }
        return children.at("node-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::get_children()
{
    for (auto const & c : member_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mlacp-sync-requests-on-all-foreign-ports") == children.end())
    {
        if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
        {
            children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
        }
    }

    if(children.find("node-data") == children.end())
    {
        if(node_data != nullptr)
        {
            children["node-data"] = node_data;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::set_value(const std::string & value_path, std::string value)
{
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::NodeData_()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    node_id{YType::uint32, "node-id"}
{
    yang_name = "node-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::has_data() const
{
    return iccp_group_id.is_set
	|| node_id.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(node_id.operation);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeData_' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpSyncRequestsOnAllForeignPorts' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "node-data";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MemberData()
    :
    port_name{YType::str, "port-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;
    children["mlacp-tlv-counters"] = mlacp_tlv_counters;

    yang_name = "member-data"; yang_parent_name = "items";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::~MemberData()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::has_data() const
{
    return port_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::has_operation() const
{
    return is_set(operation)
	|| is_set(port_name.operation)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-data";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_name.is_set || is_set(port_name.operation)) leaf_name_data.push_back(port_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        else
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters>();
            mlacp_tlv_counters->parent = this;
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
        return children.at("mlacp-tlv-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::get_children()
{
    if(children.find("mlacp-tlv-counters") == children.end())
    {
        if(mlacp_tlv_counters != nullptr)
        {
            children["mlacp-tlv-counters"] = mlacp_tlv_counters;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-name")
    {
        port_name = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;
    children["received-sync-requests"] = received_sync_requests;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "member-data";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_time_cleared.operation)
	|| is_set(last_unexpected_event.operation)
	|| is_set(received_nak_tl_vs.operation)
	|| is_set(received_priority_tl_vs.operation)
	|| is_set(sent_config_tl_vs.operation)
	|| is_set(sent_priority_tl_vs.operation)
	|| is_set(sent_state_tl_vs.operation)
	|| is_set(time_since_cleared.operation)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MlacpTlvCounters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.operation)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.operation)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.operation)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.operation)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.operation)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.operation)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.operation)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
        else
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests>();
            received_sync_requests->parent = this;
            children["received-sync-requests"] = received_sync_requests;
        }
        return children.at("received-sync-requests");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::get_children()
{
    if(children.find("received-sync-requests") == children.end())
    {
        if(received_sync_requests != nullptr)
        {
            children["received-sync-requests"] = received_sync_requests;
        }
    }

    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{
    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters";
}

BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(operation)
	|| is_set(all_syncs.operation)
	|| is_set(config_syncs.operation)
	|| is_set(state_syncs.operation);
}

std::string BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";

    return path_buffer.str();

}

EntityPath BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedSyncRequests' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.operation)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.operation)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.operation)) leaf_name_data.push_back(state_syncs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::get_children()
{
    return children;
}

void BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
    }
}

LacpData::LacpData()
    :
    global(std::make_shared<LacpData::Global>())
{
    global->parent = this;
    children["global"] = global;

    yang_name = "lacp-data"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper";
}

LacpData::~LacpData()
{
}

bool LacpData::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool LacpData::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string LacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data";

    return path_buffer.str();

}

EntityPath LacpData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<LacpData::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpData::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void LacpData::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LacpData::clone_ptr() const
{
    return std::make_shared<LacpData>();
}

std::string LacpData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LacpData::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LacpData::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

LacpData::Global::Global()
    :
    system_id(std::make_shared<LacpData::Global::SystemId>())
{
    system_id->parent = this;
    children["system-id"] = system_id;

    yang_name = "global"; yang_parent_name = "lacp-data";
}

LacpData::Global::~Global()
{
}

bool LacpData::Global::has_data() const
{
    return (system_id !=  nullptr && system_id->has_data());
}

bool LacpData::Global::has_operation() const
{
    return is_set(operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string LacpData::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath LacpData::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpData::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id")
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
        else
        {
            system_id = std::make_shared<LacpData::Global::SystemId>();
            system_id->parent = this;
            children["system-id"] = system_id;
        }
        return children.at("system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpData::Global::get_children()
{
    if(children.find("system-id") == children.end())
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
    }

    return children;
}

void LacpData::Global::set_value(const std::string & value_path, std::string value)
{
}

LacpData::Global::SystemId::SystemId()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"},
    system_mac_address{YType::str, "system-mac-address"},
    system_priority{YType::uint16, "system-priority"}
    	,
    system_id(std::make_shared<LacpData::Global::SystemId::SystemId_>())
{
    system_id->parent = this;
    children["system-id"] = system_id;

    yang_name = "system-id"; yang_parent_name = "global";
}

LacpData::Global::SystemId::~SystemId()
{
}

bool LacpData::Global::SystemId::has_data() const
{
    return iccp_group_id.is_set
	|| system_mac_address.is_set
	|| system_priority.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool LacpData::Global::SystemId::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group_id.operation)
	|| is_set(system_mac_address.operation)
	|| is_set(system_priority.operation)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string LacpData::Global::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath LacpData::Global::SystemId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.operation)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (system_mac_address.is_set || is_set(system_mac_address.operation)) leaf_name_data.push_back(system_mac_address.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpData::Global::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-id")
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
        else
        {
            system_id = std::make_shared<LacpData::Global::SystemId::SystemId_>();
            system_id->parent = this;
            children["system-id"] = system_id;
        }
        return children.at("system-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpData::Global::SystemId::get_children()
{
    if(children.find("system-id") == children.end())
    {
        if(system_id != nullptr)
        {
            children["system-id"] = system_id;
        }
    }

    return children;
}

void LacpData::Global::SystemId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
    }
    if(value_path == "system-mac-address")
    {
        system_mac_address = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

LacpData::Global::SystemId::SystemId_::SystemId_()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<LacpData::Global::SystemId::SystemId_::SystemMacAddr>())
{
    system_mac_addr->parent = this;
    children["system-mac-addr"] = system_mac_addr;

    yang_name = "system-id"; yang_parent_name = "system-id";
}

LacpData::Global::SystemId::SystemId_::~SystemId_()
{
}

bool LacpData::Global::SystemId::SystemId_::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool LacpData::Global::SystemId::SystemId_::has_operation() const
{
    return is_set(operation)
	|| is_set(system_prio.operation)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string LacpData::Global::SystemId::SystemId_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";

    return path_buffer.str();

}

EntityPath LacpData::Global::SystemId::SystemId_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/global/system-id/" << get_segment_path();
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

std::shared_ptr<Entity> LacpData::Global::SystemId::SystemId_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
        else
        {
            system_mac_addr = std::make_shared<LacpData::Global::SystemId::SystemId_::SystemMacAddr>();
            system_mac_addr->parent = this;
            children["system-mac-addr"] = system_mac_addr;
        }
        return children.at("system-mac-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpData::Global::SystemId::SystemId_::get_children()
{
    if(children.find("system-mac-addr") == children.end())
    {
        if(system_mac_addr != nullptr)
        {
            children["system-mac-addr"] = system_mac_addr;
        }
    }

    return children;
}

void LacpData::Global::SystemId::SystemId_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
    }
}

LacpData::Global::SystemId::SystemId_::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{
    yang_name = "system-mac-addr"; yang_parent_name = "system-id";
}

LacpData::Global::SystemId::SystemId_::SystemMacAddr::~SystemMacAddr()
{
}

bool LacpData::Global::SystemId::SystemId_::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool LacpData::Global::SystemId::SystemId_::SystemMacAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(macaddr.operation);
}

std::string LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";

    return path_buffer.str();

}

EntityPath LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-data/global/system-id/system-id/" << get_segment_path();
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

std::shared_ptr<Entity> LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & LacpData::Global::SystemId::SystemId_::SystemMacAddr::get_children()
{
    return children;
}

void LacpData::Global::SystemId::SystemId_::SystemMacAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
    }
}

Bundles::Bundles()
    :
    bundles(std::make_shared<Bundles::Bundles_>())
{
    bundles->parent = this;
    children["bundles"] = bundles;

    yang_name = "bundles"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper";
}

Bundles::~Bundles()
{
}

bool Bundles::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data());
}

bool Bundles::has_operation() const
{
    return is_set(operation)
	|| (bundles !=  nullptr && bundles->has_operation());
}

std::string Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles";

    return path_buffer.str();

}

EntityPath Bundles::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundles")
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
        else
        {
            bundles = std::make_shared<Bundles::Bundles_>();
            bundles->parent = this;
            children["bundles"] = bundles;
        }
        return children.at("bundles");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::get_children()
{
    if(children.find("bundles") == children.end())
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
    }

    return children;
}

void Bundles::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Bundles::clone_ptr() const
{
    return std::make_shared<Bundles>();
}

std::string Bundles::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Bundles::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Bundles::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Bundles::Bundles_::Bundles_()
{
    yang_name = "bundles"; yang_parent_name = "bundles";
}

Bundles::Bundles_::~Bundles_()
{
}

bool Bundles::Bundles_::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool Bundles::Bundles_::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bundles::Bundles_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bundles::Bundles_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bundles::Bundles_::Bundle>();
        c->parent = this;
        bundle.push_back(std::move(c));
        children[segment_path] = bundle.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::get_children()
{
    for (auto const & c : bundle)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bundles::Bundles_::set_value(const std::string & value_path, std::string value)
{
}

Bundles::Bundles_::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    data(std::make_shared<Bundles::Bundles_::Bundle::Data>())
	,members(std::make_shared<Bundles::Bundles_::Bundle::Members>())
{
    data->parent = this;
    children["data"] = data;

    members->parent = this;
    children["members"] = members;

    yang_name = "bundle"; yang_parent_name = "bundles";
}

Bundles::Bundles_::Bundle::~Bundle()
{
}

bool Bundles::Bundles_::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (data !=  nullptr && data->has_data())
	|| (members !=  nullptr && members->has_data());
}

bool Bundles::Bundles_::Bundle::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_interface.operation)
	|| (data !=  nullptr && data->has_operation())
	|| (members !=  nullptr && members->has_operation());
}

std::string Bundles::Bundles_::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles/bundles/" << get_segment_path();
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

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<Bundles::Bundles_::Bundle::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    if(child_yang_name == "members")
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
        else
        {
            members = std::make_shared<Bundles::Bundles_::Bundle::Members>();
            members->parent = this;
            children["members"] = members;
        }
        return children.at("members");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    if(children.find("members") == children.end())
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
    }

    return children;
}

void Bundles::Bundles_::Bundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
    }
}

Bundles::Bundles_::Bundle::Data::Data()
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
    mac_address(std::make_shared<Bundles::Bundles_::Bundle::Data::MacAddress>())
{
    mac_address->parent = this;
    children["mac-address"] = mac_address;

    yang_name = "data"; yang_parent_name = "bundle";
}

Bundles::Bundles_::Bundle::Data::~Data()
{
}

bool Bundles::Bundles_::Bundle::Data::has_data() const
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

bool Bundles::Bundles_::Bundle::Data::has_operation() const
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

std::string Bundles::Bundles_::Bundle::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Data::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-config")
    {
        for(auto const & c : bfd_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bundles::Bundles_::Bundle::Data::BfdConfig>();
        c->parent = this;
        bfd_config.push_back(std::move(c));
        children[segment_path] = bfd_config.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
        else
        {
            mac_address = std::make_shared<Bundles::Bundles_::Bundle::Data::MacAddress>();
            mac_address->parent = this;
            children["mac-address"] = mac_address;
        }
        return children.at("mac-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Data::get_children()
{
    for (auto const & c : bfd_config)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mac-address") == children.end())
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
    }

    return children;
}

void Bundles::Bundles_::Bundle::Data::set_value(const std::string & value_path, std::string value)
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

Bundles::Bundles_::Bundle::Data::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "data";
}

Bundles::Bundles_::Bundle::Data::MacAddress::~MacAddress()
{
}

bool Bundles::Bundles_::Bundle::Data::MacAddress::has_data() const
{
    return address.is_set;
}

bool Bundles::Bundles_::Bundle::Data::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Bundles::Bundles_::Bundle::Data::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Data::MacAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Data::MacAddress::get_children()
{
    return children;
}

void Bundles::Bundles_::Bundle::Data::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Bundles::Bundles_::Bundle::Data::BfdConfig::BfdConfig()
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
    destination_address(std::make_shared<Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress>())
{
    destination_address->parent = this;
    children["destination-address"] = destination_address;

    yang_name = "bfd-config"; yang_parent_name = "data";
}

Bundles::Bundles_::Bundle::Data::BfdConfig::~BfdConfig()
{
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::has_data() const
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

bool Bundles::Bundles_::Bundle::Data::BfdConfig::has_operation() const
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

std::string Bundles::Bundles_::Bundle::Data::BfdConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-config";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Data::BfdConfig::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::BfdConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address != nullptr)
        {
            children["destination-address"] = destination_address;
        }
        else
        {
            destination_address = std::make_shared<Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress>();
            destination_address->parent = this;
            children["destination-address"] = destination_address;
        }
        return children.at("destination-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Data::BfdConfig::get_children()
{
    if(children.find("destination-address") == children.end())
    {
        if(destination_address != nullptr)
        {
            children["destination-address"] = destination_address;
        }
    }

    return children;
}

void Bundles::Bundles_::Bundle::Data::BfdConfig::set_value(const std::string & value_path, std::string value)
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

Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::DestinationAddress()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "destination-address"; yang_parent_name = "bfd-config";
}

Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::~DestinationAddress()
{
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::get_children()
{
    return children;
}

void Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress::set_value(const std::string & value_path, std::string value)
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

Bundles::Bundles_::Bundle::Members::Members()
{
    yang_name = "members"; yang_parent_name = "bundle";
}

Bundles::Bundles_::Bundle::Members::~Members()
{
}

bool Bundles::Bundles_::Bundle::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool Bundles::Bundles_::Bundle::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bundles::Bundles_::Bundle::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Members' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bundles::Bundles_::Bundle::Members::Member>();
        c->parent = this;
        member.push_back(std::move(c));
        children[segment_path] = member.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Members::get_children()
{
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bundles::Bundles_::Bundle::Members::set_value(const std::string & value_path, std::string value)
{
}

Bundles::Bundles_::Bundle::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"},
    bandwidth{YType::uint32, "bandwidth"},
    iccp_node{YType::uint32, "iccp-node"},
    interface_name{YType::str, "interface-name"},
    link_order_number{YType::uint16, "link-order-number"},
    member_name{YType::str, "member-name"},
    member_type{YType::enumeration, "member-type"},
    port_number{YType::uint16, "port-number"},
    port_priority{YType::uint16, "port-priority"},
    underlying_link_id{YType::uint16, "underlying-link-id"}
    	,
    counters(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::Counters>())
	,link_data(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::LinkData>())
	,mac_address(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MacAddress>())
	,member_mux_data(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData>())
{
    counters->parent = this;
    children["counters"] = counters;

    link_data->parent = this;
    children["link-data"] = link_data;

    mac_address->parent = this;
    children["mac-address"] = mac_address;

    member_mux_data->parent = this;
    children["member-mux-data"] = member_mux_data;

    yang_name = "member"; yang_parent_name = "members";
}

Bundles::Bundles_::Bundle::Members::Member::~Member()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::has_data() const
{
    return member_interface.is_set
	|| bandwidth.is_set
	|| iccp_node.is_set
	|| interface_name.is_set
	|| link_order_number.is_set
	|| member_name.is_set
	|| member_type.is_set
	|| port_number.is_set
	|| port_priority.is_set
	|| underlying_link_id.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (member_mux_data !=  nullptr && member_mux_data->has_data());
}

bool Bundles::Bundles_::Bundle::Members::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| is_set(bandwidth.operation)
	|| is_set(iccp_node.operation)
	|| is_set(interface_name.operation)
	|| is_set(link_order_number.operation)
	|| is_set(member_name.operation)
	|| is_set(member_type.operation)
	|| is_set(port_number.operation)
	|| is_set(port_priority.operation)
	|| is_set(underlying_link_id.operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (member_mux_data !=  nullptr && member_mux_data->has_operation());
}

std::string Bundles::Bundles_::Bundle::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Members::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_interface.is_set || is_set(member_interface.operation)) leaf_name_data.push_back(member_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (iccp_node.is_set || is_set(iccp_node.operation)) leaf_name_data.push_back(iccp_node.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_order_number.is_set || is_set(link_order_number.operation)) leaf_name_data.push_back(link_order_number.get_name_leafdata());
    if (member_name.is_set || is_set(member_name.operation)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (member_type.is_set || is_set(member_type.operation)) leaf_name_data.push_back(member_type.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.operation)) leaf_name_data.push_back(port_number.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (underlying_link_id.is_set || is_set(underlying_link_id.operation)) leaf_name_data.push_back(underlying_link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    if(child_yang_name == "link-data")
    {
        if(link_data != nullptr)
        {
            children["link-data"] = link_data;
        }
        else
        {
            link_data = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::LinkData>();
            link_data->parent = this;
            children["link-data"] = link_data;
        }
        return children.at("link-data");
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
        else
        {
            mac_address = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MacAddress>();
            mac_address->parent = this;
            children["mac-address"] = mac_address;
        }
        return children.at("mac-address");
    }

    if(child_yang_name == "member-mux-data")
    {
        if(member_mux_data != nullptr)
        {
            children["member-mux-data"] = member_mux_data;
        }
        else
        {
            member_mux_data = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData>();
            member_mux_data->parent = this;
            children["member-mux-data"] = member_mux_data;
        }
        return children.at("member-mux-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Members::Member::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    if(children.find("link-data") == children.end())
    {
        if(link_data != nullptr)
        {
            children["link-data"] = link_data;
        }
    }

    if(children.find("mac-address") == children.end())
    {
        if(mac_address != nullptr)
        {
            children["mac-address"] = mac_address;
        }
    }

    if(children.find("member-mux-data") == children.end())
    {
        if(member_mux_data != nullptr)
        {
            children["member-mux-data"] = member_mux_data;
        }
    }

    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "iccp-node")
    {
        iccp_node = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-order-number")
    {
        link_order_number = value;
    }
    if(value_path == "member-name")
    {
        member_name = value;
    }
    if(value_path == "member-type")
    {
        member_type = value;
    }
    if(value_path == "port-number")
    {
        port_number = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "underlying-link-id")
    {
        underlying_link_id = value;
    }
}

Bundles::Bundles_::Bundle::Members::Member::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"}
{
    yang_name = "counters"; yang_parent_name = "member";
}

Bundles::Bundles_::Bundle::Members::Member::Counters::~Counters()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(defaulted.operation)
	|| is_set(excess_lacpd_us_received.operation)
	|| is_set(excess_marker_packets_received.operation)
	|| is_set(expired.operation)
	|| is_set(illegal_packets_received.operation)
	|| is_set(lacpd_us_received.operation)
	|| is_set(lacpd_us_transmitted.operation)
	|| is_set(last_cleared_nsec.operation)
	|| is_set(last_cleared_sec.operation)
	|| is_set(marker_packets_received.operation)
	|| is_set(marker_responses_transmitted.operation);
}

std::string Bundles::Bundles_::Bundle::Members::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Members::Member::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.operation)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.operation)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.operation)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.operation)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.operation)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.operation)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.operation)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.operation)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.operation)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.operation)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.operation)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Members::Member::Counters::get_children()
{
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
    }
    if(value_path == "expired")
    {
        expired = value;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
    }
}

Bundles::Bundles_::Bundle::Members::Member::LinkData::LinkData()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "link-data"; yang_parent_name = "member";
}

Bundles::Bundles_::Bundle::Members::Member::LinkData::~LinkData()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::LinkData::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::LinkData::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(actor_port_id.operation)
	|| is_set(actor_port_priority.operation)
	|| is_set(actor_port_state.operation)
	|| is_set(actor_system_mac_address.operation)
	|| is_set(actor_system_priority.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_port_id.operation)
	|| is_set(partner_port_priority.operation)
	|| is_set(partner_port_state.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| is_set(selected_aggregator_id.operation);
}

std::string Bundles::Bundles_::Bundle::Members::Member::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Members::Member::LinkData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.operation)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.operation)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.operation)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.operation)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.operation)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.operation)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.operation)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.operation)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Members::Member::LinkData::get_children()
{
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::LinkData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxData()
    :
    error{YType::uint32, "error"},
    member_mux_state_reason{YType::enumeration, "member-mux-state-reason"},
    member_state{YType::enumeration, "member-state"},
    mux_state{YType::enumeration, "mux-state"},
    mux_state_reason{YType::enumeration, "mux-state-reason"}
    	,
    member_mux_state_reason_data(std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>())
{
    member_mux_state_reason_data->parent = this;
    children["member-mux-state-reason-data"] = member_mux_state_reason_data;

    yang_name = "member-mux-data"; yang_parent_name = "member";
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::~MemberMuxData()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::has_data() const
{
    return error.is_set
	|| member_mux_state_reason.is_set
	|| member_state.is_set
	|| mux_state.is_set
	|| mux_state_reason.is_set
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_data());
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(member_mux_state_reason.operation)
	|| is_set(member_state.operation)
	|| is_set(mux_state.operation)
	|| is_set(mux_state_reason.operation)
	|| (member_mux_state_reason_data !=  nullptr && member_mux_state_reason_data->has_operation());
}

std::string Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-data";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (member_mux_state_reason.is_set || is_set(member_mux_state_reason.operation)) leaf_name_data.push_back(member_mux_state_reason.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.operation)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.operation)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (mux_state_reason.is_set || is_set(mux_state_reason.operation)) leaf_name_data.push_back(mux_state_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-mux-state-reason-data")
    {
        if(member_mux_state_reason_data != nullptr)
        {
            children["member-mux-state-reason-data"] = member_mux_state_reason_data;
        }
        else
        {
            member_mux_state_reason_data = std::make_shared<Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData>();
            member_mux_state_reason_data->parent = this;
            children["member-mux-state-reason-data"] = member_mux_state_reason_data;
        }
        return children.at("member-mux-state-reason-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::get_children()
{
    if(children.find("member-mux-state-reason-data") == children.end())
    {
        if(member_mux_state_reason_data != nullptr)
        {
            children["member-mux-state-reason-data"] = member_mux_state_reason_data;
        }
    }

    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "member-mux-state-reason")
    {
        member_mux_state_reason = value;
    }
    if(value_path == "member-state")
    {
        member_state = value;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
    }
    if(value_path == "mux-state-reason")
    {
        mux_state_reason = value;
    }
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::MemberMuxStateReasonData()
    :
    reason_type{YType::enumeration, "reason-type"},
    severity{YType::enumeration, "severity"}
{
    yang_name = "member-mux-state-reason-data"; yang_parent_name = "member-mux-data";
}

Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::~MemberMuxStateReasonData()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_data() const
{
    return reason_type.is_set
	|| severity.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_type.operation)
	|| is_set(severity.operation);
}

std::string Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-mux-state-reason-data";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberMuxStateReasonData' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_type.is_set || is_set(reason_type.operation)) leaf_name_data.push_back(reason_type.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::get_children()
{
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-type")
    {
        reason_type = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Bundles::Bundles_::Bundle::Members::Member::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "mac-address"; yang_parent_name = "member";
}

Bundles::Bundles_::Bundle::Members::Member::MacAddress::~MacAddress()
{
}

bool Bundles::Bundles_::Bundle::Members::Member::MacAddress::has_data() const
{
    return address.is_set;
}

bool Bundles::Bundles_::Bundle::Members::Member::MacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";

    return path_buffer.str();

}

EntityPath Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bundles::Bundles_::Bundle::Members::Member::MacAddress::get_children()
{
    return children;
}

void Bundles::Bundles_::Bundle::Members::Member::MacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

LacpBundleMembers::LacpBundleMembers()
    :
    members(std::make_shared<LacpBundleMembers::Members>())
	,nodes(std::make_shared<LacpBundleMembers::Nodes>())
{
    members->parent = this;
    children["members"] = members;

    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "lacp-bundle-members"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper";
}

LacpBundleMembers::~LacpBundleMembers()
{
}

bool LacpBundleMembers::has_data() const
{
    return (members !=  nullptr && members->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool LacpBundleMembers::has_operation() const
{
    return is_set(operation)
	|| (members !=  nullptr && members->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string LacpBundleMembers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> LacpBundleMembers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "members")
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
        else
        {
            members = std::make_shared<LacpBundleMembers::Members>();
            members->parent = this;
            children["members"] = members;
        }
        return children.at("members");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<LacpBundleMembers::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::get_children()
{
    if(children.find("members") == children.end())
    {
        if(members != nullptr)
        {
            children["members"] = members;
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void LacpBundleMembers::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> LacpBundleMembers::clone_ptr() const
{
    return std::make_shared<LacpBundleMembers>();
}

std::string LacpBundleMembers::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LacpBundleMembers::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LacpBundleMembers::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

LacpBundleMembers::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "lacp-bundle-members";
}

LacpBundleMembers::Nodes::~Nodes()
{
}

bool LacpBundleMembers::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundleMembers::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LacpBundleMembers::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundleMembers::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<LacpBundleMembers::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::Nodes::get_children()
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

void LacpBundleMembers::Nodes::set_value(const std::string & value_path, std::string value)
{
}

LacpBundleMembers::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    counters(std::make_shared<LacpBundleMembers::Nodes::Node::Counters>())
{
    counters->parent = this;
    children["counters"] = counters;

    yang_name = "node"; yang_parent_name = "nodes";
}

LacpBundleMembers::Nodes::Node::~Node()
{
}

bool LacpBundleMembers::Nodes::Node::has_data() const
{
    return node.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool LacpBundleMembers::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string LacpBundleMembers::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundleMembers::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<LacpBundleMembers::Nodes::Node::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::Nodes::Node::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    return children;
}

void LacpBundleMembers::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

LacpBundleMembers::Nodes::Node::Counters::Counters()
    :
    last_wrong_port{YType::uint32, "last-wrong-port"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    time_since_last_updated{YType::uint64, "time-since-last-updated"},
    time_since_unexpected_event{YType::uint64, "time-since-unexpected-event"},
    undecodable_packets{YType::uint32, "undecodable-packets"},
    unknown_port_count{YType::uint32, "unknown-port-count"},
    wrong_port_count{YType::uint32, "wrong-port-count"}
{
    yang_name = "counters"; yang_parent_name = "node";
}

LacpBundleMembers::Nodes::Node::Counters::~Counters()
{
}

bool LacpBundleMembers::Nodes::Node::Counters::has_data() const
{
    return last_wrong_port.is_set
	|| time_since_cleared.is_set
	|| time_since_last_updated.is_set
	|| time_since_unexpected_event.is_set
	|| undecodable_packets.is_set
	|| unknown_port_count.is_set
	|| wrong_port_count.is_set;
}

bool LacpBundleMembers::Nodes::Node::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_wrong_port.operation)
	|| is_set(time_since_cleared.operation)
	|| is_set(time_since_last_updated.operation)
	|| is_set(time_since_unexpected_event.operation)
	|| is_set(undecodable_packets.operation)
	|| is_set(unknown_port_count.operation)
	|| is_set(wrong_port_count.operation);
}

std::string LacpBundleMembers::Nodes::Node::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::Nodes::Node::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_wrong_port.is_set || is_set(last_wrong_port.operation)) leaf_name_data.push_back(last_wrong_port.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (time_since_last_updated.is_set || is_set(time_since_last_updated.operation)) leaf_name_data.push_back(time_since_last_updated.get_name_leafdata());
    if (time_since_unexpected_event.is_set || is_set(time_since_unexpected_event.operation)) leaf_name_data.push_back(time_since_unexpected_event.get_name_leafdata());
    if (undecodable_packets.is_set || is_set(undecodable_packets.operation)) leaf_name_data.push_back(undecodable_packets.get_name_leafdata());
    if (unknown_port_count.is_set || is_set(unknown_port_count.operation)) leaf_name_data.push_back(unknown_port_count.get_name_leafdata());
    if (wrong_port_count.is_set || is_set(wrong_port_count.operation)) leaf_name_data.push_back(wrong_port_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundleMembers::Nodes::Node::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::Nodes::Node::Counters::get_children()
{
    return children;
}

void LacpBundleMembers::Nodes::Node::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-wrong-port")
    {
        last_wrong_port = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
    if(value_path == "time-since-last-updated")
    {
        time_since_last_updated = value;
    }
    if(value_path == "time-since-unexpected-event")
    {
        time_since_unexpected_event = value;
    }
    if(value_path == "undecodable-packets")
    {
        undecodable_packets = value;
    }
    if(value_path == "unknown-port-count")
    {
        unknown_port_count = value;
    }
    if(value_path == "wrong-port-count")
    {
        wrong_port_count = value;
    }
}

LacpBundleMembers::Members::Members()
{
    yang_name = "members"; yang_parent_name = "lacp-bundle-members";
}

LacpBundleMembers::Members::~Members()
{
}

bool LacpBundleMembers::Members::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return false;
}

bool LacpBundleMembers::Members::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LacpBundleMembers::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundleMembers::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<LacpBundleMembers::Members::Member>();
        c->parent = this;
        member.push_back(std::move(c));
        children[segment_path] = member.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::Members::get_children()
{
    for (auto const & c : member)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void LacpBundleMembers::Members::set_value(const std::string & value_path, std::string value)
{
}

LacpBundleMembers::Members::Member::Member()
    :
    member_interface{YType::str, "member-interface"}
    	,
    counters(std::make_shared<LacpBundleMembers::Members::Member::Counters>())
	,data(std::make_shared<LacpBundleMembers::Members::Member::Data>())
{
    counters->parent = this;
    children["counters"] = counters;

    data->parent = this;
    children["data"] = data;

    yang_name = "member"; yang_parent_name = "members";
}

LacpBundleMembers::Members::Member::~Member()
{
}

bool LacpBundleMembers::Members::Member::has_data() const
{
    return member_interface.is_set
	|| (counters !=  nullptr && counters->has_data())
	|| (data !=  nullptr && data->has_data());
}

bool LacpBundleMembers::Members::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(member_interface.operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (data !=  nullptr && data->has_operation());
}

std::string LacpBundleMembers::Members::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[member-interface='" <<member_interface <<"']";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::Members::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members/members/" << get_segment_path();
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

std::shared_ptr<Entity> LacpBundleMembers::Members::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<LacpBundleMembers::Members::Member::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
        else
        {
            data = std::make_shared<LacpBundleMembers::Members::Member::Data>();
            data->parent = this;
            children["data"] = data;
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::Members::Member::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data;
        }
    }

    return children;
}

void LacpBundleMembers::Members::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "member-interface")
    {
        member_interface = value;
    }
}

LacpBundleMembers::Members::Member::Data::Data()
    :
    actor_operational_key{YType::uint16, "actor-operational-key"},
    actor_port_id{YType::uint16, "actor-port-id"},
    actor_port_priority{YType::uint16, "actor-port-priority"},
    actor_port_state{YType::uint8, "actor-port-state"},
    actor_system_mac_address{YType::str, "actor-system-mac-address"},
    actor_system_priority{YType::uint16, "actor-system-priority"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    interface_handle{YType::str, "interface-handle"},
    partner_operational_key{YType::uint16, "partner-operational-key"},
    partner_port_id{YType::uint16, "partner-port-id"},
    partner_port_priority{YType::uint16, "partner-port-priority"},
    partner_port_state{YType::uint8, "partner-port-state"},
    partner_system_mac_address{YType::str, "partner-system-mac-address"},
    partner_system_priority{YType::uint16, "partner-system-priority"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"}
{
    yang_name = "data"; yang_parent_name = "member";
}

LacpBundleMembers::Members::Member::Data::~Data()
{
}

bool LacpBundleMembers::Members::Member::Data::has_data() const
{
    return actor_operational_key.is_set
	|| actor_port_id.is_set
	|| actor_port_priority.is_set
	|| actor_port_state.is_set
	|| actor_system_mac_address.is_set
	|| actor_system_priority.is_set
	|| attached_aggregator_id.is_set
	|| interface_handle.is_set
	|| partner_operational_key.is_set
	|| partner_port_id.is_set
	|| partner_port_priority.is_set
	|| partner_port_state.is_set
	|| partner_system_mac_address.is_set
	|| partner_system_priority.is_set
	|| selected_aggregator_id.is_set;
}

bool LacpBundleMembers::Members::Member::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_operational_key.operation)
	|| is_set(actor_port_id.operation)
	|| is_set(actor_port_priority.operation)
	|| is_set(actor_port_state.operation)
	|| is_set(actor_system_mac_address.operation)
	|| is_set(actor_system_priority.operation)
	|| is_set(attached_aggregator_id.operation)
	|| is_set(interface_handle.operation)
	|| is_set(partner_operational_key.operation)
	|| is_set(partner_port_id.operation)
	|| is_set(partner_port_priority.operation)
	|| is_set(partner_port_state.operation)
	|| is_set(partner_system_mac_address.operation)
	|| is_set(partner_system_priority.operation)
	|| is_set(selected_aggregator_id.operation);
}

std::string LacpBundleMembers::Members::Member::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::Members::Member::Data::get_entity_path(Entity* ancestor) const
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

    if (actor_operational_key.is_set || is_set(actor_operational_key.operation)) leaf_name_data.push_back(actor_operational_key.get_name_leafdata());
    if (actor_port_id.is_set || is_set(actor_port_id.operation)) leaf_name_data.push_back(actor_port_id.get_name_leafdata());
    if (actor_port_priority.is_set || is_set(actor_port_priority.operation)) leaf_name_data.push_back(actor_port_priority.get_name_leafdata());
    if (actor_port_state.is_set || is_set(actor_port_state.operation)) leaf_name_data.push_back(actor_port_state.get_name_leafdata());
    if (actor_system_mac_address.is_set || is_set(actor_system_mac_address.operation)) leaf_name_data.push_back(actor_system_mac_address.get_name_leafdata());
    if (actor_system_priority.is_set || is_set(actor_system_priority.operation)) leaf_name_data.push_back(actor_system_priority.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.operation)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (partner_operational_key.is_set || is_set(partner_operational_key.operation)) leaf_name_data.push_back(partner_operational_key.get_name_leafdata());
    if (partner_port_id.is_set || is_set(partner_port_id.operation)) leaf_name_data.push_back(partner_port_id.get_name_leafdata());
    if (partner_port_priority.is_set || is_set(partner_port_priority.operation)) leaf_name_data.push_back(partner_port_priority.get_name_leafdata());
    if (partner_port_state.is_set || is_set(partner_port_state.operation)) leaf_name_data.push_back(partner_port_state.get_name_leafdata());
    if (partner_system_mac_address.is_set || is_set(partner_system_mac_address.operation)) leaf_name_data.push_back(partner_system_mac_address.get_name_leafdata());
    if (partner_system_priority.is_set || is_set(partner_system_priority.operation)) leaf_name_data.push_back(partner_system_priority.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.operation)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundleMembers::Members::Member::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::Members::Member::Data::get_children()
{
    return children;
}

void LacpBundleMembers::Members::Member::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-operational-key")
    {
        actor_operational_key = value;
    }
    if(value_path == "actor-port-id")
    {
        actor_port_id = value;
    }
    if(value_path == "actor-port-priority")
    {
        actor_port_priority = value;
    }
    if(value_path == "actor-port-state")
    {
        actor_port_state = value;
    }
    if(value_path == "actor-system-mac-address")
    {
        actor_system_mac_address = value;
    }
    if(value_path == "actor-system-priority")
    {
        actor_system_priority = value;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "partner-operational-key")
    {
        partner_operational_key = value;
    }
    if(value_path == "partner-port-id")
    {
        partner_port_id = value;
    }
    if(value_path == "partner-port-priority")
    {
        partner_port_priority = value;
    }
    if(value_path == "partner-port-state")
    {
        partner_port_state = value;
    }
    if(value_path == "partner-system-mac-address")
    {
        partner_system_mac_address = value;
    }
    if(value_path == "partner-system-priority")
    {
        partner_system_priority = value;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
    }
}

LacpBundleMembers::Members::Member::Counters::Counters()
    :
    defaulted{YType::uint32, "defaulted"},
    excess_lacpd_us_received{YType::uint32, "excess-lacpd-us-received"},
    excess_marker_packets_received{YType::uint32, "excess-marker-packets-received"},
    expired{YType::uint32, "expired"},
    illegal_packets_received{YType::uint32, "illegal-packets-received"},
    lacpd_us_received{YType::uint32, "lacpd-us-received"},
    lacpd_us_transmitted{YType::uint32, "lacpd-us-transmitted"},
    last_cleared_nsec{YType::uint32, "last-cleared-nsec"},
    last_cleared_sec{YType::uint32, "last-cleared-sec"},
    marker_packets_received{YType::uint32, "marker-packets-received"},
    marker_responses_transmitted{YType::uint32, "marker-responses-transmitted"},
    time_since_cleared{YType::uint64, "time-since-cleared"},
    time_since_last_lacpdu_received{YType::uint64, "time-since-last-lacpdu-received"},
    time_since_unexpected_event{YType::uint64, "time-since-unexpected-event"}
{
    yang_name = "counters"; yang_parent_name = "member";
}

LacpBundleMembers::Members::Member::Counters::~Counters()
{
}

bool LacpBundleMembers::Members::Member::Counters::has_data() const
{
    return defaulted.is_set
	|| excess_lacpd_us_received.is_set
	|| excess_marker_packets_received.is_set
	|| expired.is_set
	|| illegal_packets_received.is_set
	|| lacpd_us_received.is_set
	|| lacpd_us_transmitted.is_set
	|| last_cleared_nsec.is_set
	|| last_cleared_sec.is_set
	|| marker_packets_received.is_set
	|| marker_responses_transmitted.is_set
	|| time_since_cleared.is_set
	|| time_since_last_lacpdu_received.is_set
	|| time_since_unexpected_event.is_set;
}

bool LacpBundleMembers::Members::Member::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(defaulted.operation)
	|| is_set(excess_lacpd_us_received.operation)
	|| is_set(excess_marker_packets_received.operation)
	|| is_set(expired.operation)
	|| is_set(illegal_packets_received.operation)
	|| is_set(lacpd_us_received.operation)
	|| is_set(lacpd_us_transmitted.operation)
	|| is_set(last_cleared_nsec.operation)
	|| is_set(last_cleared_sec.operation)
	|| is_set(marker_packets_received.operation)
	|| is_set(marker_responses_transmitted.operation)
	|| is_set(time_since_cleared.operation)
	|| is_set(time_since_last_lacpdu_received.operation)
	|| is_set(time_since_unexpected_event.operation);
}

std::string LacpBundleMembers::Members::Member::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath LacpBundleMembers::Members::Member::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counters' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defaulted.is_set || is_set(defaulted.operation)) leaf_name_data.push_back(defaulted.get_name_leafdata());
    if (excess_lacpd_us_received.is_set || is_set(excess_lacpd_us_received.operation)) leaf_name_data.push_back(excess_lacpd_us_received.get_name_leafdata());
    if (excess_marker_packets_received.is_set || is_set(excess_marker_packets_received.operation)) leaf_name_data.push_back(excess_marker_packets_received.get_name_leafdata());
    if (expired.is_set || is_set(expired.operation)) leaf_name_data.push_back(expired.get_name_leafdata());
    if (illegal_packets_received.is_set || is_set(illegal_packets_received.operation)) leaf_name_data.push_back(illegal_packets_received.get_name_leafdata());
    if (lacpd_us_received.is_set || is_set(lacpd_us_received.operation)) leaf_name_data.push_back(lacpd_us_received.get_name_leafdata());
    if (lacpd_us_transmitted.is_set || is_set(lacpd_us_transmitted.operation)) leaf_name_data.push_back(lacpd_us_transmitted.get_name_leafdata());
    if (last_cleared_nsec.is_set || is_set(last_cleared_nsec.operation)) leaf_name_data.push_back(last_cleared_nsec.get_name_leafdata());
    if (last_cleared_sec.is_set || is_set(last_cleared_sec.operation)) leaf_name_data.push_back(last_cleared_sec.get_name_leafdata());
    if (marker_packets_received.is_set || is_set(marker_packets_received.operation)) leaf_name_data.push_back(marker_packets_received.get_name_leafdata());
    if (marker_responses_transmitted.is_set || is_set(marker_responses_transmitted.operation)) leaf_name_data.push_back(marker_responses_transmitted.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.operation)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());
    if (time_since_last_lacpdu_received.is_set || is_set(time_since_last_lacpdu_received.operation)) leaf_name_data.push_back(time_since_last_lacpdu_received.get_name_leafdata());
    if (time_since_unexpected_event.is_set || is_set(time_since_unexpected_event.operation)) leaf_name_data.push_back(time_since_unexpected_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> LacpBundleMembers::Members::Member::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & LacpBundleMembers::Members::Member::Counters::get_children()
{
    return children;
}

void LacpBundleMembers::Members::Member::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "defaulted")
    {
        defaulted = value;
    }
    if(value_path == "excess-lacpd-us-received")
    {
        excess_lacpd_us_received = value;
    }
    if(value_path == "excess-marker-packets-received")
    {
        excess_marker_packets_received = value;
    }
    if(value_path == "expired")
    {
        expired = value;
    }
    if(value_path == "illegal-packets-received")
    {
        illegal_packets_received = value;
    }
    if(value_path == "lacpd-us-received")
    {
        lacpd_us_received = value;
    }
    if(value_path == "lacpd-us-transmitted")
    {
        lacpd_us_transmitted = value;
    }
    if(value_path == "last-cleared-nsec")
    {
        last_cleared_nsec = value;
    }
    if(value_path == "last-cleared-sec")
    {
        last_cleared_sec = value;
    }
    if(value_path == "marker-packets-received")
    {
        marker_packets_received = value;
    }
    if(value_path == "marker-responses-transmitted")
    {
        marker_responses_transmitted = value;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
    }
    if(value_path == "time-since-last-lacpdu-received")
    {
        time_since_last_lacpdu_received = value;
    }
    if(value_path == "time-since-unexpected-event")
    {
        time_since_unexpected_event = value;
    }
}

BundlesAdjacency::BundlesAdjacency()
    :
    nodes(std::make_shared<BundlesAdjacency::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "bundles-adjacency"; yang_parent_name = "Cisco-IOS-XR-bundlemgr-oper";
}

BundlesAdjacency::~BundlesAdjacency()
{
}

bool BundlesAdjacency::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool BundlesAdjacency::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string BundlesAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BundlesAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<BundlesAdjacency::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void BundlesAdjacency::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> BundlesAdjacency::clone_ptr() const
{
    return std::make_shared<BundlesAdjacency>();
}

std::string BundlesAdjacency::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string BundlesAdjacency::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function BundlesAdjacency::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

BundlesAdjacency::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "bundles-adjacency";
}

BundlesAdjacency::Nodes::~Nodes()
{
}

bool BundlesAdjacency::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool BundlesAdjacency::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundlesAdjacency::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::get_children()
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

void BundlesAdjacency::Nodes::set_value(const std::string & value_path, std::string value)
{
}

BundlesAdjacency::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    brief(std::make_shared<BundlesAdjacency::Nodes::Node::Brief>())
	,bundles(std::make_shared<BundlesAdjacency::Nodes::Node::Bundles>())
{
    brief->parent = this;
    children["brief"] = brief;

    bundles->parent = this;
    children["bundles"] = bundles;

    yang_name = "node"; yang_parent_name = "nodes";
}

BundlesAdjacency::Nodes::Node::~Node()
{
}

bool BundlesAdjacency::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (bundles !=  nullptr && bundles->has_data());
}

bool BundlesAdjacency::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (bundles !=  nullptr && bundles->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
        else
        {
            brief = std::make_shared<BundlesAdjacency::Nodes::Node::Brief>();
            brief->parent = this;
            children["brief"] = brief;
        }
        return children.at("brief");
    }

    if(child_yang_name == "bundles")
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
        else
        {
            bundles = std::make_shared<BundlesAdjacency::Nodes::Node::Bundles>();
            bundles->parent = this;
            children["bundles"] = bundles;
        }
        return children.at("bundles");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
    }

    if(children.find("bundles") == children.end())
    {
        if(bundles != nullptr)
        {
            children["bundles"] = bundles;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

BundlesAdjacency::Nodes::Node::Brief::Brief()
{
    yang_name = "brief"; yang_parent_name = "node";
}

BundlesAdjacency::Nodes::Node::Brief::~Brief()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundlesAdjacency::Nodes::Node::Brief::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BundlesAdjacency::Nodes::Node::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData>();
        c->parent = this;
        bundle_data.push_back(std::move(c));
        children[segment_path] = bundle_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Brief::get_children()
{
    for (auto const & c : bundle_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::set_value(const std::string & value_path, std::string value)
{
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::BundleData()
    :
    interface_name{YType::str, "interface-name"},
    member_count{YType::uint32, "member-count"},
    sub_interface_count{YType::uint32, "sub-interface-count"},
    total_weight{YType::uint32, "total-weight"}
{
    yang_name = "bundle-data"; yang_parent_name = "brief";
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::~BundleData()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| member_count.is_set
	|| sub_interface_count.is_set
	|| total_weight.is_set;
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(member_count.operation)
	|| is_set(sub_interface_count.operation)
	|| is_set(total_weight.operation);
}

std::string BundlesAdjacency::Nodes::Node::Brief::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Brief::BundleData::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (member_count.is_set || is_set(member_count.operation)) leaf_name_data.push_back(member_count.get_name_leafdata());
    if (sub_interface_count.is_set || is_set(sub_interface_count.operation)) leaf_name_data.push_back(sub_interface_count.get_name_leafdata());
    if (total_weight.is_set || is_set(total_weight.operation)) leaf_name_data.push_back(total_weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface>();
        c->parent = this;
        sub_interface.push_back(std::move(c));
        children[segment_path] = sub_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Brief::BundleData::get_children()
{
    for (auto const & c : sub_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "member-count")
    {
        member_count = value;
    }
    if(value_path == "sub-interface-count")
    {
        sub_interface_count = value;
    }
    if(value_path == "total-weight")
    {
        total_weight = value;
    }
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    load_balance_data(std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData>())
{
    load_balance_data->parent = this;
    children["load-balance-data"] = load_balance_data;

    yang_name = "sub-interface"; yang_parent_name = "bundle-data";
}

BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::~SubInterface()
{
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::has_data() const
{
    return interface_name.is_set
	|| (load_balance_data !=  nullptr && load_balance_data->has_data());
}

bool BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (load_balance_data !=  nullptr && load_balance_data->has_operation());
}

std::string BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";

    return path_buffer.str();

}

EntityPath BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubInterface' in Cisco_IOS_XR_bundlemgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-balance-data")
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
        else
        {
            load_balance_data = std::make_shared<BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData>();
            load_balance_data->parent = this;
            children["load-balance-data"] = load_balance_data;
        }
        return children.at("load-balance-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::get_children()
{
    if(children.find("load-balance-data") == children.end())
    {
        if(load_balance_data != nullptr)
        {
            children["load-balance-data"] = load_balance_data;
        }
    }

    return children;
}

void BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}


}
}

