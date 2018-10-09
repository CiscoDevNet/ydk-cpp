
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1001_otdr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1001_otdr_oper {

HwModule::HwModule()
    :
    otdr_details(std::make_shared<HwModule::OtdrDetails>())
    , otdrs(std::make_shared<HwModule::Otdrs>())
{
    otdr_details->parent = this;
    otdrs->parent = this;

    yang_name = "hw-module"; yang_parent_name = "Cisco-IOS-XR-ncs1001-otdr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

HwModule::~HwModule()
{
}

bool HwModule::has_data() const
{
    if (is_presence_container) return true;
    return (otdr_details !=  nullptr && otdr_details->has_data())
	|| (otdrs !=  nullptr && otdrs->has_data());
}

bool HwModule::has_operation() const
{
    return is_set(yfilter)
	|| (otdr_details !=  nullptr && otdr_details->has_operation())
	|| (otdrs !=  nullptr && otdrs->has_operation());
}

std::string HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-otdr-oper:hw-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr-details")
    {
        if(otdr_details == nullptr)
        {
            otdr_details = std::make_shared<HwModule::OtdrDetails>();
        }
        return otdr_details;
    }

    if(child_yang_name == "otdrs")
    {
        if(otdrs == nullptr)
        {
            otdrs = std::make_shared<HwModule::Otdrs>();
        }
        return otdrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otdr_details != nullptr)
    {
        children["otdr-details"] = otdr_details;
    }

    if(otdrs != nullptr)
    {
        children["otdrs"] = otdrs;
    }

    return children;
}

void HwModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HwModule::clone_ptr() const
{
    return std::make_shared<HwModule>();
}

std::string HwModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-details" || name == "otdrs")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetails()
    :
    otdr_detail(this, {"slot_id"})
{

    yang_name = "otdr-details"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::OtdrDetails::~OtdrDetails()
{
}

bool HwModule::OtdrDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr_detail.len(); index++)
    {
        if(otdr_detail[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::OtdrDetails::has_operation() const
{
    for (std::size_t index=0; index<otdr_detail.len(); index++)
    {
        if(otdr_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::OtdrDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-otdr-oper:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::OtdrDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr-detail")
    {
        auto c = std::make_shared<HwModule::OtdrDetails::OtdrDetail>();
        c->parent = this;
        otdr_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : otdr_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::OtdrDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::OtdrDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::OtdrDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-detail")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetail::OtdrDetail()
    :
    slot_id{YType::uint32, "slot-id"}
        ,
    data_type_detail(this, {"otdr_data_type_details"})
{

    yang_name = "otdr-detail"; yang_parent_name = "otdr-details"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::OtdrDetails::OtdrDetail::~OtdrDetail()
{
}

bool HwModule::OtdrDetails::OtdrDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_type_detail.len(); index++)
    {
        if(data_type_detail[index]->has_data())
            return true;
    }
    return slot_id.is_set;
}

bool HwModule::OtdrDetails::OtdrDetail::has_operation() const
{
    for (std::size_t index=0; index<data_type_detail.len(); index++)
    {
        if(data_type_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter);
}

std::string HwModule::OtdrDetails::OtdrDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-otdr-oper:hw-module/otdr-details/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::OtdrDetails::OtdrDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-detail";
    ADD_KEY_TOKEN(slot_id, "slot-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::OtdrDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::OtdrDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-type-detail")
    {
        auto c = std::make_shared<HwModule::OtdrDetails::OtdrDetail::DataTypeDetail>();
        c->parent = this;
        data_type_detail.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::OtdrDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data_type_detail.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::OtdrDetails::OtdrDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::OtdrDetails::OtdrDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
}

bool HwModule::OtdrDetails::OtdrDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type-detail" || name == "slot-id")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::DataTypeDetail()
    :
    otdr_data_type_details{YType::enumeration, "otdr-data-type-details"}
        ,
    identifier(this, {"scan_detail"})
{

    yang_name = "data-type-detail"; yang_parent_name = "otdr-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::~DataTypeDetail()
{
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<identifier.len(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    return otdr_data_type_details.is_set;
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::has_operation() const
{
    for (std::size_t index=0; index<identifier.len(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(otdr_data_type_details.yfilter);
}

std::string HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-type-detail";
    ADD_KEY_TOKEN(otdr_data_type_details, "otdr-data-type-details");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otdr_data_type_details.is_set || is_set(otdr_data_type_details.yfilter)) leaf_name_data.push_back(otdr_data_type_details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        auto c = std::make_shared<HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier>();
        c->parent = this;
        identifier.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : identifier.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otdr-data-type-details")
    {
        otdr_data_type_details = value;
        otdr_data_type_details.value_namespace = name_space;
        otdr_data_type_details.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otdr-data-type-details")
    {
        otdr_data_type_details.yfilter = yfilter;
    }
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "otdr-data-type-details")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::Identifier()
    :
    scan_detail{YType::uint32, "scan-detail"}
        ,
    otdr_item(std::make_shared<HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem>())
    , otdr_scan(this, {})
    , otdr_status(this, {})
{
    otdr_item->parent = this;

    yang_name = "identifier"; yang_parent_name = "data-type-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::~Identifier()
{
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr_scan.len(); index++)
    {
        if(otdr_scan[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<otdr_status.len(); index++)
    {
        if(otdr_status[index]->has_data())
            return true;
    }
    return scan_detail.is_set
	|| (otdr_item !=  nullptr && otdr_item->has_data());
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::has_operation() const
{
    for (std::size_t index=0; index<otdr_scan.len(); index++)
    {
        if(otdr_scan[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<otdr_status.len(); index++)
    {
        if(otdr_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(scan_detail.yfilter)
	|| (otdr_item !=  nullptr && otdr_item->has_operation());
}

std::string HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    ADD_KEY_TOKEN(scan_detail, "scan-detail");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scan_detail.is_set || is_set(scan_detail.yfilter)) leaf_name_data.push_back(scan_detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr-item")
    {
        if(otdr_item == nullptr)
        {
            otdr_item = std::make_shared<HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem>();
        }
        return otdr_item;
    }

    if(child_yang_name == "otdr-scan")
    {
        auto c = std::make_shared<HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan>();
        c->parent = this;
        otdr_scan.append(c);
        return c;
    }

    if(child_yang_name == "otdr-status")
    {
        auto c = std::make_shared<HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus>();
        c->parent = this;
        otdr_status.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otdr_item != nullptr)
    {
        children["otdr-item"] = otdr_item;
    }

    count = 0;
    for (auto c : otdr_scan.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : otdr_status.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scan-detail")
    {
        scan_detail = value;
        scan_detail.value_namespace = name_space;
        scan_detail.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scan-detail")
    {
        scan_detail.yfilter = yfilter;
    }
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-item" || name == "otdr-scan" || name == "otdr-status" || name == "scan-detail")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrItem()
    :
    otdr_number{YType::uint8, "otdr-number"},
    direction{YType::enumeration, "direction"},
    timestamp{YType::str, "timestamp"},
    sor_file{YType::str, "sor-file"},
    sor_directory{YType::str, "sor-directory"},
    scan_mode{YType::enumeration, "scan-mode"},
    distance{YType::str, "distance"},
    total_orl{YType::str, "total-orl"}
        ,
    otdr_event(this, {})
{

    yang_name = "otdr-item"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::~OtdrItem()
{
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr_event.len(); index++)
    {
        if(otdr_event[index]->has_data())
            return true;
    }
    return otdr_number.is_set
	|| direction.is_set
	|| timestamp.is_set
	|| sor_file.is_set
	|| sor_directory.is_set
	|| scan_mode.is_set
	|| distance.is_set
	|| total_orl.is_set;
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::has_operation() const
{
    for (std::size_t index=0; index<otdr_event.len(); index++)
    {
        if(otdr_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(otdr_number.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sor_file.yfilter)
	|| ydk::is_set(sor_directory.yfilter)
	|| ydk::is_set(scan_mode.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(total_orl.yfilter);
}

std::string HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otdr_number.is_set || is_set(otdr_number.yfilter)) leaf_name_data.push_back(otdr_number.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sor_file.is_set || is_set(sor_file.yfilter)) leaf_name_data.push_back(sor_file.get_name_leafdata());
    if (sor_directory.is_set || is_set(sor_directory.yfilter)) leaf_name_data.push_back(sor_directory.get_name_leafdata());
    if (scan_mode.is_set || is_set(scan_mode.yfilter)) leaf_name_data.push_back(scan_mode.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (total_orl.is_set || is_set(total_orl.yfilter)) leaf_name_data.push_back(total_orl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr-event")
    {
        auto c = std::make_shared<HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent>();
        c->parent = this;
        otdr_event.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : otdr_event.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otdr-number")
    {
        otdr_number = value;
        otdr_number.value_namespace = name_space;
        otdr_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sor-file")
    {
        sor_file = value;
        sor_file.value_namespace = name_space;
        sor_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sor-directory")
    {
        sor_directory = value;
        sor_directory.value_namespace = name_space;
        sor_directory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-mode")
    {
        scan_mode = value;
        scan_mode.value_namespace = name_space;
        scan_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-orl")
    {
        total_orl = value;
        total_orl.value_namespace = name_space;
        total_orl.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otdr-number")
    {
        otdr_number.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "sor-file")
    {
        sor_file.yfilter = yfilter;
    }
    if(value_path == "sor-directory")
    {
        sor_directory.yfilter = yfilter;
    }
    if(value_path == "scan-mode")
    {
        scan_mode.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "total-orl")
    {
        total_orl.yfilter = yfilter;
    }
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-event" || name == "otdr-number" || name == "direction" || name == "timestamp" || name == "sor-file" || name == "sor-directory" || name == "scan-mode" || name == "distance" || name == "total-orl")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::OtdrEvent()
    :
    event_id{YType::uint16, "event-id"},
    type{YType::enumeration, "type"},
    position{YType::str, "position"},
    accuracy{YType::str, "accuracy"},
    magnitude{YType::str, "magnitude"},
    attenuation{YType::str, "attenuation"},
    eof_confidence{YType::uint32, "eof-confidence"},
    threshold_crossing{YType::uint8, "threshold-crossing"}
{

    yang_name = "otdr-event"; yang_parent_name = "otdr-item"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::~OtdrEvent()
{
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::has_data() const
{
    if (is_presence_container) return true;
    return event_id.is_set
	|| type.is_set
	|| position.is_set
	|| accuracy.is_set
	|| magnitude.is_set
	|| attenuation.is_set
	|| eof_confidence.is_set
	|| threshold_crossing.is_set;
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(position.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| ydk::is_set(eof_confidence.yfilter)
	|| ydk::is_set(threshold_crossing.yfilter);
}

std::string HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (position.is_set || is_set(position.yfilter)) leaf_name_data.push_back(position.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());
    if (eof_confidence.is_set || is_set(eof_confidence.yfilter)) leaf_name_data.push_back(eof_confidence.get_name_leafdata());
    if (threshold_crossing.is_set || is_set(threshold_crossing.yfilter)) leaf_name_data.push_back(threshold_crossing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "position")
    {
        position = value;
        position.value_namespace = name_space;
        position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eof-confidence")
    {
        eof_confidence = value;
        eof_confidence.value_namespace = name_space;
        eof_confidence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-crossing")
    {
        threshold_crossing = value;
        threshold_crossing.value_namespace = name_space;
        threshold_crossing.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "position")
    {
        position.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
    if(value_path == "eof-confidence")
    {
        eof_confidence.yfilter = yfilter;
    }
    if(value_path == "threshold-crossing")
    {
        threshold_crossing.yfilter = yfilter;
    }
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-id" || name == "type" || name == "position" || name == "accuracy" || name == "magnitude" || name == "attenuation" || name == "eof-confidence" || name == "threshold-crossing")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::OtdrScan()
    :
    index_{YType::uint16, "index"},
    otdr_number{YType::uint8, "otdr-number"},
    direction{YType::enumeration, "direction"},
    scan_mode{YType::enumeration, "scan-mode"},
    timestamp{YType::str, "timestamp"},
    sor_file{YType::str, "sor-file"}
{

    yang_name = "otdr-scan"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::~OtdrScan()
{
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| otdr_number.is_set
	|| direction.is_set
	|| scan_mode.is_set
	|| timestamp.is_set
	|| sor_file.is_set;
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(otdr_number.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(scan_mode.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sor_file.yfilter);
}

std::string HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-scan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (otdr_number.is_set || is_set(otdr_number.yfilter)) leaf_name_data.push_back(otdr_number.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (scan_mode.is_set || is_set(scan_mode.yfilter)) leaf_name_data.push_back(scan_mode.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sor_file.is_set || is_set(sor_file.yfilter)) leaf_name_data.push_back(sor_file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otdr-number")
    {
        otdr_number = value;
        otdr_number.value_namespace = name_space;
        otdr_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-mode")
    {
        scan_mode = value;
        scan_mode.value_namespace = name_space;
        scan_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sor-file")
    {
        sor_file = value;
        sor_file.value_namespace = name_space;
        sor_file.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "otdr-number")
    {
        otdr_number.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "scan-mode")
    {
        scan_mode.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "sor-file")
    {
        sor_file.yfilter = yfilter;
    }
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "otdr-number" || name == "direction" || name == "scan-mode" || name == "timestamp" || name == "sor-file")
        return true;
    return false;
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::OtdrStatus()
    :
    otdr_id{YType::uint8, "otdr-id"},
    direction{YType::enumeration, "direction"},
    timestamp{YType::str, "timestamp"},
    training_status{YType::enumeration, "training-status"},
    measurement_status{YType::enumeration, "measurement-status"},
    progress_pc{YType::uint16, "progress-pc"}
{

    yang_name = "otdr-status"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::~OtdrStatus()
{
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::has_data() const
{
    if (is_presence_container) return true;
    return otdr_id.is_set
	|| direction.is_set
	|| timestamp.is_set
	|| training_status.is_set
	|| measurement_status.is_set
	|| progress_pc.is_set;
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otdr_id.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(training_status.yfilter)
	|| ydk::is_set(measurement_status.yfilter)
	|| ydk::is_set(progress_pc.yfilter);
}

std::string HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otdr_id.is_set || is_set(otdr_id.yfilter)) leaf_name_data.push_back(otdr_id.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (training_status.is_set || is_set(training_status.yfilter)) leaf_name_data.push_back(training_status.get_name_leafdata());
    if (measurement_status.is_set || is_set(measurement_status.yfilter)) leaf_name_data.push_back(measurement_status.get_name_leafdata());
    if (progress_pc.is_set || is_set(progress_pc.yfilter)) leaf_name_data.push_back(progress_pc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otdr-id")
    {
        otdr_id = value;
        otdr_id.value_namespace = name_space;
        otdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "training-status")
    {
        training_status = value;
        training_status.value_namespace = name_space;
        training_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "measurement-status")
    {
        measurement_status = value;
        measurement_status.value_namespace = name_space;
        measurement_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "progress-pc")
    {
        progress_pc = value;
        progress_pc.value_namespace = name_space;
        progress_pc.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otdr-id")
    {
        otdr_id.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "training-status")
    {
        training_status.yfilter = yfilter;
    }
    if(value_path == "measurement-status")
    {
        measurement_status.yfilter = yfilter;
    }
    if(value_path == "progress-pc")
    {
        progress_pc.yfilter = yfilter;
    }
}

bool HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-id" || name == "direction" || name == "timestamp" || name == "training-status" || name == "measurement-status" || name == "progress-pc")
        return true;
    return false;
}

HwModule::Otdrs::Otdrs()
    :
    otdr(this, {"slot_id"})
{

    yang_name = "otdrs"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Otdrs::~Otdrs()
{
}

bool HwModule::Otdrs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr.len(); index++)
    {
        if(otdr[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::Otdrs::has_operation() const
{
    for (std::size_t index=0; index<otdr.len(); index++)
    {
        if(otdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::Otdrs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-otdr-oper:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Otdrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Otdrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::Otdrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr")
    {
        auto c = std::make_shared<HwModule::Otdrs::Otdr>();
        c->parent = this;
        otdr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::Otdrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : otdr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::Otdrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::Otdrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::Otdrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr")
        return true;
    return false;
}

HwModule::Otdrs::Otdr::Otdr()
    :
    slot_id{YType::uint32, "slot-id"}
        ,
    data_type(this, {"otdr_data_type"})
{

    yang_name = "otdr"; yang_parent_name = "otdrs"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::Otdrs::Otdr::~Otdr()
{
}

bool HwModule::Otdrs::Otdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_type.len(); index++)
    {
        if(data_type[index]->has_data())
            return true;
    }
    return slot_id.is_set;
}

bool HwModule::Otdrs::Otdr::has_operation() const
{
    for (std::size_t index=0; index<data_type.len(); index++)
    {
        if(data_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter);
}

std::string HwModule::Otdrs::Otdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-otdr-oper:hw-module/otdrs/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::Otdrs::Otdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr";
    ADD_KEY_TOKEN(slot_id, "slot-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Otdrs::Otdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::Otdrs::Otdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-type")
    {
        auto c = std::make_shared<HwModule::Otdrs::Otdr::DataType>();
        c->parent = this;
        data_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::Otdrs::Otdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : data_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::Otdrs::Otdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Otdrs::Otdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
}

bool HwModule::Otdrs::Otdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-type" || name == "slot-id")
        return true;
    return false;
}

HwModule::Otdrs::Otdr::DataType::DataType()
    :
    otdr_data_type{YType::enumeration, "otdr-data-type"}
        ,
    otdr_item(std::make_shared<HwModule::Otdrs::Otdr::DataType::OtdrItem>())
    , otdr_scan(this, {})
    , otdr_status(this, {})
{
    otdr_item->parent = this;

    yang_name = "data-type"; yang_parent_name = "otdr"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Otdrs::Otdr::DataType::~DataType()
{
}

bool HwModule::Otdrs::Otdr::DataType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr_scan.len(); index++)
    {
        if(otdr_scan[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<otdr_status.len(); index++)
    {
        if(otdr_status[index]->has_data())
            return true;
    }
    return otdr_data_type.is_set
	|| (otdr_item !=  nullptr && otdr_item->has_data());
}

bool HwModule::Otdrs::Otdr::DataType::has_operation() const
{
    for (std::size_t index=0; index<otdr_scan.len(); index++)
    {
        if(otdr_scan[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<otdr_status.len(); index++)
    {
        if(otdr_status[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(otdr_data_type.yfilter)
	|| (otdr_item !=  nullptr && otdr_item->has_operation());
}

std::string HwModule::Otdrs::Otdr::DataType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-type";
    ADD_KEY_TOKEN(otdr_data_type, "otdr-data-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Otdrs::Otdr::DataType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otdr_data_type.is_set || is_set(otdr_data_type.yfilter)) leaf_name_data.push_back(otdr_data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::Otdrs::Otdr::DataType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr-item")
    {
        if(otdr_item == nullptr)
        {
            otdr_item = std::make_shared<HwModule::Otdrs::Otdr::DataType::OtdrItem>();
        }
        return otdr_item;
    }

    if(child_yang_name == "otdr-scan")
    {
        auto c = std::make_shared<HwModule::Otdrs::Otdr::DataType::OtdrScan>();
        c->parent = this;
        otdr_scan.append(c);
        return c;
    }

    if(child_yang_name == "otdr-status")
    {
        auto c = std::make_shared<HwModule::Otdrs::Otdr::DataType::OtdrStatus>();
        c->parent = this;
        otdr_status.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::Otdrs::Otdr::DataType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otdr_item != nullptr)
    {
        children["otdr-item"] = otdr_item;
    }

    count = 0;
    for (auto c : otdr_scan.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : otdr_status.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::Otdrs::Otdr::DataType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otdr-data-type")
    {
        otdr_data_type = value;
        otdr_data_type.value_namespace = name_space;
        otdr_data_type.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Otdrs::Otdr::DataType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otdr-data-type")
    {
        otdr_data_type.yfilter = yfilter;
    }
}

bool HwModule::Otdrs::Otdr::DataType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-item" || name == "otdr-scan" || name == "otdr-status" || name == "otdr-data-type")
        return true;
    return false;
}

HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrItem()
    :
    otdr_number{YType::uint8, "otdr-number"},
    direction{YType::enumeration, "direction"},
    timestamp{YType::str, "timestamp"},
    sor_file{YType::str, "sor-file"},
    sor_directory{YType::str, "sor-directory"},
    scan_mode{YType::enumeration, "scan-mode"},
    distance{YType::str, "distance"},
    total_orl{YType::str, "total-orl"}
        ,
    otdr_event(this, {})
{

    yang_name = "otdr-item"; yang_parent_name = "data-type"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Otdrs::Otdr::DataType::OtdrItem::~OtdrItem()
{
}

bool HwModule::Otdrs::Otdr::DataType::OtdrItem::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<otdr_event.len(); index++)
    {
        if(otdr_event[index]->has_data())
            return true;
    }
    return otdr_number.is_set
	|| direction.is_set
	|| timestamp.is_set
	|| sor_file.is_set
	|| sor_directory.is_set
	|| scan_mode.is_set
	|| distance.is_set
	|| total_orl.is_set;
}

bool HwModule::Otdrs::Otdr::DataType::OtdrItem::has_operation() const
{
    for (std::size_t index=0; index<otdr_event.len(); index++)
    {
        if(otdr_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(otdr_number.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sor_file.yfilter)
	|| ydk::is_set(sor_directory.yfilter)
	|| ydk::is_set(scan_mode.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(total_orl.yfilter);
}

std::string HwModule::Otdrs::Otdr::DataType::OtdrItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Otdrs::Otdr::DataType::OtdrItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otdr_number.is_set || is_set(otdr_number.yfilter)) leaf_name_data.push_back(otdr_number.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sor_file.is_set || is_set(sor_file.yfilter)) leaf_name_data.push_back(sor_file.get_name_leafdata());
    if (sor_directory.is_set || is_set(sor_directory.yfilter)) leaf_name_data.push_back(sor_directory.get_name_leafdata());
    if (scan_mode.is_set || is_set(scan_mode.yfilter)) leaf_name_data.push_back(scan_mode.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (total_orl.is_set || is_set(total_orl.yfilter)) leaf_name_data.push_back(total_orl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::Otdrs::Otdr::DataType::OtdrItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otdr-event")
    {
        auto c = std::make_shared<HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent>();
        c->parent = this;
        otdr_event.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::Otdrs::Otdr::DataType::OtdrItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : otdr_event.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::Otdrs::Otdr::DataType::OtdrItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otdr-number")
    {
        otdr_number = value;
        otdr_number.value_namespace = name_space;
        otdr_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sor-file")
    {
        sor_file = value;
        sor_file.value_namespace = name_space;
        sor_file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sor-directory")
    {
        sor_directory = value;
        sor_directory.value_namespace = name_space;
        sor_directory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-mode")
    {
        scan_mode = value;
        scan_mode.value_namespace = name_space;
        scan_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-orl")
    {
        total_orl = value;
        total_orl.value_namespace = name_space;
        total_orl.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Otdrs::Otdr::DataType::OtdrItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otdr-number")
    {
        otdr_number.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "sor-file")
    {
        sor_file.yfilter = yfilter;
    }
    if(value_path == "sor-directory")
    {
        sor_directory.yfilter = yfilter;
    }
    if(value_path == "scan-mode")
    {
        scan_mode.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "total-orl")
    {
        total_orl.yfilter = yfilter;
    }
}

bool HwModule::Otdrs::Otdr::DataType::OtdrItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-event" || name == "otdr-number" || name == "direction" || name == "timestamp" || name == "sor-file" || name == "sor-directory" || name == "scan-mode" || name == "distance" || name == "total-orl")
        return true;
    return false;
}

HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::OtdrEvent()
    :
    event_id{YType::uint16, "event-id"},
    type{YType::enumeration, "type"},
    position{YType::str, "position"},
    accuracy{YType::str, "accuracy"},
    magnitude{YType::str, "magnitude"},
    attenuation{YType::str, "attenuation"},
    eof_confidence{YType::uint32, "eof-confidence"},
    threshold_crossing{YType::uint8, "threshold-crossing"}
{

    yang_name = "otdr-event"; yang_parent_name = "otdr-item"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::~OtdrEvent()
{
}

bool HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::has_data() const
{
    if (is_presence_container) return true;
    return event_id.is_set
	|| type.is_set
	|| position.is_set
	|| accuracy.is_set
	|| magnitude.is_set
	|| attenuation.is_set
	|| eof_confidence.is_set
	|| threshold_crossing.is_set;
}

bool HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(position.yfilter)
	|| ydk::is_set(accuracy.yfilter)
	|| ydk::is_set(magnitude.yfilter)
	|| ydk::is_set(attenuation.yfilter)
	|| ydk::is_set(eof_confidence.yfilter)
	|| ydk::is_set(threshold_crossing.yfilter);
}

std::string HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (position.is_set || is_set(position.yfilter)) leaf_name_data.push_back(position.get_name_leafdata());
    if (accuracy.is_set || is_set(accuracy.yfilter)) leaf_name_data.push_back(accuracy.get_name_leafdata());
    if (magnitude.is_set || is_set(magnitude.yfilter)) leaf_name_data.push_back(magnitude.get_name_leafdata());
    if (attenuation.is_set || is_set(attenuation.yfilter)) leaf_name_data.push_back(attenuation.get_name_leafdata());
    if (eof_confidence.is_set || is_set(eof_confidence.yfilter)) leaf_name_data.push_back(eof_confidence.get_name_leafdata());
    if (threshold_crossing.is_set || is_set(threshold_crossing.yfilter)) leaf_name_data.push_back(threshold_crossing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "position")
    {
        position = value;
        position.value_namespace = name_space;
        position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accuracy")
    {
        accuracy = value;
        accuracy.value_namespace = name_space;
        accuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "magnitude")
    {
        magnitude = value;
        magnitude.value_namespace = name_space;
        magnitude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attenuation")
    {
        attenuation = value;
        attenuation.value_namespace = name_space;
        attenuation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eof-confidence")
    {
        eof_confidence = value;
        eof_confidence.value_namespace = name_space;
        eof_confidence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-crossing")
    {
        threshold_crossing = value;
        threshold_crossing.value_namespace = name_space;
        threshold_crossing.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "position")
    {
        position.yfilter = yfilter;
    }
    if(value_path == "accuracy")
    {
        accuracy.yfilter = yfilter;
    }
    if(value_path == "magnitude")
    {
        magnitude.yfilter = yfilter;
    }
    if(value_path == "attenuation")
    {
        attenuation.yfilter = yfilter;
    }
    if(value_path == "eof-confidence")
    {
        eof_confidence.yfilter = yfilter;
    }
    if(value_path == "threshold-crossing")
    {
        threshold_crossing.yfilter = yfilter;
    }
}

bool HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-id" || name == "type" || name == "position" || name == "accuracy" || name == "magnitude" || name == "attenuation" || name == "eof-confidence" || name == "threshold-crossing")
        return true;
    return false;
}

HwModule::Otdrs::Otdr::DataType::OtdrScan::OtdrScan()
    :
    index_{YType::uint16, "index"},
    otdr_number{YType::uint8, "otdr-number"},
    direction{YType::enumeration, "direction"},
    scan_mode{YType::enumeration, "scan-mode"},
    timestamp{YType::str, "timestamp"},
    sor_file{YType::str, "sor-file"}
{

    yang_name = "otdr-scan"; yang_parent_name = "data-type"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Otdrs::Otdr::DataType::OtdrScan::~OtdrScan()
{
}

bool HwModule::Otdrs::Otdr::DataType::OtdrScan::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| otdr_number.is_set
	|| direction.is_set
	|| scan_mode.is_set
	|| timestamp.is_set
	|| sor_file.is_set;
}

bool HwModule::Otdrs::Otdr::DataType::OtdrScan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(otdr_number.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(scan_mode.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(sor_file.yfilter);
}

std::string HwModule::Otdrs::Otdr::DataType::OtdrScan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-scan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Otdrs::Otdr::DataType::OtdrScan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (otdr_number.is_set || is_set(otdr_number.yfilter)) leaf_name_data.push_back(otdr_number.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (scan_mode.is_set || is_set(scan_mode.yfilter)) leaf_name_data.push_back(scan_mode.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (sor_file.is_set || is_set(sor_file.yfilter)) leaf_name_data.push_back(sor_file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::Otdrs::Otdr::DataType::OtdrScan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::Otdrs::Otdr::DataType::OtdrScan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::Otdrs::Otdr::DataType::OtdrScan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otdr-number")
    {
        otdr_number = value;
        otdr_number.value_namespace = name_space;
        otdr_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-mode")
    {
        scan_mode = value;
        scan_mode.value_namespace = name_space;
        scan_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sor-file")
    {
        sor_file = value;
        sor_file.value_namespace = name_space;
        sor_file.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Otdrs::Otdr::DataType::OtdrScan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "otdr-number")
    {
        otdr_number.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "scan-mode")
    {
        scan_mode.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "sor-file")
    {
        sor_file.yfilter = yfilter;
    }
}

bool HwModule::Otdrs::Otdr::DataType::OtdrScan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "otdr-number" || name == "direction" || name == "scan-mode" || name == "timestamp" || name == "sor-file")
        return true;
    return false;
}

HwModule::Otdrs::Otdr::DataType::OtdrStatus::OtdrStatus()
    :
    otdr_id{YType::uint8, "otdr-id"},
    direction{YType::enumeration, "direction"},
    timestamp{YType::str, "timestamp"},
    training_status{YType::enumeration, "training-status"},
    measurement_status{YType::enumeration, "measurement-status"},
    progress_pc{YType::uint16, "progress-pc"}
{

    yang_name = "otdr-status"; yang_parent_name = "data-type"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::Otdrs::Otdr::DataType::OtdrStatus::~OtdrStatus()
{
}

bool HwModule::Otdrs::Otdr::DataType::OtdrStatus::has_data() const
{
    if (is_presence_container) return true;
    return otdr_id.is_set
	|| direction.is_set
	|| timestamp.is_set
	|| training_status.is_set
	|| measurement_status.is_set
	|| progress_pc.is_set;
}

bool HwModule::Otdrs::Otdr::DataType::OtdrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otdr_id.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(training_status.yfilter)
	|| ydk::is_set(measurement_status.yfilter)
	|| ydk::is_set(progress_pc.yfilter);
}

std::string HwModule::Otdrs::Otdr::DataType::OtdrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otdr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::Otdrs::Otdr::DataType::OtdrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otdr_id.is_set || is_set(otdr_id.yfilter)) leaf_name_data.push_back(otdr_id.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (training_status.is_set || is_set(training_status.yfilter)) leaf_name_data.push_back(training_status.get_name_leafdata());
    if (measurement_status.is_set || is_set(measurement_status.yfilter)) leaf_name_data.push_back(measurement_status.get_name_leafdata());
    if (progress_pc.is_set || is_set(progress_pc.yfilter)) leaf_name_data.push_back(progress_pc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::Otdrs::Otdr::DataType::OtdrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::Otdrs::Otdr::DataType::OtdrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::Otdrs::Otdr::DataType::OtdrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "otdr-id")
    {
        otdr_id = value;
        otdr_id.value_namespace = name_space;
        otdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "training-status")
    {
        training_status = value;
        training_status.value_namespace = name_space;
        training_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "measurement-status")
    {
        measurement_status = value;
        measurement_status.value_namespace = name_space;
        measurement_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "progress-pc")
    {
        progress_pc = value;
        progress_pc.value_namespace = name_space;
        progress_pc.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::Otdrs::Otdr::DataType::OtdrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "otdr-id")
    {
        otdr_id.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "training-status")
    {
        training_status.yfilter = yfilter;
    }
    if(value_path == "measurement-status")
    {
        measurement_status.yfilter = yfilter;
    }
    if(value_path == "progress-pc")
    {
        progress_pc.yfilter = yfilter;
    }
}

bool HwModule::Otdrs::Otdr::DataType::OtdrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otdr-id" || name == "direction" || name == "timestamp" || name == "training-status" || name == "measurement-status" || name == "progress-pc")
        return true;
    return false;
}

const Enum::YLeaf Direction::direction_tx {0, "direction-tx"};
const Enum::YLeaf Direction::direction_rx {1, "direction-rx"};

const Enum::YLeaf OtdrEvent::otdr_event_type_loss {1, "otdr-event-type-loss"};
const Enum::YLeaf OtdrEvent::otdr_event_type_reflect_ion {2, "otdr-event-type-reflect-ion"};
const Enum::YLeaf OtdrEvent::otdr_event_type_loss_and_reflect_ion {3, "otdr-event-type-loss-and-reflect-ion"};
const Enum::YLeaf OtdrEvent::otdr_event_type_end_of_fiber {4, "otdr-event-type-end-of-fiber"};

const Enum::YLeaf OtsOtdrDataTypeDetails::scan_details {1, "scan-details"};
const Enum::YLeaf OtsOtdrDataTypeDetails::base_line_details {2, "base-line-details"};

const Enum::YLeaf OtdrScanMode::otdr_scan_auto {0, "otdr-scan-auto"};
const Enum::YLeaf OtdrScanMode::otdr_scan_expert {1, "otdr-scan-expert"};

const Enum::YLeaf OtdrStatus::otdr_status_unknown {0, "otdr-status-unknown"};
const Enum::YLeaf OtdrStatus::otdr_status_ok {1, "otdr-status-ok"};
const Enum::YLeaf OtdrStatus::otdr_status_orl_progress {2, "otdr-status-orl-progress"};
const Enum::YLeaf OtdrStatus::otdr_status_otdr_progress {3, "otdr-status-otdr-progress"};
const Enum::YLeaf OtdrStatus::otdr_status_progress {4, "otdr-status-progress"};
const Enum::YLeaf OtdrStatus::otdr_status_failure {5, "otdr-status-failure"};
const Enum::YLeaf OtdrStatus::otdr_status_aborted {6, "otdr-status-aborted"};

const Enum::YLeaf OtsOtdrData::status {0, "status"};
const Enum::YLeaf OtsOtdrData::scan {1, "scan"};
const Enum::YLeaf OtsOtdrData::base_line {2, "base-line"};


}
}

