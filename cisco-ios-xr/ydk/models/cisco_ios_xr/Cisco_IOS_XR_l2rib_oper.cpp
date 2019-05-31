
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2rib_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2rib_oper {

L2rib::L2rib()
    :
    producers_details(std::make_shared<L2rib::ProducersDetails>())
    , summary(std::make_shared<L2rib::Summary>())
    , producers(std::make_shared<L2rib::Producers>())
    , clients(std::make_shared<L2rib::Clients>())
    , evis_xr(std::make_shared<L2rib::EvisXr>())
    , clients_details(std::make_shared<L2rib::ClientsDetails>())
    , evi_child_tables(std::make_shared<L2rib::EviChildTables>())
    , evis(std::make_shared<L2rib::Evis>())
{
    producers_details->parent = this;
    summary->parent = this;
    producers->parent = this;
    clients->parent = this;
    evis_xr->parent = this;
    clients_details->parent = this;
    evi_child_tables->parent = this;
    evis->parent = this;

    yang_name = "l2rib"; yang_parent_name = "Cisco-IOS-XR-l2rib-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

L2rib::~L2rib()
{
}

bool L2rib::has_data() const
{
    if (is_presence_container) return true;
    return (producers_details !=  nullptr && producers_details->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (producers !=  nullptr && producers->has_data())
	|| (clients !=  nullptr && clients->has_data())
	|| (evis_xr !=  nullptr && evis_xr->has_data())
	|| (clients_details !=  nullptr && clients_details->has_data())
	|| (evi_child_tables !=  nullptr && evi_child_tables->has_data())
	|| (evis !=  nullptr && evis->has_data());
}

bool L2rib::has_operation() const
{
    return is_set(yfilter)
	|| (producers_details !=  nullptr && producers_details->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (producers !=  nullptr && producers->has_operation())
	|| (clients !=  nullptr && clients->has_operation())
	|| (evis_xr !=  nullptr && evis_xr->has_operation())
	|| (clients_details !=  nullptr && clients_details->has_operation())
	|| (evi_child_tables !=  nullptr && evi_child_tables->has_operation())
	|| (evis !=  nullptr && evis->has_operation());
}

std::string L2rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "producers-details")
    {
        if(producers_details == nullptr)
        {
            producers_details = std::make_shared<L2rib::ProducersDetails>();
        }
        return producers_details;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2rib::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "producers")
    {
        if(producers == nullptr)
        {
            producers = std::make_shared<L2rib::Producers>();
        }
        return producers;
    }

    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<L2rib::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "evis-xr")
    {
        if(evis_xr == nullptr)
        {
            evis_xr = std::make_shared<L2rib::EvisXr>();
        }
        return evis_xr;
    }

    if(child_yang_name == "clients-details")
    {
        if(clients_details == nullptr)
        {
            clients_details = std::make_shared<L2rib::ClientsDetails>();
        }
        return clients_details;
    }

    if(child_yang_name == "evi-child-tables")
    {
        if(evi_child_tables == nullptr)
        {
            evi_child_tables = std::make_shared<L2rib::EviChildTables>();
        }
        return evi_child_tables;
    }

    if(child_yang_name == "evis")
    {
        if(evis == nullptr)
        {
            evis = std::make_shared<L2rib::Evis>();
        }
        return evis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(producers_details != nullptr)
    {
        _children["producers-details"] = producers_details;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(producers != nullptr)
    {
        _children["producers"] = producers;
    }

    if(clients != nullptr)
    {
        _children["clients"] = clients;
    }

    if(evis_xr != nullptr)
    {
        _children["evis-xr"] = evis_xr;
    }

    if(clients_details != nullptr)
    {
        _children["clients-details"] = clients_details;
    }

    if(evi_child_tables != nullptr)
    {
        _children["evi-child-tables"] = evi_child_tables;
    }

    if(evis != nullptr)
    {
        _children["evis"] = evis;
    }

    return _children;
}

void L2rib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> L2rib::clone_ptr() const
{
    return std::make_shared<L2rib>();
}

std::string L2rib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2rib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2rib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2rib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2rib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producers-details" || name == "summary" || name == "producers" || name == "clients" || name == "evis-xr" || name == "clients-details" || name == "evi-child-tables" || name == "evis")
        return true;
    return false;
}

L2rib::ProducersDetails::ProducersDetails()
    :
    producers_detail(this, {})
{

    yang_name = "producers-details"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ProducersDetails::~ProducersDetails()
{
}

bool L2rib::ProducersDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<producers_detail.len(); index++)
    {
        if(producers_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::ProducersDetails::has_operation() const
{
    for (std::size_t index=0; index<producers_detail.len(); index++)
    {
        if(producers_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::ProducersDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ProducersDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producers-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ProducersDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ProducersDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "producers-detail")
    {
        auto ent_ = std::make_shared<L2rib::ProducersDetails::ProducersDetail>();
        ent_->parent = this;
        producers_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ProducersDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : producers_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::ProducersDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::ProducersDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::ProducersDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producers-detail")
        return true;
    return false;
}

L2rib::ProducersDetails::ProducersDetail::ProducersDetail()
    :
    object_id{YType::uint32, "object-id"},
    product_id{YType::uint32, "product-id"},
    last_update_timestamp{YType::uint64, "last-update-timestamp"}
        ,
    producer(std::make_shared<L2rib::ProducersDetails::ProducersDetail::Producer>())
    , statistics(std::make_shared<L2rib::ProducersDetails::ProducersDetail::Statistics>())
{
    producer->parent = this;
    statistics->parent = this;

    yang_name = "producers-detail"; yang_parent_name = "producers-details"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ProducersDetails::ProducersDetail::~ProducersDetail()
{
}

bool L2rib::ProducersDetails::ProducersDetail::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| product_id.is_set
	|| last_update_timestamp.is_set
	|| (producer !=  nullptr && producer->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2rib::ProducersDetails::ProducersDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(product_id.yfilter)
	|| ydk::is_set(last_update_timestamp.yfilter)
	|| (producer !=  nullptr && producer->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2rib::ProducersDetails::ProducersDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/producers-details/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ProducersDetails::ProducersDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producers-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ProducersDetails::ProducersDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.yfilter)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (last_update_timestamp.is_set || is_set(last_update_timestamp.yfilter)) leaf_name_data.push_back(last_update_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ProducersDetails::ProducersDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "producer")
    {
        if(producer == nullptr)
        {
            producer = std::make_shared<L2rib::ProducersDetails::ProducersDetail::Producer>();
        }
        return producer;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2rib::ProducersDetails::ProducersDetail::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ProducersDetails::ProducersDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(producer != nullptr)
    {
        _children["producer"] = producer;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void L2rib::ProducersDetails::ProducersDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "product-id")
    {
        product_id = value;
        product_id.value_namespace = name_space;
        product_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp = value;
        last_update_timestamp.value_namespace = name_space;
        last_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ProducersDetails::ProducersDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "product-id")
    {
        product_id.yfilter = yfilter;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp.yfilter = yfilter;
    }
}

bool L2rib::ProducersDetails::ProducersDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producer" || name == "statistics" || name == "object-id" || name == "product-id" || name == "last-update-timestamp")
        return true;
    return false;
}

L2rib::ProducersDetails::ProducersDetail::Producer::Producer()
    :
    client_id{YType::uint32, "client-id"},
    object_type{YType::enumeration, "object-type"},
    producer_id{YType::enumeration, "producer-id"},
    producer_name{YType::str, "producer-name"},
    admin_distance{YType::uint32, "admin-distance"},
    purge_time{YType::uint32, "purge-time"},
    state{YType::enumeration, "state"}
{

    yang_name = "producer"; yang_parent_name = "producers-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ProducersDetails::ProducersDetail::Producer::~Producer()
{
}

bool L2rib::ProducersDetails::ProducersDetail::Producer::has_data() const
{
    if (is_presence_container) return true;
    return client_id.is_set
	|| object_type.is_set
	|| producer_id.is_set
	|| producer_name.is_set
	|| admin_distance.is_set
	|| purge_time.is_set
	|| state.is_set;
}

bool L2rib::ProducersDetails::ProducersDetail::Producer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(producer_name.yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| ydk::is_set(purge_time.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string L2rib::ProducersDetails::ProducersDetail::Producer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/producers-details/producers-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ProducersDetails::ProducersDetail::Producer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ProducersDetails::ProducersDetail::Producer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (producer_name.is_set || is_set(producer_name.yfilter)) leaf_name_data.push_back(producer_name.get_name_leafdata());
    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ProducersDetails::ProducersDetail::Producer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ProducersDetails::ProducersDetail::Producer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::ProducersDetails::ProducersDetail::Producer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-name")
    {
        producer_name = value;
        producer_name.value_namespace = name_space;
        producer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ProducersDetails::ProducersDetail::Producer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "producer-name")
    {
        producer_name.yfilter = yfilter;
    }
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool L2rib::ProducersDetails::ProducersDetail::Producer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "object-type" || name == "producer-id" || name == "producer-name" || name == "admin-distance" || name == "purge-time" || name == "state")
        return true;
    return false;
}

L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics()
    :
    producer_id{YType::enumeration, "producer-id"},
    producer_name{YType::str, "producer-name"}
        ,
    statistics(std::make_shared<L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_>())
{
    statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "producers-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ProducersDetails::ProducersDetail::Statistics::~Statistics()
{
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return producer_id.is_set
	|| producer_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(producer_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2rib::ProducersDetails::ProducersDetail::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/producers-details/producers-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ProducersDetails::ProducersDetail::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ProducersDetails::ProducersDetail::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (producer_name.is_set || is_set(producer_name.yfilter)) leaf_name_data.push_back(producer_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ProducersDetails::ProducersDetail::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ProducersDetails::ProducersDetail::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void L2rib::ProducersDetails::ProducersDetail::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-name")
    {
        producer_name = value;
        producer_name.value_namespace = name_space;
        producer_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ProducersDetails::ProducersDetail::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "producer-name")
    {
        producer_name.yfilter = yfilter;
    }
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "producer-id" || name == "producer-name")
        return true;
    return false;
}

L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::Statistics_()
    :
    memory_size{YType::uint32, "memory-size"},
    object_count{YType::uint32, "object-count"},
    endof_interval_ts{YType::uint64, "endof-interval-ts"}
        ,
    extended_counter(this, {})
{

    yang_name = "statistics"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::~Statistics_()
{
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_counter.len(); index++)
    {
        if(extended_counter[index]->has_data())
            return true;
    }
    return memory_size.is_set
	|| object_count.is_set
	|| endof_interval_ts.is_set;
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::has_operation() const
{
    for (std::size_t index=0; index<extended_counter.len(); index++)
    {
        if(extended_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(object_count.yfilter)
	|| ydk::is_set(endof_interval_ts.yfilter);
}

std::string L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/producers-details/producers-detail/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (object_count.is_set || is_set(object_count.yfilter)) leaf_name_data.push_back(object_count.get_name_leafdata());
    if (endof_interval_ts.is_set || is_set(endof_interval_ts.yfilter)) leaf_name_data.push_back(endof_interval_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-counter")
    {
        auto ent_ = std::make_shared<L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter>();
        ent_->parent = this;
        extended_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-count")
    {
        object_count = value;
        object_count.value_namespace = name_space;
        object_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endof-interval-ts")
    {
        endof_interval_ts = value;
        endof_interval_ts.value_namespace = name_space;
        endof_interval_ts.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "object-count")
    {
        object_count.yfilter = yfilter;
    }
    if(value_path == "endof-interval-ts")
    {
        endof_interval_ts.yfilter = yfilter;
    }
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-counter" || name == "memory-size" || name == "object-count" || name == "endof-interval-ts")
        return true;
    return false;
}

L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::ExtendedCounter()
    :
    counter_type{YType::uint8, "counter-type"},
    counter_name{YType::str, "counter-name"},
    l2rb_first_event_ts{YType::uint64, "l2rb-first-event-ts"},
    l2rb_last_event_ts{YType::uint64, "l2rb-last-event-ts"},
    l2rb_interval_event_count{YType::uint32, "l2rb-interval-event-count"},
    l2rb_total_event_count{YType::uint32, "l2rb-total-event-count"}
{

    yang_name = "extended-counter"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::~ExtendedCounter()
{
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::has_data() const
{
    if (is_presence_container) return true;
    return counter_type.is_set
	|| counter_name.is_set
	|| l2rb_first_event_ts.is_set
	|| l2rb_last_event_ts.is_set
	|| l2rb_interval_event_count.is_set
	|| l2rb_total_event_count.is_set;
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_type.yfilter)
	|| ydk::is_set(counter_name.yfilter)
	|| ydk::is_set(l2rb_first_event_ts.yfilter)
	|| ydk::is_set(l2rb_last_event_ts.yfilter)
	|| ydk::is_set(l2rb_interval_event_count.yfilter)
	|| ydk::is_set(l2rb_total_event_count.yfilter);
}

std::string L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/producers-details/producers-detail/statistics/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_type.is_set || is_set(counter_type.yfilter)) leaf_name_data.push_back(counter_type.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (l2rb_first_event_ts.is_set || is_set(l2rb_first_event_ts.yfilter)) leaf_name_data.push_back(l2rb_first_event_ts.get_name_leafdata());
    if (l2rb_last_event_ts.is_set || is_set(l2rb_last_event_ts.yfilter)) leaf_name_data.push_back(l2rb_last_event_ts.get_name_leafdata());
    if (l2rb_interval_event_count.is_set || is_set(l2rb_interval_event_count.yfilter)) leaf_name_data.push_back(l2rb_interval_event_count.get_name_leafdata());
    if (l2rb_total_event_count.is_set || is_set(l2rb_total_event_count.yfilter)) leaf_name_data.push_back(l2rb_total_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-type")
    {
        counter_type = value;
        counter_type.value_namespace = name_space;
        counter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-first-event-ts")
    {
        l2rb_first_event_ts = value;
        l2rb_first_event_ts.value_namespace = name_space;
        l2rb_first_event_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-last-event-ts")
    {
        l2rb_last_event_ts = value;
        l2rb_last_event_ts.value_namespace = name_space;
        l2rb_last_event_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-interval-event-count")
    {
        l2rb_interval_event_count = value;
        l2rb_interval_event_count.value_namespace = name_space;
        l2rb_interval_event_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-total-event-count")
    {
        l2rb_total_event_count = value;
        l2rb_total_event_count.value_namespace = name_space;
        l2rb_total_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-type")
    {
        counter_type.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
    if(value_path == "l2rb-first-event-ts")
    {
        l2rb_first_event_ts.yfilter = yfilter;
    }
    if(value_path == "l2rb-last-event-ts")
    {
        l2rb_last_event_ts.yfilter = yfilter;
    }
    if(value_path == "l2rb-interval-event-count")
    {
        l2rb_interval_event_count.yfilter = yfilter;
    }
    if(value_path == "l2rb-total-event-count")
    {
        l2rb_total_event_count.yfilter = yfilter;
    }
}

bool L2rib::ProducersDetails::ProducersDetail::Statistics::Statistics_::ExtendedCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-type" || name == "counter-name" || name == "l2rb-first-event-ts" || name == "l2rb-last-event-ts" || name == "l2rb-interval-event-count" || name == "l2rb-total-event-count")
        return true;
    return false;
}

L2rib::Summary::Summary()
    :
    converged_tables_count{YType::uint32, "converged-tables-count"},
    total_memory{YType::uint32, "total-memory"}
        ,
    mac_dd_params(std::make_shared<L2rib::Summary::MacDdParams>())
    , ipv4_dd_params(std::make_shared<L2rib::Summary::Ipv4DdParams>())
    , ipv6_dd_params(std::make_shared<L2rib::Summary::Ipv6DdParams>())
    , table_summary(this, {})
{
    mac_dd_params->parent = this;
    ipv4_dd_params->parent = this;
    ipv6_dd_params->parent = this;

    yang_name = "summary"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::~Summary()
{
}

bool L2rib::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<table_summary.len(); index++)
    {
        if(table_summary[index]->has_data())
            return true;
    }
    return converged_tables_count.is_set
	|| total_memory.is_set
	|| (mac_dd_params !=  nullptr && mac_dd_params->has_data())
	|| (ipv4_dd_params !=  nullptr && ipv4_dd_params->has_data())
	|| (ipv6_dd_params !=  nullptr && ipv6_dd_params->has_data());
}

bool L2rib::Summary::has_operation() const
{
    for (std::size_t index=0; index<table_summary.len(); index++)
    {
        if(table_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(converged_tables_count.yfilter)
	|| ydk::is_set(total_memory.yfilter)
	|| (mac_dd_params !=  nullptr && mac_dd_params->has_operation())
	|| (ipv4_dd_params !=  nullptr && ipv4_dd_params->has_operation())
	|| (ipv6_dd_params !=  nullptr && ipv6_dd_params->has_operation());
}

std::string L2rib::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (converged_tables_count.is_set || is_set(converged_tables_count.yfilter)) leaf_name_data.push_back(converged_tables_count.get_name_leafdata());
    if (total_memory.is_set || is_set(total_memory.yfilter)) leaf_name_data.push_back(total_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-dd-params")
    {
        if(mac_dd_params == nullptr)
        {
            mac_dd_params = std::make_shared<L2rib::Summary::MacDdParams>();
        }
        return mac_dd_params;
    }

    if(child_yang_name == "ipv4-dd-params")
    {
        if(ipv4_dd_params == nullptr)
        {
            ipv4_dd_params = std::make_shared<L2rib::Summary::Ipv4DdParams>();
        }
        return ipv4_dd_params;
    }

    if(child_yang_name == "ipv6-dd-params")
    {
        if(ipv6_dd_params == nullptr)
        {
            ipv6_dd_params = std::make_shared<L2rib::Summary::Ipv6DdParams>();
        }
        return ipv6_dd_params;
    }

    if(child_yang_name == "table-summary")
    {
        auto ent_ = std::make_shared<L2rib::Summary::TableSummary>();
        ent_->parent = this;
        table_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_dd_params != nullptr)
    {
        _children["mac-dd-params"] = mac_dd_params;
    }

    if(ipv4_dd_params != nullptr)
    {
        _children["ipv4-dd-params"] = ipv4_dd_params;
    }

    if(ipv6_dd_params != nullptr)
    {
        _children["ipv6-dd-params"] = ipv6_dd_params;
    }

    count_ = 0;
    for (auto ent_ : table_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "converged-tables-count")
    {
        converged_tables_count = value;
        converged_tables_count.value_namespace = name_space;
        converged_tables_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-memory")
    {
        total_memory = value;
        total_memory.value_namespace = name_space;
        total_memory.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "converged-tables-count")
    {
        converged_tables_count.yfilter = yfilter;
    }
    if(value_path == "total-memory")
    {
        total_memory.yfilter = yfilter;
    }
}

bool L2rib::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-dd-params" || name == "ipv4-dd-params" || name == "ipv6-dd-params" || name == "table-summary" || name == "converged-tables-count" || name == "total-memory")
        return true;
    return false;
}

L2rib::Summary::MacDdParams::MacDdParams()
    :
    dd_params_disable{YType::boolean, "dd-params-disable"},
    dd_params_freeze_time{YType::uint16, "dd-params-freeze-time"},
    dd_params_retry_count{YType::uint16, "dd-params-retry-count"},
    dd_params_move_count{YType::uint32, "dd-params-move-count"},
    dd_params_move_interval{YType::uint32, "dd-params-move-interval"}
{

    yang_name = "mac-dd-params"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::MacDdParams::~MacDdParams()
{
}

bool L2rib::Summary::MacDdParams::has_data() const
{
    if (is_presence_container) return true;
    return dd_params_disable.is_set
	|| dd_params_freeze_time.is_set
	|| dd_params_retry_count.is_set
	|| dd_params_move_count.is_set
	|| dd_params_move_interval.is_set;
}

bool L2rib::Summary::MacDdParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dd_params_disable.yfilter)
	|| ydk::is_set(dd_params_freeze_time.yfilter)
	|| ydk::is_set(dd_params_retry_count.yfilter)
	|| ydk::is_set(dd_params_move_count.yfilter)
	|| ydk::is_set(dd_params_move_interval.yfilter);
}

std::string L2rib::Summary::MacDdParams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::MacDdParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-dd-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::MacDdParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dd_params_disable.is_set || is_set(dd_params_disable.yfilter)) leaf_name_data.push_back(dd_params_disable.get_name_leafdata());
    if (dd_params_freeze_time.is_set || is_set(dd_params_freeze_time.yfilter)) leaf_name_data.push_back(dd_params_freeze_time.get_name_leafdata());
    if (dd_params_retry_count.is_set || is_set(dd_params_retry_count.yfilter)) leaf_name_data.push_back(dd_params_retry_count.get_name_leafdata());
    if (dd_params_move_count.is_set || is_set(dd_params_move_count.yfilter)) leaf_name_data.push_back(dd_params_move_count.get_name_leafdata());
    if (dd_params_move_interval.is_set || is_set(dd_params_move_interval.yfilter)) leaf_name_data.push_back(dd_params_move_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::MacDdParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::MacDdParams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::Summary::MacDdParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dd-params-disable")
    {
        dd_params_disable = value;
        dd_params_disable.value_namespace = name_space;
        dd_params_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-freeze-time")
    {
        dd_params_freeze_time = value;
        dd_params_freeze_time.value_namespace = name_space;
        dd_params_freeze_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-retry-count")
    {
        dd_params_retry_count = value;
        dd_params_retry_count.value_namespace = name_space;
        dd_params_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-move-count")
    {
        dd_params_move_count = value;
        dd_params_move_count.value_namespace = name_space;
        dd_params_move_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-move-interval")
    {
        dd_params_move_interval = value;
        dd_params_move_interval.value_namespace = name_space;
        dd_params_move_interval.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::MacDdParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dd-params-disable")
    {
        dd_params_disable.yfilter = yfilter;
    }
    if(value_path == "dd-params-freeze-time")
    {
        dd_params_freeze_time.yfilter = yfilter;
    }
    if(value_path == "dd-params-retry-count")
    {
        dd_params_retry_count.yfilter = yfilter;
    }
    if(value_path == "dd-params-move-count")
    {
        dd_params_move_count.yfilter = yfilter;
    }
    if(value_path == "dd-params-move-interval")
    {
        dd_params_move_interval.yfilter = yfilter;
    }
}

bool L2rib::Summary::MacDdParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dd-params-disable" || name == "dd-params-freeze-time" || name == "dd-params-retry-count" || name == "dd-params-move-count" || name == "dd-params-move-interval")
        return true;
    return false;
}

L2rib::Summary::Ipv4DdParams::Ipv4DdParams()
    :
    dd_params_disable{YType::boolean, "dd-params-disable"},
    dd_params_freeze_time{YType::uint16, "dd-params-freeze-time"},
    dd_params_retry_count{YType::uint16, "dd-params-retry-count"},
    dd_params_move_count{YType::uint32, "dd-params-move-count"},
    dd_params_move_interval{YType::uint32, "dd-params-move-interval"}
{

    yang_name = "ipv4-dd-params"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::Ipv4DdParams::~Ipv4DdParams()
{
}

bool L2rib::Summary::Ipv4DdParams::has_data() const
{
    if (is_presence_container) return true;
    return dd_params_disable.is_set
	|| dd_params_freeze_time.is_set
	|| dd_params_retry_count.is_set
	|| dd_params_move_count.is_set
	|| dd_params_move_interval.is_set;
}

bool L2rib::Summary::Ipv4DdParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dd_params_disable.yfilter)
	|| ydk::is_set(dd_params_freeze_time.yfilter)
	|| ydk::is_set(dd_params_retry_count.yfilter)
	|| ydk::is_set(dd_params_move_count.yfilter)
	|| ydk::is_set(dd_params_move_interval.yfilter);
}

std::string L2rib::Summary::Ipv4DdParams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::Ipv4DdParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dd-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::Ipv4DdParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dd_params_disable.is_set || is_set(dd_params_disable.yfilter)) leaf_name_data.push_back(dd_params_disable.get_name_leafdata());
    if (dd_params_freeze_time.is_set || is_set(dd_params_freeze_time.yfilter)) leaf_name_data.push_back(dd_params_freeze_time.get_name_leafdata());
    if (dd_params_retry_count.is_set || is_set(dd_params_retry_count.yfilter)) leaf_name_data.push_back(dd_params_retry_count.get_name_leafdata());
    if (dd_params_move_count.is_set || is_set(dd_params_move_count.yfilter)) leaf_name_data.push_back(dd_params_move_count.get_name_leafdata());
    if (dd_params_move_interval.is_set || is_set(dd_params_move_interval.yfilter)) leaf_name_data.push_back(dd_params_move_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::Ipv4DdParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::Ipv4DdParams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::Summary::Ipv4DdParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dd-params-disable")
    {
        dd_params_disable = value;
        dd_params_disable.value_namespace = name_space;
        dd_params_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-freeze-time")
    {
        dd_params_freeze_time = value;
        dd_params_freeze_time.value_namespace = name_space;
        dd_params_freeze_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-retry-count")
    {
        dd_params_retry_count = value;
        dd_params_retry_count.value_namespace = name_space;
        dd_params_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-move-count")
    {
        dd_params_move_count = value;
        dd_params_move_count.value_namespace = name_space;
        dd_params_move_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-move-interval")
    {
        dd_params_move_interval = value;
        dd_params_move_interval.value_namespace = name_space;
        dd_params_move_interval.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::Ipv4DdParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dd-params-disable")
    {
        dd_params_disable.yfilter = yfilter;
    }
    if(value_path == "dd-params-freeze-time")
    {
        dd_params_freeze_time.yfilter = yfilter;
    }
    if(value_path == "dd-params-retry-count")
    {
        dd_params_retry_count.yfilter = yfilter;
    }
    if(value_path == "dd-params-move-count")
    {
        dd_params_move_count.yfilter = yfilter;
    }
    if(value_path == "dd-params-move-interval")
    {
        dd_params_move_interval.yfilter = yfilter;
    }
}

bool L2rib::Summary::Ipv4DdParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dd-params-disable" || name == "dd-params-freeze-time" || name == "dd-params-retry-count" || name == "dd-params-move-count" || name == "dd-params-move-interval")
        return true;
    return false;
}

L2rib::Summary::Ipv6DdParams::Ipv6DdParams()
    :
    dd_params_disable{YType::boolean, "dd-params-disable"},
    dd_params_freeze_time{YType::uint16, "dd-params-freeze-time"},
    dd_params_retry_count{YType::uint16, "dd-params-retry-count"},
    dd_params_move_count{YType::uint32, "dd-params-move-count"},
    dd_params_move_interval{YType::uint32, "dd-params-move-interval"}
{

    yang_name = "ipv6-dd-params"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::Ipv6DdParams::~Ipv6DdParams()
{
}

bool L2rib::Summary::Ipv6DdParams::has_data() const
{
    if (is_presence_container) return true;
    return dd_params_disable.is_set
	|| dd_params_freeze_time.is_set
	|| dd_params_retry_count.is_set
	|| dd_params_move_count.is_set
	|| dd_params_move_interval.is_set;
}

bool L2rib::Summary::Ipv6DdParams::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dd_params_disable.yfilter)
	|| ydk::is_set(dd_params_freeze_time.yfilter)
	|| ydk::is_set(dd_params_retry_count.yfilter)
	|| ydk::is_set(dd_params_move_count.yfilter)
	|| ydk::is_set(dd_params_move_interval.yfilter);
}

std::string L2rib::Summary::Ipv6DdParams::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::Ipv6DdParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dd-params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::Ipv6DdParams::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dd_params_disable.is_set || is_set(dd_params_disable.yfilter)) leaf_name_data.push_back(dd_params_disable.get_name_leafdata());
    if (dd_params_freeze_time.is_set || is_set(dd_params_freeze_time.yfilter)) leaf_name_data.push_back(dd_params_freeze_time.get_name_leafdata());
    if (dd_params_retry_count.is_set || is_set(dd_params_retry_count.yfilter)) leaf_name_data.push_back(dd_params_retry_count.get_name_leafdata());
    if (dd_params_move_count.is_set || is_set(dd_params_move_count.yfilter)) leaf_name_data.push_back(dd_params_move_count.get_name_leafdata());
    if (dd_params_move_interval.is_set || is_set(dd_params_move_interval.yfilter)) leaf_name_data.push_back(dd_params_move_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::Ipv6DdParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::Ipv6DdParams::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::Summary::Ipv6DdParams::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dd-params-disable")
    {
        dd_params_disable = value;
        dd_params_disable.value_namespace = name_space;
        dd_params_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-freeze-time")
    {
        dd_params_freeze_time = value;
        dd_params_freeze_time.value_namespace = name_space;
        dd_params_freeze_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-retry-count")
    {
        dd_params_retry_count = value;
        dd_params_retry_count.value_namespace = name_space;
        dd_params_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-move-count")
    {
        dd_params_move_count = value;
        dd_params_move_count.value_namespace = name_space;
        dd_params_move_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dd-params-move-interval")
    {
        dd_params_move_interval = value;
        dd_params_move_interval.value_namespace = name_space;
        dd_params_move_interval.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::Ipv6DdParams::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dd-params-disable")
    {
        dd_params_disable.yfilter = yfilter;
    }
    if(value_path == "dd-params-freeze-time")
    {
        dd_params_freeze_time.yfilter = yfilter;
    }
    if(value_path == "dd-params-retry-count")
    {
        dd_params_retry_count.yfilter = yfilter;
    }
    if(value_path == "dd-params-move-count")
    {
        dd_params_move_count.yfilter = yfilter;
    }
    if(value_path == "dd-params-move-interval")
    {
        dd_params_move_interval.yfilter = yfilter;
    }
}

bool L2rib::Summary::Ipv6DdParams::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dd-params-disable" || name == "dd-params-freeze-time" || name == "dd-params-retry-count" || name == "dd-params-move-count" || name == "dd-params-move-interval")
        return true;
    return false;
}

L2rib::Summary::TableSummary::TableSummary()
    :
    object_type{YType::enumeration, "object-type"},
    object_count{YType::uint32, "object-count"},
    table_memory{YType::uint32, "table-memory"}
        ,
    producer_stat(this, {})
{

    yang_name = "table-summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::TableSummary::~TableSummary()
{
}

bool L2rib::Summary::TableSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<producer_stat.len(); index++)
    {
        if(producer_stat[index]->has_data())
            return true;
    }
    return object_type.is_set
	|| object_count.is_set
	|| table_memory.is_set;
}

bool L2rib::Summary::TableSummary::has_operation() const
{
    for (std::size_t index=0; index<producer_stat.len(); index++)
    {
        if(producer_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(object_count.yfilter)
	|| ydk::is_set(table_memory.yfilter);
}

std::string L2rib::Summary::TableSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::TableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::TableSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (object_count.is_set || is_set(object_count.yfilter)) leaf_name_data.push_back(object_count.get_name_leafdata());
    if (table_memory.is_set || is_set(table_memory.yfilter)) leaf_name_data.push_back(table_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::TableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "producer-stat")
    {
        auto ent_ = std::make_shared<L2rib::Summary::TableSummary::ProducerStat>();
        ent_->parent = this;
        producer_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::TableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : producer_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::Summary::TableSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-count")
    {
        object_count = value;
        object_count.value_namespace = name_space;
        object_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-memory")
    {
        table_memory = value;
        table_memory.value_namespace = name_space;
        table_memory.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::TableSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "object-count")
    {
        object_count.yfilter = yfilter;
    }
    if(value_path == "table-memory")
    {
        table_memory.yfilter = yfilter;
    }
}

bool L2rib::Summary::TableSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producer-stat" || name == "object-type" || name == "object-count" || name == "table-memory")
        return true;
    return false;
}

L2rib::Summary::TableSummary::ProducerStat::ProducerStat()
    :
    producer_id{YType::enumeration, "producer-id"},
    producer_name{YType::str, "producer-name"}
        ,
    statistics(std::make_shared<L2rib::Summary::TableSummary::ProducerStat::Statistics>())
{
    statistics->parent = this;

    yang_name = "producer-stat"; yang_parent_name = "table-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::TableSummary::ProducerStat::~ProducerStat()
{
}

bool L2rib::Summary::TableSummary::ProducerStat::has_data() const
{
    if (is_presence_container) return true;
    return producer_id.is_set
	|| producer_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2rib::Summary::TableSummary::ProducerStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(producer_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2rib::Summary::TableSummary::ProducerStat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/summary/table-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::TableSummary::ProducerStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producer-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::TableSummary::ProducerStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (producer_name.is_set || is_set(producer_name.yfilter)) leaf_name_data.push_back(producer_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::TableSummary::ProducerStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2rib::Summary::TableSummary::ProducerStat::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::TableSummary::ProducerStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void L2rib::Summary::TableSummary::ProducerStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-name")
    {
        producer_name = value;
        producer_name.value_namespace = name_space;
        producer_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::TableSummary::ProducerStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "producer-name")
    {
        producer_name.yfilter = yfilter;
    }
}

bool L2rib::Summary::TableSummary::ProducerStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "producer-id" || name == "producer-name")
        return true;
    return false;
}

L2rib::Summary::TableSummary::ProducerStat::Statistics::Statistics()
    :
    memory_size{YType::uint32, "memory-size"},
    object_count{YType::uint32, "object-count"},
    endof_interval_ts{YType::uint64, "endof-interval-ts"}
        ,
    extended_counter(this, {})
{

    yang_name = "statistics"; yang_parent_name = "producer-stat"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::TableSummary::ProducerStat::Statistics::~Statistics()
{
}

bool L2rib::Summary::TableSummary::ProducerStat::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_counter.len(); index++)
    {
        if(extended_counter[index]->has_data())
            return true;
    }
    return memory_size.is_set
	|| object_count.is_set
	|| endof_interval_ts.is_set;
}

bool L2rib::Summary::TableSummary::ProducerStat::Statistics::has_operation() const
{
    for (std::size_t index=0; index<extended_counter.len(); index++)
    {
        if(extended_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(object_count.yfilter)
	|| ydk::is_set(endof_interval_ts.yfilter);
}

std::string L2rib::Summary::TableSummary::ProducerStat::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/summary/table-summary/producer-stat/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::TableSummary::ProducerStat::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::TableSummary::ProducerStat::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (object_count.is_set || is_set(object_count.yfilter)) leaf_name_data.push_back(object_count.get_name_leafdata());
    if (endof_interval_ts.is_set || is_set(endof_interval_ts.yfilter)) leaf_name_data.push_back(endof_interval_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::TableSummary::ProducerStat::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-counter")
    {
        auto ent_ = std::make_shared<L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter>();
        ent_->parent = this;
        extended_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::TableSummary::ProducerStat::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::Summary::TableSummary::ProducerStat::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-count")
    {
        object_count = value;
        object_count.value_namespace = name_space;
        object_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endof-interval-ts")
    {
        endof_interval_ts = value;
        endof_interval_ts.value_namespace = name_space;
        endof_interval_ts.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::TableSummary::ProducerStat::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "object-count")
    {
        object_count.yfilter = yfilter;
    }
    if(value_path == "endof-interval-ts")
    {
        endof_interval_ts.yfilter = yfilter;
    }
}

bool L2rib::Summary::TableSummary::ProducerStat::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-counter" || name == "memory-size" || name == "object-count" || name == "endof-interval-ts")
        return true;
    return false;
}

L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::ExtendedCounter()
    :
    counter_type{YType::uint8, "counter-type"},
    counter_name{YType::str, "counter-name"},
    l2rb_first_event_ts{YType::uint64, "l2rb-first-event-ts"},
    l2rb_last_event_ts{YType::uint64, "l2rb-last-event-ts"},
    l2rb_interval_event_count{YType::uint32, "l2rb-interval-event-count"},
    l2rb_total_event_count{YType::uint32, "l2rb-total-event-count"}
{

    yang_name = "extended-counter"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::~ExtendedCounter()
{
}

bool L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::has_data() const
{
    if (is_presence_container) return true;
    return counter_type.is_set
	|| counter_name.is_set
	|| l2rb_first_event_ts.is_set
	|| l2rb_last_event_ts.is_set
	|| l2rb_interval_event_count.is_set
	|| l2rb_total_event_count.is_set;
}

bool L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_type.yfilter)
	|| ydk::is_set(counter_name.yfilter)
	|| ydk::is_set(l2rb_first_event_ts.yfilter)
	|| ydk::is_set(l2rb_last_event_ts.yfilter)
	|| ydk::is_set(l2rb_interval_event_count.yfilter)
	|| ydk::is_set(l2rb_total_event_count.yfilter);
}

std::string L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/summary/table-summary/producer-stat/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_type.is_set || is_set(counter_type.yfilter)) leaf_name_data.push_back(counter_type.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (l2rb_first_event_ts.is_set || is_set(l2rb_first_event_ts.yfilter)) leaf_name_data.push_back(l2rb_first_event_ts.get_name_leafdata());
    if (l2rb_last_event_ts.is_set || is_set(l2rb_last_event_ts.yfilter)) leaf_name_data.push_back(l2rb_last_event_ts.get_name_leafdata());
    if (l2rb_interval_event_count.is_set || is_set(l2rb_interval_event_count.yfilter)) leaf_name_data.push_back(l2rb_interval_event_count.get_name_leafdata());
    if (l2rb_total_event_count.is_set || is_set(l2rb_total_event_count.yfilter)) leaf_name_data.push_back(l2rb_total_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-type")
    {
        counter_type = value;
        counter_type.value_namespace = name_space;
        counter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-first-event-ts")
    {
        l2rb_first_event_ts = value;
        l2rb_first_event_ts.value_namespace = name_space;
        l2rb_first_event_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-last-event-ts")
    {
        l2rb_last_event_ts = value;
        l2rb_last_event_ts.value_namespace = name_space;
        l2rb_last_event_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-interval-event-count")
    {
        l2rb_interval_event_count = value;
        l2rb_interval_event_count.value_namespace = name_space;
        l2rb_interval_event_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-total-event-count")
    {
        l2rb_total_event_count = value;
        l2rb_total_event_count.value_namespace = name_space;
        l2rb_total_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-type")
    {
        counter_type.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
    if(value_path == "l2rb-first-event-ts")
    {
        l2rb_first_event_ts.yfilter = yfilter;
    }
    if(value_path == "l2rb-last-event-ts")
    {
        l2rb_last_event_ts.yfilter = yfilter;
    }
    if(value_path == "l2rb-interval-event-count")
    {
        l2rb_interval_event_count.yfilter = yfilter;
    }
    if(value_path == "l2rb-total-event-count")
    {
        l2rb_total_event_count.yfilter = yfilter;
    }
}

bool L2rib::Summary::TableSummary::ProducerStat::Statistics::ExtendedCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-type" || name == "counter-name" || name == "l2rb-first-event-ts" || name == "l2rb-last-event-ts" || name == "l2rb-interval-event-count" || name == "l2rb-total-event-count")
        return true;
    return false;
}

L2rib::Producers::Producers()
    :
    producer(this, {})
{

    yang_name = "producers"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Producers::~Producers()
{
}

bool L2rib::Producers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<producer.len(); index++)
    {
        if(producer[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::Producers::has_operation() const
{
    for (std::size_t index=0; index<producer.len(); index++)
    {
        if(producer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::Producers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Producers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Producers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Producers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "producer")
    {
        auto ent_ = std::make_shared<L2rib::Producers::Producer>();
        ent_->parent = this;
        producer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Producers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : producer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::Producers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::Producers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::Producers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producer")
        return true;
    return false;
}

L2rib::Producers::Producer::Producer()
    :
    object_id{YType::uint32, "object-id"},
    product_id{YType::uint32, "product-id"},
    client_id{YType::uint32, "client-id"},
    object_type{YType::enumeration, "object-type"},
    producer_id{YType::enumeration, "producer-id"},
    producer_name{YType::str, "producer-name"},
    admin_distance{YType::uint32, "admin-distance"},
    purge_time{YType::uint32, "purge-time"},
    state{YType::enumeration, "state"}
{

    yang_name = "producer"; yang_parent_name = "producers"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Producers::Producer::~Producer()
{
}

bool L2rib::Producers::Producer::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| product_id.is_set
	|| client_id.is_set
	|| object_type.is_set
	|| producer_id.is_set
	|| producer_name.is_set
	|| admin_distance.is_set
	|| purge_time.is_set
	|| state.is_set;
}

bool L2rib::Producers::Producer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(product_id.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(producer_name.yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| ydk::is_set(purge_time.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string L2rib::Producers::Producer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/producers/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Producers::Producer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Producers::Producer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (product_id.is_set || is_set(product_id.yfilter)) leaf_name_data.push_back(product_id.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (producer_name.is_set || is_set(producer_name.yfilter)) leaf_name_data.push_back(producer_name.get_name_leafdata());
    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Producers::Producer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Producers::Producer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::Producers::Producer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "product-id")
    {
        product_id = value;
        product_id.value_namespace = name_space;
        product_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-name")
    {
        producer_name = value;
        producer_name.value_namespace = name_space;
        producer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Producers::Producer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "product-id")
    {
        product_id.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "producer-name")
    {
        producer_name.yfilter = yfilter;
    }
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool L2rib::Producers::Producer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "product-id" || name == "client-id" || name == "object-type" || name == "producer-id" || name == "producer-name" || name == "admin-distance" || name == "purge-time" || name == "state")
        return true;
    return false;
}

L2rib::Clients::Clients()
    :
    client(this, {"client_id"})
{

    yang_name = "clients"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Clients::~Clients()
{
}

bool L2rib::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::Clients::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<L2rib::Clients::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

L2rib::Clients::Client::Client()
    :
    client_id{YType::uint32, "client-id"},
    client_id_xr{YType::uint32, "client-id-xr"},
    process_id{YType::uint32, "process-id"},
    node_id{YType::str, "node-id"},
    proc_name{YType::str, "proc-name"},
    proc_suffix{YType::str, "proc-suffix"}
{

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Clients::Client::~Client()
{
}

bool L2rib::Clients::Client::has_data() const
{
    if (is_presence_container) return true;
    return client_id.is_set
	|| client_id_xr.is_set
	|| process_id.is_set
	|| node_id.is_set
	|| proc_name.is_set
	|| proc_suffix.is_set;
}

bool L2rib::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(client_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| ydk::is_set(proc_suffix.yfilter);
}

std::string L2rib::Clients::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/clients/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(client_id, "client-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.yfilter)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());
    if (proc_suffix.is_set || is_set(proc_suffix.yfilter)) leaf_name_data.push_back(proc_suffix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
        client_id_xr.value_namespace = name_space;
        client_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-suffix")
    {
        proc_suffix = value;
        proc_suffix.value_namespace = name_space;
        proc_suffix.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
    if(value_path == "proc-suffix")
    {
        proc_suffix.yfilter = yfilter;
    }
}

bool L2rib::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "client-id-xr" || name == "process-id" || name == "node-id" || name == "proc-name" || name == "proc-suffix")
        return true;
    return false;
}

L2rib::EvisXr::EvisXr()
    :
    evi(this, {"evi"})
{

    yang_name = "evis-xr"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EvisXr::~EvisXr()
{
}

bool L2rib::EvisXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evi.len(); index++)
    {
        if(evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::EvisXr::has_operation() const
{
    for (std::size_t index=0; index<evi.len(); index++)
    {
        if(evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::EvisXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EvisXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evis-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EvisXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EvisXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evi")
    {
        auto ent_ = std::make_shared<L2rib::EvisXr::Evi>();
        ent_->parent = this;
        evi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EvisXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EvisXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EvisXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EvisXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi")
        return true;
    return false;
}

L2rib::EvisXr::Evi::Evi()
    :
    evi{YType::uint32, "evi"},
    l2r_vni{YType::uint32, "l2r-vni"},
    l2r_encap_type{YType::uint16, "l2r-encap-type"},
    l2r_nve_iod{YType::uint32, "l2r-nve-iod"},
    l2r_nve_ifhandle{YType::uint32, "l2r-nve-ifhandle"},
    vtep_ip{YType::str, "vtep-ip"},
    l2r_topo_txid{YType::uint32, "l2r-topo-txid"},
    l2r_topo_flags{YType::uint32, "l2r-topo-flags"}
        ,
    topology(std::make_shared<L2rib::EvisXr::Evi::Topology>())
{
    topology->parent = this;

    yang_name = "evi"; yang_parent_name = "evis-xr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EvisXr::Evi::~Evi()
{
}

bool L2rib::EvisXr::Evi::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| l2r_vni.is_set
	|| l2r_encap_type.is_set
	|| l2r_nve_iod.is_set
	|| l2r_nve_ifhandle.is_set
	|| vtep_ip.is_set
	|| l2r_topo_txid.is_set
	|| l2r_topo_flags.is_set
	|| (topology !=  nullptr && topology->has_data());
}

bool L2rib::EvisXr::Evi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(l2r_vni.yfilter)
	|| ydk::is_set(l2r_encap_type.yfilter)
	|| ydk::is_set(l2r_nve_iod.yfilter)
	|| ydk::is_set(l2r_nve_ifhandle.yfilter)
	|| ydk::is_set(vtep_ip.yfilter)
	|| ydk::is_set(l2r_topo_txid.yfilter)
	|| ydk::is_set(l2r_topo_flags.yfilter)
	|| (topology !=  nullptr && topology->has_operation());
}

std::string L2rib::EvisXr::Evi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evis-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EvisXr::Evi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi";
    ADD_KEY_TOKEN(evi, "evi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EvisXr::Evi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (l2r_vni.is_set || is_set(l2r_vni.yfilter)) leaf_name_data.push_back(l2r_vni.get_name_leafdata());
    if (l2r_encap_type.is_set || is_set(l2r_encap_type.yfilter)) leaf_name_data.push_back(l2r_encap_type.get_name_leafdata());
    if (l2r_nve_iod.is_set || is_set(l2r_nve_iod.yfilter)) leaf_name_data.push_back(l2r_nve_iod.get_name_leafdata());
    if (l2r_nve_ifhandle.is_set || is_set(l2r_nve_ifhandle.yfilter)) leaf_name_data.push_back(l2r_nve_ifhandle.get_name_leafdata());
    if (vtep_ip.is_set || is_set(vtep_ip.yfilter)) leaf_name_data.push_back(vtep_ip.get_name_leafdata());
    if (l2r_topo_txid.is_set || is_set(l2r_topo_txid.yfilter)) leaf_name_data.push_back(l2r_topo_txid.get_name_leafdata());
    if (l2r_topo_flags.is_set || is_set(l2r_topo_flags.yfilter)) leaf_name_data.push_back(l2r_topo_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EvisXr::Evi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<L2rib::EvisXr::Evi::Topology>();
        }
        return topology;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EvisXr::Evi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topology != nullptr)
    {
        _children["topology"] = topology;
    }

    return _children;
}

void L2rib::EvisXr::Evi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2r-vni")
    {
        l2r_vni = value;
        l2r_vni.value_namespace = name_space;
        l2r_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2r-encap-type")
    {
        l2r_encap_type = value;
        l2r_encap_type.value_namespace = name_space;
        l2r_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2r-nve-iod")
    {
        l2r_nve_iod = value;
        l2r_nve_iod.value_namespace = name_space;
        l2r_nve_iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2r-nve-ifhandle")
    {
        l2r_nve_ifhandle = value;
        l2r_nve_ifhandle.value_namespace = name_space;
        l2r_nve_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep-ip")
    {
        vtep_ip = value;
        vtep_ip.value_namespace = name_space;
        vtep_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2r-topo-txid")
    {
        l2r_topo_txid = value;
        l2r_topo_txid.value_namespace = name_space;
        l2r_topo_txid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2r-topo-flags")
    {
        l2r_topo_flags = value;
        l2r_topo_flags.value_namespace = name_space;
        l2r_topo_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EvisXr::Evi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "l2r-vni")
    {
        l2r_vni.yfilter = yfilter;
    }
    if(value_path == "l2r-encap-type")
    {
        l2r_encap_type.yfilter = yfilter;
    }
    if(value_path == "l2r-nve-iod")
    {
        l2r_nve_iod.yfilter = yfilter;
    }
    if(value_path == "l2r-nve-ifhandle")
    {
        l2r_nve_ifhandle.yfilter = yfilter;
    }
    if(value_path == "vtep-ip")
    {
        vtep_ip.yfilter = yfilter;
    }
    if(value_path == "l2r-topo-txid")
    {
        l2r_topo_txid.yfilter = yfilter;
    }
    if(value_path == "l2r-topo-flags")
    {
        l2r_topo_flags.yfilter = yfilter;
    }
}

bool L2rib::EvisXr::Evi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology" || name == "evi" || name == "l2r-vni" || name == "l2r-encap-type" || name == "l2r-nve-iod" || name == "l2r-nve-ifhandle" || name == "vtep-ip" || name == "l2r-topo-txid" || name == "l2r-topo-flags")
        return true;
    return false;
}

L2rib::EvisXr::Evi::Topology::Topology()
    :
    topology_id{YType::uint32, "topology-id"},
    topology_name{YType::str, "topology-name"},
    topology_type{YType::uint32, "topology-type"}
{

    yang_name = "topology"; yang_parent_name = "evi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2rib::EvisXr::Evi::Topology::~Topology()
{
}

bool L2rib::EvisXr::Evi::Topology::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| topology_name.is_set
	|| topology_type.is_set;
}

bool L2rib::EvisXr::Evi::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(topology_type.yfilter);
}

std::string L2rib::EvisXr::Evi::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EvisXr::Evi::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (topology_type.is_set || is_set(topology_type.yfilter)) leaf_name_data.push_back(topology_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EvisXr::Evi::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EvisXr::Evi::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EvisXr::Evi::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-type")
    {
        topology_type = value;
        topology_type.value_namespace = name_space;
        topology_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EvisXr::Evi::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "topology-type")
    {
        topology_type.yfilter = yfilter;
    }
}

bool L2rib::EvisXr::Evi::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-id" || name == "topology-name" || name == "topology-type")
        return true;
    return false;
}

L2rib::ClientsDetails::ClientsDetails()
    :
    clients_detail(this, {"client_id"})
{

    yang_name = "clients-details"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ClientsDetails::~ClientsDetails()
{
}

bool L2rib::ClientsDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients_detail.len(); index++)
    {
        if(clients_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::ClientsDetails::has_operation() const
{
    for (std::size_t index=0; index<clients_detail.len(); index++)
    {
        if(clients_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::ClientsDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ClientsDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ClientsDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ClientsDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients-detail")
    {
        auto ent_ = std::make_shared<L2rib::ClientsDetails::ClientsDetail>();
        ent_->parent = this;
        clients_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ClientsDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clients_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::ClientsDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::ClientsDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::ClientsDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients-detail")
        return true;
    return false;
}

L2rib::ClientsDetails::ClientsDetail::ClientsDetail()
    :
    client_id{YType::uint32, "client-id"},
    producer_count{YType::uint8, "producer-count"},
    last_update_timestamp{YType::uint64, "last-update-timestamp"}
        ,
    client(std::make_shared<L2rib::ClientsDetails::ClientsDetail::Client>())
    , registration_table_statistics(std::make_shared<L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics>())
    , producer_array(this, {})
{
    client->parent = this;
    registration_table_statistics->parent = this;

    yang_name = "clients-detail"; yang_parent_name = "clients-details"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::ClientsDetails::ClientsDetail::~ClientsDetail()
{
}

bool L2rib::ClientsDetails::ClientsDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<producer_array.len(); index++)
    {
        if(producer_array[index]->has_data())
            return true;
    }
    return client_id.is_set
	|| producer_count.is_set
	|| last_update_timestamp.is_set
	|| (client !=  nullptr && client->has_data())
	|| (registration_table_statistics !=  nullptr && registration_table_statistics->has_data());
}

bool L2rib::ClientsDetails::ClientsDetail::has_operation() const
{
    for (std::size_t index=0; index<producer_array.len(); index++)
    {
        if(producer_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(producer_count.yfilter)
	|| ydk::is_set(last_update_timestamp.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (registration_table_statistics !=  nullptr && registration_table_statistics->has_operation());
}

std::string L2rib::ClientsDetails::ClientsDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/clients-details/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::ClientsDetails::ClientsDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients-detail";
    ADD_KEY_TOKEN(client_id, "client-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ClientsDetails::ClientsDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (producer_count.is_set || is_set(producer_count.yfilter)) leaf_name_data.push_back(producer_count.get_name_leafdata());
    if (last_update_timestamp.is_set || is_set(last_update_timestamp.yfilter)) leaf_name_data.push_back(last_update_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ClientsDetails::ClientsDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<L2rib::ClientsDetails::ClientsDetail::Client>();
        }
        return client;
    }

    if(child_yang_name == "registration-table-statistics")
    {
        if(registration_table_statistics == nullptr)
        {
            registration_table_statistics = std::make_shared<L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics>();
        }
        return registration_table_statistics;
    }

    if(child_yang_name == "producer-array")
    {
        auto ent_ = std::make_shared<L2rib::ClientsDetails::ClientsDetail::ProducerArray>();
        ent_->parent = this;
        producer_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ClientsDetails::ClientsDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(registration_table_statistics != nullptr)
    {
        _children["registration-table-statistics"] = registration_table_statistics;
    }

    count_ = 0;
    for (auto ent_ : producer_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::ClientsDetails::ClientsDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-count")
    {
        producer_count = value;
        producer_count.value_namespace = name_space;
        producer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp = value;
        last_update_timestamp.value_namespace = name_space;
        last_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ClientsDetails::ClientsDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "producer-count")
    {
        producer_count.yfilter = yfilter;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp.yfilter = yfilter;
    }
}

bool L2rib::ClientsDetails::ClientsDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "registration-table-statistics" || name == "producer-array" || name == "client-id" || name == "producer-count" || name == "last-update-timestamp")
        return true;
    return false;
}

L2rib::ClientsDetails::ClientsDetail::Client::Client()
    :
    client_id_xr{YType::uint32, "client-id-xr"},
    process_id{YType::uint32, "process-id"},
    node_id{YType::str, "node-id"},
    proc_name{YType::str, "proc-name"},
    proc_suffix{YType::str, "proc-suffix"}
{

    yang_name = "client"; yang_parent_name = "clients-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

L2rib::ClientsDetails::ClientsDetail::Client::~Client()
{
}

bool L2rib::ClientsDetails::ClientsDetail::Client::has_data() const
{
    if (is_presence_container) return true;
    return client_id_xr.is_set
	|| process_id.is_set
	|| node_id.is_set
	|| proc_name.is_set
	|| proc_suffix.is_set;
}

bool L2rib::ClientsDetails::ClientsDetail::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_id_xr.yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(proc_name.yfilter)
	|| ydk::is_set(proc_suffix.yfilter);
}

std::string L2rib::ClientsDetails::ClientsDetail::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ClientsDetails::ClientsDetail::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id_xr.is_set || is_set(client_id_xr.yfilter)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (proc_name.is_set || is_set(proc_name.yfilter)) leaf_name_data.push_back(proc_name.get_name_leafdata());
    if (proc_suffix.is_set || is_set(proc_suffix.yfilter)) leaf_name_data.push_back(proc_suffix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ClientsDetails::ClientsDetail::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ClientsDetails::ClientsDetail::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::ClientsDetails::ClientsDetail::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
        client_id_xr.value_namespace = name_space;
        client_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-name")
    {
        proc_name = value;
        proc_name.value_namespace = name_space;
        proc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proc-suffix")
    {
        proc_suffix = value;
        proc_suffix.value_namespace = name_space;
        proc_suffix.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ClientsDetails::ClientsDetail::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id-xr")
    {
        client_id_xr.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "proc-name")
    {
        proc_name.yfilter = yfilter;
    }
    if(value_path == "proc-suffix")
    {
        proc_suffix.yfilter = yfilter;
    }
}

bool L2rib::ClientsDetails::ClientsDetail::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id-xr" || name == "process-id" || name == "node-id" || name == "proc-name" || name == "proc-suffix")
        return true;
    return false;
}

L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::RegistrationTableStatistics()
    :
    producer_id{YType::enumeration, "producer-id"},
    producer_name{YType::str, "producer-name"}
        ,
    statistics(std::make_shared<L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics>())
{
    statistics->parent = this;

    yang_name = "registration-table-statistics"; yang_parent_name = "clients-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::~RegistrationTableStatistics()
{
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::has_data() const
{
    if (is_presence_container) return true;
    return producer_id.is_set
	|| producer_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(producer_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration-table-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (producer_name.is_set || is_set(producer_name.yfilter)) leaf_name_data.push_back(producer_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-name")
    {
        producer_name = value;
        producer_name.value_namespace = name_space;
        producer_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "producer-name")
    {
        producer_name.yfilter = yfilter;
    }
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "producer-id" || name == "producer-name")
        return true;
    return false;
}

L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::Statistics()
    :
    memory_size{YType::uint32, "memory-size"},
    object_count{YType::uint32, "object-count"},
    endof_interval_ts{YType::uint64, "endof-interval-ts"}
        ,
    extended_counter(this, {})
{

    yang_name = "statistics"; yang_parent_name = "registration-table-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::~Statistics()
{
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extended_counter.len(); index++)
    {
        if(extended_counter[index]->has_data())
            return true;
    }
    return memory_size.is_set
	|| object_count.is_set
	|| endof_interval_ts.is_set;
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::has_operation() const
{
    for (std::size_t index=0; index<extended_counter.len(); index++)
    {
        if(extended_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(object_count.yfilter)
	|| ydk::is_set(endof_interval_ts.yfilter);
}

std::string L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (object_count.is_set || is_set(object_count.yfilter)) leaf_name_data.push_back(object_count.get_name_leafdata());
    if (endof_interval_ts.is_set || is_set(endof_interval_ts.yfilter)) leaf_name_data.push_back(endof_interval_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-counter")
    {
        auto ent_ = std::make_shared<L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter>();
        ent_->parent = this;
        extended_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extended_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-count")
    {
        object_count = value;
        object_count.value_namespace = name_space;
        object_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endof-interval-ts")
    {
        endof_interval_ts = value;
        endof_interval_ts.value_namespace = name_space;
        endof_interval_ts.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "object-count")
    {
        object_count.yfilter = yfilter;
    }
    if(value_path == "endof-interval-ts")
    {
        endof_interval_ts.yfilter = yfilter;
    }
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-counter" || name == "memory-size" || name == "object-count" || name == "endof-interval-ts")
        return true;
    return false;
}

L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::ExtendedCounter()
    :
    counter_type{YType::uint8, "counter-type"},
    counter_name{YType::str, "counter-name"},
    l2rb_first_event_ts{YType::uint64, "l2rb-first-event-ts"},
    l2rb_last_event_ts{YType::uint64, "l2rb-last-event-ts"},
    l2rb_interval_event_count{YType::uint32, "l2rb-interval-event-count"},
    l2rb_total_event_count{YType::uint32, "l2rb-total-event-count"}
{

    yang_name = "extended-counter"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::~ExtendedCounter()
{
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::has_data() const
{
    if (is_presence_container) return true;
    return counter_type.is_set
	|| counter_name.is_set
	|| l2rb_first_event_ts.is_set
	|| l2rb_last_event_ts.is_set
	|| l2rb_interval_event_count.is_set
	|| l2rb_total_event_count.is_set;
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_type.yfilter)
	|| ydk::is_set(counter_name.yfilter)
	|| ydk::is_set(l2rb_first_event_ts.yfilter)
	|| ydk::is_set(l2rb_last_event_ts.yfilter)
	|| ydk::is_set(l2rb_interval_event_count.yfilter)
	|| ydk::is_set(l2rb_total_event_count.yfilter);
}

std::string L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_type.is_set || is_set(counter_type.yfilter)) leaf_name_data.push_back(counter_type.get_name_leafdata());
    if (counter_name.is_set || is_set(counter_name.yfilter)) leaf_name_data.push_back(counter_name.get_name_leafdata());
    if (l2rb_first_event_ts.is_set || is_set(l2rb_first_event_ts.yfilter)) leaf_name_data.push_back(l2rb_first_event_ts.get_name_leafdata());
    if (l2rb_last_event_ts.is_set || is_set(l2rb_last_event_ts.yfilter)) leaf_name_data.push_back(l2rb_last_event_ts.get_name_leafdata());
    if (l2rb_interval_event_count.is_set || is_set(l2rb_interval_event_count.yfilter)) leaf_name_data.push_back(l2rb_interval_event_count.get_name_leafdata());
    if (l2rb_total_event_count.is_set || is_set(l2rb_total_event_count.yfilter)) leaf_name_data.push_back(l2rb_total_event_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-type")
    {
        counter_type = value;
        counter_type.value_namespace = name_space;
        counter_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "counter-name")
    {
        counter_name = value;
        counter_name.value_namespace = name_space;
        counter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-first-event-ts")
    {
        l2rb_first_event_ts = value;
        l2rb_first_event_ts.value_namespace = name_space;
        l2rb_first_event_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-last-event-ts")
    {
        l2rb_last_event_ts = value;
        l2rb_last_event_ts.value_namespace = name_space;
        l2rb_last_event_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-interval-event-count")
    {
        l2rb_interval_event_count = value;
        l2rb_interval_event_count.value_namespace = name_space;
        l2rb_interval_event_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2rb-total-event-count")
    {
        l2rb_total_event_count = value;
        l2rb_total_event_count.value_namespace = name_space;
        l2rb_total_event_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-type")
    {
        counter_type.yfilter = yfilter;
    }
    if(value_path == "counter-name")
    {
        counter_name.yfilter = yfilter;
    }
    if(value_path == "l2rb-first-event-ts")
    {
        l2rb_first_event_ts.yfilter = yfilter;
    }
    if(value_path == "l2rb-last-event-ts")
    {
        l2rb_last_event_ts.yfilter = yfilter;
    }
    if(value_path == "l2rb-interval-event-count")
    {
        l2rb_interval_event_count.yfilter = yfilter;
    }
    if(value_path == "l2rb-total-event-count")
    {
        l2rb_total_event_count.yfilter = yfilter;
    }
}

bool L2rib::ClientsDetails::ClientsDetail::RegistrationTableStatistics::Statistics::ExtendedCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-type" || name == "counter-name" || name == "l2rb-first-event-ts" || name == "l2rb-last-event-ts" || name == "l2rb-interval-event-count" || name == "l2rb-total-event-count")
        return true;
    return false;
}

L2rib::ClientsDetails::ClientsDetail::ProducerArray::ProducerArray()
    :
    object_type{YType::enumeration, "object-type"},
    producer_id{YType::enumeration, "producer-id"},
    producer_name{YType::str, "producer-name"},
    admin_distance{YType::uint32, "admin-distance"},
    purge_time{YType::uint32, "purge-time"}
{

    yang_name = "producer-array"; yang_parent_name = "clients-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

L2rib::ClientsDetails::ClientsDetail::ProducerArray::~ProducerArray()
{
}

bool L2rib::ClientsDetails::ClientsDetail::ProducerArray::has_data() const
{
    if (is_presence_container) return true;
    return object_type.is_set
	|| producer_id.is_set
	|| producer_name.is_set
	|| admin_distance.is_set
	|| purge_time.is_set;
}

bool L2rib::ClientsDetails::ClientsDetail::ProducerArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_type.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(producer_name.yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| ydk::is_set(purge_time.yfilter);
}

std::string L2rib::ClientsDetails::ClientsDetail::ProducerArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "producer-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::ClientsDetails::ClientsDetail::ProducerArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_type.is_set || is_set(object_type.yfilter)) leaf_name_data.push_back(object_type.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (producer_name.is_set || is_set(producer_name.yfilter)) leaf_name_data.push_back(producer_name.get_name_leafdata());
    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::ClientsDetails::ClientsDetail::ProducerArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::ClientsDetails::ClientsDetail::ProducerArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::ClientsDetails::ClientsDetail::ProducerArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-type")
    {
        object_type = value;
        object_type.value_namespace = name_space;
        object_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-name")
    {
        producer_name = value;
        producer_name.value_namespace = name_space;
        producer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::ClientsDetails::ClientsDetail::ProducerArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-type")
    {
        object_type.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "producer-name")
    {
        producer_name.yfilter = yfilter;
    }
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
}

bool L2rib::ClientsDetails::ClientsDetail::ProducerArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-type" || name == "producer-id" || name == "producer-name" || name == "admin-distance" || name == "purge-time")
        return true;
    return false;
}

L2rib::EviChildTables::EviChildTables()
    :
    macip_details(std::make_shared<L2rib::EviChildTables::MacipDetails>())
    , mac_ips(std::make_shared<L2rib::EviChildTables::MacIps>())
    , macs(std::make_shared<L2rib::EviChildTables::Macs>())
    , imets(std::make_shared<L2rib::EviChildTables::Imets>())
    , mac_details(std::make_shared<L2rib::EviChildTables::MacDetails>())
    , imet_details(std::make_shared<L2rib::EviChildTables::ImetDetails>())
{
    macip_details->parent = this;
    mac_ips->parent = this;
    macs->parent = this;
    imets->parent = this;
    mac_details->parent = this;
    imet_details->parent = this;

    yang_name = "evi-child-tables"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::~EviChildTables()
{
}

bool L2rib::EviChildTables::has_data() const
{
    if (is_presence_container) return true;
    return (macip_details !=  nullptr && macip_details->has_data())
	|| (mac_ips !=  nullptr && mac_ips->has_data())
	|| (macs !=  nullptr && macs->has_data())
	|| (imets !=  nullptr && imets->has_data())
	|| (mac_details !=  nullptr && mac_details->has_data())
	|| (imet_details !=  nullptr && imet_details->has_data());
}

bool L2rib::EviChildTables::has_operation() const
{
    return is_set(yfilter)
	|| (macip_details !=  nullptr && macip_details->has_operation())
	|| (mac_ips !=  nullptr && mac_ips->has_operation())
	|| (macs !=  nullptr && macs->has_operation())
	|| (imets !=  nullptr && imets->has_operation())
	|| (mac_details !=  nullptr && mac_details->has_operation())
	|| (imet_details !=  nullptr && imet_details->has_operation());
}

std::string L2rib::EviChildTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-child-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macip-details")
    {
        if(macip_details == nullptr)
        {
            macip_details = std::make_shared<L2rib::EviChildTables::MacipDetails>();
        }
        return macip_details;
    }

    if(child_yang_name == "mac-ips")
    {
        if(mac_ips == nullptr)
        {
            mac_ips = std::make_shared<L2rib::EviChildTables::MacIps>();
        }
        return mac_ips;
    }

    if(child_yang_name == "macs")
    {
        if(macs == nullptr)
        {
            macs = std::make_shared<L2rib::EviChildTables::Macs>();
        }
        return macs;
    }

    if(child_yang_name == "imets")
    {
        if(imets == nullptr)
        {
            imets = std::make_shared<L2rib::EviChildTables::Imets>();
        }
        return imets;
    }

    if(child_yang_name == "mac-details")
    {
        if(mac_details == nullptr)
        {
            mac_details = std::make_shared<L2rib::EviChildTables::MacDetails>();
        }
        return mac_details;
    }

    if(child_yang_name == "imet-details")
    {
        if(imet_details == nullptr)
        {
            imet_details = std::make_shared<L2rib::EviChildTables::ImetDetails>();
        }
        return imet_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macip_details != nullptr)
    {
        _children["macip-details"] = macip_details;
    }

    if(mac_ips != nullptr)
    {
        _children["mac-ips"] = mac_ips;
    }

    if(macs != nullptr)
    {
        _children["macs"] = macs;
    }

    if(imets != nullptr)
    {
        _children["imets"] = imets;
    }

    if(mac_details != nullptr)
    {
        _children["mac-details"] = mac_details;
    }

    if(imet_details != nullptr)
    {
        _children["imet-details"] = imet_details;
    }

    return _children;
}

void L2rib::EviChildTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macip-details" || name == "mac-ips" || name == "macs" || name == "imets" || name == "mac-details" || name == "imet-details")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetails()
    :
    macip_detail(this, {})
{

    yang_name = "macip-details"; yang_parent_name = "evi-child-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::~MacipDetails()
{
}

bool L2rib::EviChildTables::MacipDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macip_detail.len(); index++)
    {
        if(macip_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::EviChildTables::MacipDetails::has_operation() const
{
    for (std::size_t index=0; index<macip_detail.len(); index++)
    {
        if(macip_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::EviChildTables::MacipDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macip-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macip-detail")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail>();
        ent_->parent = this;
        macip_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macip_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacipDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::MacipDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::MacipDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macip-detail")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacipDetail()
    :
    evi{YType::uint32, "evi"},
    mac_addr{YType::str, "mac-addr"},
    ip_addr{YType::str, "ip-addr"},
    prod_id{YType::uint32, "prod-id"},
    sequence_number{YType::uint32, "sequence-number"},
    flags{YType::str, "flags"},
    soo{YType::uint32, "soo"},
    last_update_timestamp{YType::uint64, "last-update-timestamp"}
        ,
    mac_ip_route(std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute>())
    , rt_tlv(std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv>())
    , nh_tlv(std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv>())
{
    mac_ip_route->parent = this;
    rt_tlv->parent = this;
    nh_tlv->parent = this;

    yang_name = "macip-detail"; yang_parent_name = "macip-details"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::~MacipDetail()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| mac_addr.is_set
	|| ip_addr.is_set
	|| prod_id.is_set
	|| sequence_number.is_set
	|| flags.is_set
	|| soo.is_set
	|| last_update_timestamp.is_set
	|| (mac_ip_route !=  nullptr && mac_ip_route->has_data())
	|| (rt_tlv !=  nullptr && rt_tlv->has_data())
	|| (nh_tlv !=  nullptr && nh_tlv->has_data());
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prod_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(last_update_timestamp.yfilter)
	|| (mac_ip_route !=  nullptr && mac_ip_route->has_operation())
	|| (rt_tlv !=  nullptr && rt_tlv->has_operation())
	|| (nh_tlv !=  nullptr && nh_tlv->has_operation());
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macip-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prod_id.is_set || is_set(prod_id.yfilter)) leaf_name_data.push_back(prod_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (last_update_timestamp.is_set || is_set(last_update_timestamp.yfilter)) leaf_name_data.push_back(last_update_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-ip-route")
    {
        if(mac_ip_route == nullptr)
        {
            mac_ip_route = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute>();
        }
        return mac_ip_route;
    }

    if(child_yang_name == "rt-tlv")
    {
        if(rt_tlv == nullptr)
        {
            rt_tlv = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv>();
        }
        return rt_tlv;
    }

    if(child_yang_name == "nh-tlv")
    {
        if(nh_tlv == nullptr)
        {
            nh_tlv = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv>();
        }
        return nh_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_ip_route != nullptr)
    {
        _children["mac-ip-route"] = mac_ip_route;
    }

    if(rt_tlv != nullptr)
    {
        _children["rt-tlv"] = rt_tlv;
    }

    if(nh_tlv != nullptr)
    {
        _children["nh-tlv"] = nh_tlv;
    }

    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prod-id")
    {
        prod_id = value;
        prod_id.value_namespace = name_space;
        prod_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp = value;
        last_update_timestamp.value_namespace = name_space;
        last_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prod-id")
    {
        prod_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-ip-route" || name == "rt-tlv" || name == "nh-tlv" || name == "evi" || name == "mac-addr" || name == "ip-addr" || name == "prod-id" || name == "sequence-number" || name == "flags" || name == "soo" || name == "last-update-timestamp")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::MacIpRoute()
    :
    mac_address{YType::str, "mac-address"},
    ip_address{YType::str, "ip-address"},
    admin_distance{YType::uint8, "admin-distance"},
    producer_id{YType::uint8, "producer-id"},
    topology_id{YType::uint32, "topology-id"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop>())
{
    next_hop->parent = this;

    yang_name = "mac-ip-route"; yang_parent_name = "macip-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::~MacIpRoute()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| ip_address.is_set
	|| admin_distance.is_set
	|| producer_id.is_set
	|| topology_id.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-ip-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "mac-address" || name == "ip-address" || name == "admin-distance" || name == "producer-id" || name == "topology-id")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_>())
{
    next_hop->parent = this;

    yang_name = "next-hop"; yang_parent_name = "mac-ip-route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/mac-ip-route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::NextHop_()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::~NextHop_()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/mac-ip-route/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/mac-ip-route/next-hop/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::MacIpRoute::NextHop::NextHop_::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::RtTlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_len{YType::uint16, "tlv-len"}
        ,
    tlv_val(this, {})
{

    yang_name = "rt-tlv"; yang_parent_name = "macip-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::~RtTlv()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv_val.len(); index++)
    {
        if(tlv_val[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_len.is_set;
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::has_operation() const
{
    for (std::size_t index=0; index<tlv_val.len(); index++)
    {
        if(tlv_val[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_len.yfilter);
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_len.is_set || is_set(tlv_len.yfilter)) leaf_name_data.push_back(tlv_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-val")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal>();
        ent_->parent = this;
        tlv_val.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv_val.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-len")
    {
        tlv_len = value;
        tlv_len.value_namespace = name_space;
        tlv_len.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-len")
    {
        tlv_len.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-val" || name == "tlv-type" || name == "tlv-len")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::TlvVal()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "tlv-val"; yang_parent_name = "rt-tlv"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::~TlvVal()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/rt-tlv/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-val";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::RtTlv::TlvVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::NhTlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_len{YType::uint16, "tlv-len"}
        ,
    tlv_val(this, {})
{

    yang_name = "nh-tlv"; yang_parent_name = "macip-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::~NhTlv()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv_val.len(); index++)
    {
        if(tlv_val[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_len.is_set;
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::has_operation() const
{
    for (std::size_t index=0; index<tlv_val.len(); index++)
    {
        if(tlv_val[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_len.yfilter);
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_len.is_set || is_set(tlv_len.yfilter)) leaf_name_data.push_back(tlv_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-val")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal>();
        ent_->parent = this;
        tlv_val.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv_val.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-len")
    {
        tlv_len = value;
        tlv_len.value_namespace = name_space;
        tlv_len.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-len")
    {
        tlv_len.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-val" || name == "tlv-type" || name == "tlv-len")
        return true;
    return false;
}

L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::TlvVal()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "tlv-val"; yang_parent_name = "nh-tlv"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::~TlvVal()
{
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macip-details/macip-detail/nh-tlv/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-val";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacipDetails::MacipDetail::NhTlv::TlvVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2rib::EviChildTables::MacIps::MacIps()
    :
    mac_ip(this, {})
{

    yang_name = "mac-ips"; yang_parent_name = "evi-child-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacIps::~MacIps()
{
}

bool L2rib::EviChildTables::MacIps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_ip.len(); index++)
    {
        if(mac_ip[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::EviChildTables::MacIps::has_operation() const
{
    for (std::size_t index=0; index<mac_ip.len(); index++)
    {
        if(mac_ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::EviChildTables::MacIps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacIps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-ips";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacIps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacIps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-ip")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacIps::MacIp>();
        ent_->parent = this;
        mac_ip.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacIps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacIps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::MacIps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::MacIps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-ip")
        return true;
    return false;
}

L2rib::EviChildTables::MacIps::MacIp::MacIp()
    :
    evi{YType::uint32, "evi"},
    mac_addr{YType::str, "mac-addr"},
    ip_addr{YType::str, "ip-addr"},
    prod_id{YType::uint32, "prod-id"},
    mac_address{YType::str, "mac-address"},
    ip_address{YType::str, "ip-address"},
    admin_distance{YType::uint8, "admin-distance"},
    producer_id{YType::uint8, "producer-id"},
    topology_id{YType::uint32, "topology-id"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacIps::MacIp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "mac-ip"; yang_parent_name = "mac-ips"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacIps::MacIp::~MacIp()
{
}

bool L2rib::EviChildTables::MacIps::MacIp::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| mac_addr.is_set
	|| ip_addr.is_set
	|| prod_id.is_set
	|| mac_address.is_set
	|| ip_address.is_set
	|| admin_distance.is_set
	|| producer_id.is_set
	|| topology_id.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacIps::MacIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prod_id.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacIps::MacIp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-ips/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacIps::MacIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-ip";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacIps::MacIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prod_id.is_set || is_set(prod_id.yfilter)) leaf_name_data.push_back(prod_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacIps::MacIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacIps::MacIp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacIps::MacIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacIps::MacIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prod-id")
    {
        prod_id = value;
        prod_id.value_namespace = name_space;
        prod_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacIps::MacIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prod-id")
    {
        prod_id.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacIps::MacIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "evi" || name == "mac-addr" || name == "ip-addr" || name == "prod-id" || name == "mac-address" || name == "ip-address" || name == "admin-distance" || name == "producer-id" || name == "topology-id")
        return true;
    return false;
}

L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_>())
{
    next_hop->parent = this;

    yang_name = "next-hop"; yang_parent_name = "mac-ip"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacIps::MacIp::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacIps::MacIp::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-ips/mac-ip/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacIps::MacIp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacIps::MacIp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacIps::MacIp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacIps::MacIp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacIps::MacIp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacIps::MacIp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::NextHop_()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::~NextHop_()
{
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-ips/mac-ip/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-ips/mac-ip/next-hop/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacIps::MacIp::NextHop::NextHop_::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Macs()
    :
    mac(this, {})
{

    yang_name = "macs"; yang_parent_name = "evi-child-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::~Macs()
{
}

bool L2rib::EviChildTables::Macs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac.len(); index++)
    {
        if(mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::EviChildTables::Macs::has_operation() const
{
    for (std::size_t index=0; index<mac.len(); index++)
    {
        if(mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::EviChildTables::Macs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::Macs::Mac>();
        ent_->parent = this;
        mac.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::Macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::Macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Mac()
    :
    evi{YType::uint32, "evi"},
    mac_addr{YType::str, "mac-addr"},
    prod_id{YType::uint32, "prod-id"},
    mac_address{YType::str, "mac-address"},
    admin_distance{YType::uint8, "admin-distance"},
    producer_id{YType::uint8, "producer-id"},
    topology_id{YType::uint32, "topology-id"}
        ,
    route(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route>())
{
    route->parent = this;

    yang_name = "mac"; yang_parent_name = "macs"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::~Mac()
{
}

bool L2rib::EviChildTables::Macs::Mac::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| mac_addr.is_set
	|| prod_id.is_set
	|| mac_address.is_set
	|| admin_distance.is_set
	|| producer_id.is_set
	|| topology_id.is_set
	|| (route !=  nullptr && route->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(prod_id.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (prod_id.is_set || is_set(prod_id.yfilter)) leaf_name_data.push_back(prod_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prod-id")
    {
        prod_id = value;
        prod_id.value_namespace = name_space;
        prod_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "prod-id")
    {
        prod_id.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "evi" || name == "mac-addr" || name == "prod-id" || name == "mac-address" || name == "admin-distance" || name == "producer-id" || name == "topology-id")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Route()
    :
    type{YType::enumeration, "type"}
        ,
    regular(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular>())
    , evpn_esi(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi>())
    , bmac(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac>())
{
    regular->parent = this;
    evpn_esi->parent = this;
    bmac->parent = this;

    yang_name = "route"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::~Route()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (regular !=  nullptr && regular->has_data())
	|| (evpn_esi !=  nullptr && evpn_esi->has_data())
	|| (bmac !=  nullptr && bmac->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (regular !=  nullptr && regular->has_operation())
	|| (evpn_esi !=  nullptr && evpn_esi->has_operation())
	|| (bmac !=  nullptr && bmac->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular")
    {
        if(regular == nullptr)
        {
            regular = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular>();
        }
        return regular;
    }

    if(child_yang_name == "evpn-esi")
    {
        if(evpn_esi == nullptr)
        {
            evpn_esi = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi>();
        }
        return evpn_esi;
    }

    if(child_yang_name == "bmac")
    {
        if(bmac == nullptr)
        {
            bmac = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac>();
        }
        return bmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(regular != nullptr)
    {
        _children["regular"] = regular;
    }

    if(evpn_esi != nullptr)
    {
        _children["evpn-esi"] = evpn_esi;
    }

    if(bmac != nullptr)
    {
        _children["bmac"] = bmac;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regular" || name == "evpn-esi" || name == "bmac" || name == "type")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::Regular()
    :
    next_hop(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop>())
{
    next_hop->parent = this;

    yang_name = "regular"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::~Regular()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Regular::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Regular::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Regular::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_>())
{
    next_hop->parent = this;

    yang_name = "next-hop"; yang_parent_name = "regular"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/regular/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::NextHop_()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::~NextHop_()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/regular/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/regular/next-hop/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Regular::NextHop::NextHop_::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EvpnEsi()
    :
    sequence_number{YType::uint32, "sequence-number"},
    forward_state{YType::boolean, "forward-state"}
        ,
    ethernet_segment_id(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId>())
    , path_list(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList>())
{
    ethernet_segment_id->parent = this;
    path_list->parent = this;

    yang_name = "evpn-esi"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::~EvpnEsi()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number.is_set
	|| forward_state.is_set
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_data())
	|| (path_list !=  nullptr && path_list->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(forward_state.yfilter)
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_operation())
	|| (path_list !=  nullptr && path_list->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-esi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (forward_state.is_set || is_set(forward_state.yfilter)) leaf_name_data.push_back(forward_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-id")
    {
        if(ethernet_segment_id == nullptr)
        {
            ethernet_segment_id = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId>();
        }
        return ethernet_segment_id;
    }

    if(child_yang_name == "path-list")
    {
        if(path_list == nullptr)
        {
            path_list = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList>();
        }
        return path_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_segment_id != nullptr)
    {
        _children["ethernet-segment-id"] = ethernet_segment_id;
    }

    if(path_list != nullptr)
    {
        _children["path-list"] = path_list;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-state")
    {
        forward_state = value;
        forward_state.value_namespace = name_space;
        forward_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "forward-state")
    {
        forward_state.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-id" || name == "path-list" || name == "sequence-number" || name == "forward-state")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::EthernetSegmentId()
    :
    system_priority{YType::uint16, "system-priority"},
    system_id{YType::str, "system-id"},
    port_key{YType::uint16, "port-key"}
{

    yang_name = "ethernet-segment-id"; yang_parent_name = "evpn-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::~EthernetSegmentId()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set
	|| system_id.is_set
	|| port_key.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(port_key.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (port_key.is_set || is_set(port_key.yfilter)) leaf_name_data.push_back(port_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-key")
    {
        port_key = value;
        port_key.value_namespace = name_space;
        port_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "port-key")
    {
        port_key.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::EthernetSegmentId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority" || name == "system-id" || name == "port-key")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathList()
    :
    producer_id{YType::uint8, "producer-id"},
    mac_count{YType::uint32, "mac-count"},
    local_label{YType::uint32, "local-label"}
        ,
    path_list_info(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo>())
    , next_hop_array(this, {})
{
    path_list_info->parent = this;

    yang_name = "path-list"; yang_parent_name = "evpn-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::~PathList()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_data())
            return true;
    }
    return producer_id.is_set
	|| mac_count.is_set
	|| local_label.is_set
	|| (path_list_info !=  nullptr && path_list_info->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::has_operation() const
{
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (path_list_info !=  nullptr && path_list_info->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-info")
    {
        if(path_list_info == nullptr)
        {
            path_list_info = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo>();
        }
        return path_list_info;
    }

    if(child_yang_name == "next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray>();
        ent_->parent = this;
        next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_info != nullptr)
    {
        _children["path-list-info"] = path_list_info;
    }

    count_ = 0;
    for (auto ent_ : next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "mac-count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-info" || name == "next-hop-array" || name == "producer-id" || name == "mac-count" || name == "local-label")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListInfo()
    :
    type{YType::enumeration, "type"}
        ,
    path_list_esi(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi>())
    , path_list_mac(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac>())
{
    path_list_esi->parent = this;
    path_list_mac->parent = this;

    yang_name = "path-list-info"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::~PathListInfo()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (path_list_esi !=  nullptr && path_list_esi->has_data())
	|| (path_list_mac !=  nullptr && path_list_mac->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (path_list_esi !=  nullptr && path_list_esi->has_operation())
	|| (path_list_mac !=  nullptr && path_list_mac->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-esi")
    {
        if(path_list_esi == nullptr)
        {
            path_list_esi = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi>();
        }
        return path_list_esi;
    }

    if(child_yang_name == "path-list-mac")
    {
        if(path_list_mac == nullptr)
        {
            path_list_mac = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac>();
        }
        return path_list_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_esi != nullptr)
    {
        _children["path-list-esi"] = path_list_esi;
    }

    if(path_list_mac != nullptr)
    {
        _children["path-list-mac"] = path_list_mac;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-esi" || name == "path-list-mac" || name == "type")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::PathListEsi()
    :
    resolved{YType::boolean, "resolved"}
        ,
    ethernet_segment_id(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId>())
    , mac_update_next_hop_array(this, {})
{
    ethernet_segment_id->parent = this;

    yang_name = "path-list-esi"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::~PathListEsi()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_data())
            return true;
    }
    return resolved.is_set
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::has_operation() const
{
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-esi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-id")
    {
        if(ethernet_segment_id == nullptr)
        {
            ethernet_segment_id = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId>();
        }
        return ethernet_segment_id;
    }

    if(child_yang_name == "mac-update-next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray>();
        ent_->parent = this;
        mac_update_next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_segment_id != nullptr)
    {
        _children["ethernet-segment-id"] = ethernet_segment_id;
    }

    count_ = 0;
    for (auto ent_ : mac_update_next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-id" || name == "mac-update-next-hop-array" || name == "resolved")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::EthernetSegmentId()
    :
    system_priority{YType::uint16, "system-priority"},
    system_id{YType::str, "system-id"},
    port_key{YType::uint16, "port-key"}
{

    yang_name = "ethernet-segment-id"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::~EthernetSegmentId()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set
	|| system_id.is_set
	|| port_key.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(port_key.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (port_key.is_set || is_set(port_key.yfilter)) leaf_name_data.push_back(port_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-key")
    {
        port_key = value;
        port_key.value_namespace = name_space;
        port_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "port-key")
    {
        port_key.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority" || name == "system-id" || name == "port-key")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::MacUpdateNextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "mac-update-next-hop-array"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::~MacUpdateNextHopArray()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-update-next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "mac-update-next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::PathListMac()
    :
    mac_address{YType::str, "mac-address"}
{

    yang_name = "path-list-mac"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::~PathListMac()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::PathListInfo::PathListMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "next-hop-array"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::~NextHopArray()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/evpn-esi/path-list/next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::Bmac()
    :
    bmac_address{YType::str, "bmac-address"},
    forward_state{YType::boolean, "forward-state"}
        ,
    path_list(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList>())
{
    path_list->parent = this;

    yang_name = "bmac"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::~Bmac()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::has_data() const
{
    if (is_presence_container) return true;
    return bmac_address.is_set
	|| forward_state.is_set
	|| (path_list !=  nullptr && path_list->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmac_address.yfilter)
	|| ydk::is_set(forward_state.yfilter)
	|| (path_list !=  nullptr && path_list->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmac_address.is_set || is_set(bmac_address.yfilter)) leaf_name_data.push_back(bmac_address.get_name_leafdata());
    if (forward_state.is_set || is_set(forward_state.yfilter)) leaf_name_data.push_back(forward_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list")
    {
        if(path_list == nullptr)
        {
            path_list = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList>();
        }
        return path_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list != nullptr)
    {
        _children["path-list"] = path_list;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmac-address")
    {
        bmac_address = value;
        bmac_address.value_namespace = name_space;
        bmac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-state")
    {
        forward_state = value;
        forward_state.value_namespace = name_space;
        forward_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmac-address")
    {
        bmac_address.yfilter = yfilter;
    }
    if(value_path == "forward-state")
    {
        forward_state.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list" || name == "bmac-address" || name == "forward-state")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathList()
    :
    producer_id{YType::uint8, "producer-id"},
    mac_count{YType::uint32, "mac-count"},
    local_label{YType::uint32, "local-label"}
        ,
    path_list_info(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo>())
    , next_hop_array(this, {})
{
    path_list_info->parent = this;

    yang_name = "path-list"; yang_parent_name = "bmac"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::~PathList()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_data())
            return true;
    }
    return producer_id.is_set
	|| mac_count.is_set
	|| local_label.is_set
	|| (path_list_info !=  nullptr && path_list_info->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::has_operation() const
{
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (path_list_info !=  nullptr && path_list_info->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-info")
    {
        if(path_list_info == nullptr)
        {
            path_list_info = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo>();
        }
        return path_list_info;
    }

    if(child_yang_name == "next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray>();
        ent_->parent = this;
        next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_info != nullptr)
    {
        _children["path-list-info"] = path_list_info;
    }

    count_ = 0;
    for (auto ent_ : next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "mac-count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-info" || name == "next-hop-array" || name == "producer-id" || name == "mac-count" || name == "local-label")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListInfo()
    :
    type{YType::enumeration, "type"}
        ,
    path_list_esi(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi>())
    , path_list_mac(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac>())
{
    path_list_esi->parent = this;
    path_list_mac->parent = this;

    yang_name = "path-list-info"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::~PathListInfo()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (path_list_esi !=  nullptr && path_list_esi->has_data())
	|| (path_list_mac !=  nullptr && path_list_mac->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (path_list_esi !=  nullptr && path_list_esi->has_operation())
	|| (path_list_mac !=  nullptr && path_list_mac->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-esi")
    {
        if(path_list_esi == nullptr)
        {
            path_list_esi = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi>();
        }
        return path_list_esi;
    }

    if(child_yang_name == "path-list-mac")
    {
        if(path_list_mac == nullptr)
        {
            path_list_mac = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac>();
        }
        return path_list_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_esi != nullptr)
    {
        _children["path-list-esi"] = path_list_esi;
    }

    if(path_list_mac != nullptr)
    {
        _children["path-list-mac"] = path_list_mac;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-esi" || name == "path-list-mac" || name == "type")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::PathListEsi()
    :
    resolved{YType::boolean, "resolved"}
        ,
    ethernet_segment_id(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId>())
    , mac_update_next_hop_array(this, {})
{
    ethernet_segment_id->parent = this;

    yang_name = "path-list-esi"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::~PathListEsi()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_data())
            return true;
    }
    return resolved.is_set
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::has_operation() const
{
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-esi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-id")
    {
        if(ethernet_segment_id == nullptr)
        {
            ethernet_segment_id = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId>();
        }
        return ethernet_segment_id;
    }

    if(child_yang_name == "mac-update-next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray>();
        ent_->parent = this;
        mac_update_next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_segment_id != nullptr)
    {
        _children["ethernet-segment-id"] = ethernet_segment_id;
    }

    count_ = 0;
    for (auto ent_ : mac_update_next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-id" || name == "mac-update-next-hop-array" || name == "resolved")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::EthernetSegmentId()
    :
    system_priority{YType::uint16, "system-priority"},
    system_id{YType::str, "system-id"},
    port_key{YType::uint16, "port-key"}
{

    yang_name = "ethernet-segment-id"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::~EthernetSegmentId()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set
	|| system_id.is_set
	|| port_key.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(port_key.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (port_key.is_set || is_set(port_key.yfilter)) leaf_name_data.push_back(port_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-key")
    {
        port_key = value;
        port_key.value_namespace = name_space;
        port_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "port-key")
    {
        port_key.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority" || name == "system-id" || name == "port-key")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::MacUpdateNextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "mac-update-next-hop-array"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::~MacUpdateNextHopArray()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-update-next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "mac-update-next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::PathListMac()
    :
    mac_address{YType::str, "mac-address"}
{

    yang_name = "path-list-mac"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::~PathListMac()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::PathListInfo::PathListMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "next-hop-array"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::~NextHopArray()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/macs/mac/route/bmac/path-list/next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Macs::Mac::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::Imets::Imets()
    :
    imet(this, {})
{

    yang_name = "imets"; yang_parent_name = "evi-child-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Imets::~Imets()
{
}

bool L2rib::EviChildTables::Imets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<imet.len(); index++)
    {
        if(imet[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::EviChildTables::Imets::has_operation() const
{
    for (std::size_t index=0; index<imet.len(); index++)
    {
        if(imet[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::EviChildTables::Imets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Imets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Imets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Imets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imet")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::Imets::Imet>();
        ent_->parent = this;
        imet.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Imets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : imet.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::Imets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::Imets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::Imets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imet")
        return true;
    return false;
}

L2rib::EviChildTables::Imets::Imet::Imet()
    :
    evi{YType::uint32, "evi"},
    tag_id{YType::uint32, "tag-id"},
    ip_addr{YType::str, "ip-addr"},
    prod_id{YType::uint32, "prod-id"},
    vtepi_paddr{YType::str, "vtepi-paddr"},
    producer_id{YType::uint8, "producer-id"},
    topo_id{YType::uint32, "topo-id"},
    ethernet_tag_id{YType::uint32, "ethernet-tag-id"}
{

    yang_name = "imet"; yang_parent_name = "imets"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::Imets::Imet::~Imet()
{
}

bool L2rib::EviChildTables::Imets::Imet::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| tag_id.is_set
	|| ip_addr.is_set
	|| prod_id.is_set
	|| vtepi_paddr.is_set
	|| producer_id.is_set
	|| topo_id.is_set
	|| ethernet_tag_id.is_set;
}

bool L2rib::EviChildTables::Imets::Imet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(tag_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prod_id.yfilter)
	|| ydk::is_set(vtepi_paddr.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(topo_id.yfilter)
	|| ydk::is_set(ethernet_tag_id.yfilter);
}

std::string L2rib::EviChildTables::Imets::Imet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/imets/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::Imets::Imet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imet";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::Imets::Imet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (tag_id.is_set || is_set(tag_id.yfilter)) leaf_name_data.push_back(tag_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prod_id.is_set || is_set(prod_id.yfilter)) leaf_name_data.push_back(prod_id.get_name_leafdata());
    if (vtepi_paddr.is_set || is_set(vtepi_paddr.yfilter)) leaf_name_data.push_back(vtepi_paddr.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (topo_id.is_set || is_set(topo_id.yfilter)) leaf_name_data.push_back(topo_id.get_name_leafdata());
    if (ethernet_tag_id.is_set || is_set(ethernet_tag_id.yfilter)) leaf_name_data.push_back(ethernet_tag_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::Imets::Imet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::Imets::Imet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::Imets::Imet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-id")
    {
        tag_id = value;
        tag_id.value_namespace = name_space;
        tag_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prod-id")
    {
        prod_id = value;
        prod_id.value_namespace = name_space;
        prod_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepi-paddr")
    {
        vtepi_paddr = value;
        vtepi_paddr.value_namespace = name_space;
        vtepi_paddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-id")
    {
        topo_id = value;
        topo_id.value_namespace = name_space;
        topo_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-id")
    {
        ethernet_tag_id = value;
        ethernet_tag_id.value_namespace = name_space;
        ethernet_tag_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::Imets::Imet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "tag-id")
    {
        tag_id.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prod-id")
    {
        prod_id.yfilter = yfilter;
    }
    if(value_path == "vtepi-paddr")
    {
        vtepi_paddr.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "topo-id")
    {
        topo_id.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-id")
    {
        ethernet_tag_id.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::Imets::Imet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "tag-id" || name == "ip-addr" || name == "prod-id" || name == "vtepi-paddr" || name == "producer-id" || name == "topo-id" || name == "ethernet-tag-id")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetails()
    :
    mac_detail(this, {})
{

    yang_name = "mac-details"; yang_parent_name = "evi-child-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::~MacDetails()
{
}

bool L2rib::EviChildTables::MacDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_detail.len(); index++)
    {
        if(mac_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::EviChildTables::MacDetails::has_operation() const
{
    for (std::size_t index=0; index<mac_detail.len(); index++)
    {
        if(mac_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::EviChildTables::MacDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-detail")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail>();
        ent_->parent = this;
        mac_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::MacDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::MacDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-detail")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacDetail()
    :
    evi{YType::uint32, "evi"},
    mac_addr{YType::str, "mac-addr"},
    prod_id{YType::uint32, "prod-id"},
    sequence_number{YType::uint32, "sequence-number"},
    flags{YType::str, "flags"},
    baseflags{YType::str, "baseflags"},
    soo{YType::uint32, "soo"},
    slot_id{YType::uint32, "slot-id"},
    esi{YType::str, "esi"},
    last_update_timestamp{YType::uint64, "last-update-timestamp"}
        ,
    mac_route(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute>())
    , rt_tlv(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::RtTlv>())
{
    mac_route->parent = this;
    rt_tlv->parent = this;

    yang_name = "mac-detail"; yang_parent_name = "mac-details"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::~MacDetail()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| mac_addr.is_set
	|| prod_id.is_set
	|| sequence_number.is_set
	|| flags.is_set
	|| baseflags.is_set
	|| soo.is_set
	|| slot_id.is_set
	|| esi.is_set
	|| last_update_timestamp.is_set
	|| (mac_route !=  nullptr && mac_route->has_data())
	|| (rt_tlv !=  nullptr && rt_tlv->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(prod_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(baseflags.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(slot_id.yfilter)
	|| ydk::is_set(esi.yfilter)
	|| ydk::is_set(last_update_timestamp.yfilter)
	|| (mac_route !=  nullptr && mac_route->has_operation())
	|| (rt_tlv !=  nullptr && rt_tlv->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (prod_id.is_set || is_set(prod_id.yfilter)) leaf_name_data.push_back(prod_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (baseflags.is_set || is_set(baseflags.yfilter)) leaf_name_data.push_back(baseflags.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());
    if (esi.is_set || is_set(esi.yfilter)) leaf_name_data.push_back(esi.get_name_leafdata());
    if (last_update_timestamp.is_set || is_set(last_update_timestamp.yfilter)) leaf_name_data.push_back(last_update_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-route")
    {
        if(mac_route == nullptr)
        {
            mac_route = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute>();
        }
        return mac_route;
    }

    if(child_yang_name == "rt-tlv")
    {
        if(rt_tlv == nullptr)
        {
            rt_tlv = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::RtTlv>();
        }
        return rt_tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_route != nullptr)
    {
        _children["mac-route"] = mac_route;
    }

    if(rt_tlv != nullptr)
    {
        _children["rt-tlv"] = rt_tlv;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prod-id")
    {
        prod_id = value;
        prod_id.value_namespace = name_space;
        prod_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseflags")
    {
        baseflags = value;
        baseflags.value_namespace = name_space;
        baseflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esi")
    {
        esi = value;
        esi.value_namespace = name_space;
        esi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp = value;
        last_update_timestamp.value_namespace = name_space;
        last_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "prod-id")
    {
        prod_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "baseflags")
    {
        baseflags.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
    if(value_path == "esi")
    {
        esi.yfilter = yfilter;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-route" || name == "rt-tlv" || name == "evi" || name == "mac-addr" || name == "prod-id" || name == "sequence-number" || name == "flags" || name == "baseflags" || name == "soo" || name == "slot-id" || name == "esi" || name == "last-update-timestamp")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::MacRoute()
    :
    mac_address{YType::str, "mac-address"},
    admin_distance{YType::uint8, "admin-distance"},
    producer_id{YType::uint8, "producer-id"},
    topology_id{YType::uint32, "topology-id"}
        ,
    route(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route>())
{
    route->parent = this;

    yang_name = "mac-route"; yang_parent_name = "mac-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::~MacRoute()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| admin_distance.is_set
	|| producer_id.is_set
	|| topology_id.is_set
	|| (route !=  nullptr && route->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(admin_distance.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (admin_distance.is_set || is_set(admin_distance.yfilter)) leaf_name_data.push_back(admin_distance.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route != nullptr)
    {
        _children["route"] = route;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-distance")
    {
        admin_distance = value;
        admin_distance.value_namespace = name_space;
        admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "admin-distance")
    {
        admin_distance.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route" || name == "mac-address" || name == "admin-distance" || name == "producer-id" || name == "topology-id")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Route()
    :
    type{YType::enumeration, "type"}
        ,
    regular(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular>())
    , evpn_esi(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi>())
    , bmac(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac>())
{
    regular->parent = this;
    evpn_esi->parent = this;
    bmac->parent = this;

    yang_name = "route"; yang_parent_name = "mac-route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::~Route()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (regular !=  nullptr && regular->has_data())
	|| (evpn_esi !=  nullptr && evpn_esi->has_data())
	|| (bmac !=  nullptr && bmac->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (regular !=  nullptr && regular->has_operation())
	|| (evpn_esi !=  nullptr && evpn_esi->has_operation())
	|| (bmac !=  nullptr && bmac->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular")
    {
        if(regular == nullptr)
        {
            regular = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular>();
        }
        return regular;
    }

    if(child_yang_name == "evpn-esi")
    {
        if(evpn_esi == nullptr)
        {
            evpn_esi = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi>();
        }
        return evpn_esi;
    }

    if(child_yang_name == "bmac")
    {
        if(bmac == nullptr)
        {
            bmac = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac>();
        }
        return bmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(regular != nullptr)
    {
        _children["regular"] = regular;
    }

    if(evpn_esi != nullptr)
    {
        _children["evpn-esi"] = evpn_esi;
    }

    if(bmac != nullptr)
    {
        _children["bmac"] = bmac;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regular" || name == "evpn-esi" || name == "bmac" || name == "type")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::Regular()
    :
    next_hop(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop>())
{
    next_hop->parent = this;

    yang_name = "regular"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::~Regular()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::has_data() const
{
    if (is_presence_container) return true;
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_>())
{
    next_hop->parent = this;

    yang_name = "next-hop"; yang_parent_name = "regular"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/regular/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::NextHop_()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::~NextHop_()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/regular/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/regular/next-hop/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Regular::NextHop::NextHop_::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EvpnEsi()
    :
    sequence_number{YType::uint32, "sequence-number"},
    forward_state{YType::boolean, "forward-state"}
        ,
    ethernet_segment_id(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId>())
    , path_list(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList>())
{
    ethernet_segment_id->parent = this;
    path_list->parent = this;

    yang_name = "evpn-esi"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::~EvpnEsi()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number.is_set
	|| forward_state.is_set
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_data())
	|| (path_list !=  nullptr && path_list->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(forward_state.yfilter)
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_operation())
	|| (path_list !=  nullptr && path_list->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-esi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (forward_state.is_set || is_set(forward_state.yfilter)) leaf_name_data.push_back(forward_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-id")
    {
        if(ethernet_segment_id == nullptr)
        {
            ethernet_segment_id = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId>();
        }
        return ethernet_segment_id;
    }

    if(child_yang_name == "path-list")
    {
        if(path_list == nullptr)
        {
            path_list = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList>();
        }
        return path_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_segment_id != nullptr)
    {
        _children["ethernet-segment-id"] = ethernet_segment_id;
    }

    if(path_list != nullptr)
    {
        _children["path-list"] = path_list;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-state")
    {
        forward_state = value;
        forward_state.value_namespace = name_space;
        forward_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "forward-state")
    {
        forward_state.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-id" || name == "path-list" || name == "sequence-number" || name == "forward-state")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::EthernetSegmentId()
    :
    system_priority{YType::uint16, "system-priority"},
    system_id{YType::str, "system-id"},
    port_key{YType::uint16, "port-key"}
{

    yang_name = "ethernet-segment-id"; yang_parent_name = "evpn-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::~EthernetSegmentId()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set
	|| system_id.is_set
	|| port_key.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(port_key.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (port_key.is_set || is_set(port_key.yfilter)) leaf_name_data.push_back(port_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-key")
    {
        port_key = value;
        port_key.value_namespace = name_space;
        port_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "port-key")
    {
        port_key.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::EthernetSegmentId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority" || name == "system-id" || name == "port-key")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathList()
    :
    producer_id{YType::uint8, "producer-id"},
    mac_count{YType::uint32, "mac-count"},
    local_label{YType::uint32, "local-label"}
        ,
    path_list_info(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo>())
    , next_hop_array(this, {})
{
    path_list_info->parent = this;

    yang_name = "path-list"; yang_parent_name = "evpn-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::~PathList()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_data())
            return true;
    }
    return producer_id.is_set
	|| mac_count.is_set
	|| local_label.is_set
	|| (path_list_info !=  nullptr && path_list_info->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::has_operation() const
{
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (path_list_info !=  nullptr && path_list_info->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-info")
    {
        if(path_list_info == nullptr)
        {
            path_list_info = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo>();
        }
        return path_list_info;
    }

    if(child_yang_name == "next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray>();
        ent_->parent = this;
        next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_info != nullptr)
    {
        _children["path-list-info"] = path_list_info;
    }

    count_ = 0;
    for (auto ent_ : next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "mac-count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-info" || name == "next-hop-array" || name == "producer-id" || name == "mac-count" || name == "local-label")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListInfo()
    :
    type{YType::enumeration, "type"}
        ,
    path_list_esi(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi>())
    , path_list_mac(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac>())
{
    path_list_esi->parent = this;
    path_list_mac->parent = this;

    yang_name = "path-list-info"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::~PathListInfo()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (path_list_esi !=  nullptr && path_list_esi->has_data())
	|| (path_list_mac !=  nullptr && path_list_mac->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (path_list_esi !=  nullptr && path_list_esi->has_operation())
	|| (path_list_mac !=  nullptr && path_list_mac->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-esi")
    {
        if(path_list_esi == nullptr)
        {
            path_list_esi = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi>();
        }
        return path_list_esi;
    }

    if(child_yang_name == "path-list-mac")
    {
        if(path_list_mac == nullptr)
        {
            path_list_mac = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac>();
        }
        return path_list_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_esi != nullptr)
    {
        _children["path-list-esi"] = path_list_esi;
    }

    if(path_list_mac != nullptr)
    {
        _children["path-list-mac"] = path_list_mac;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-esi" || name == "path-list-mac" || name == "type")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::PathListEsi()
    :
    resolved{YType::boolean, "resolved"}
        ,
    ethernet_segment_id(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId>())
    , mac_update_next_hop_array(this, {})
{
    ethernet_segment_id->parent = this;

    yang_name = "path-list-esi"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::~PathListEsi()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_data())
            return true;
    }
    return resolved.is_set
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::has_operation() const
{
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-esi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-id")
    {
        if(ethernet_segment_id == nullptr)
        {
            ethernet_segment_id = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId>();
        }
        return ethernet_segment_id;
    }

    if(child_yang_name == "mac-update-next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray>();
        ent_->parent = this;
        mac_update_next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_segment_id != nullptr)
    {
        _children["ethernet-segment-id"] = ethernet_segment_id;
    }

    count_ = 0;
    for (auto ent_ : mac_update_next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-id" || name == "mac-update-next-hop-array" || name == "resolved")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::EthernetSegmentId()
    :
    system_priority{YType::uint16, "system-priority"},
    system_id{YType::str, "system-id"},
    port_key{YType::uint16, "port-key"}
{

    yang_name = "ethernet-segment-id"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::~EthernetSegmentId()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set
	|| system_id.is_set
	|| port_key.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(port_key.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (port_key.is_set || is_set(port_key.yfilter)) leaf_name_data.push_back(port_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-key")
    {
        port_key = value;
        port_key.value_namespace = name_space;
        port_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "port-key")
    {
        port_key.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority" || name == "system-id" || name == "port-key")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::MacUpdateNextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "mac-update-next-hop-array"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::~MacUpdateNextHopArray()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-update-next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "mac-update-next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::PathListMac()
    :
    mac_address{YType::str, "mac-address"}
{

    yang_name = "path-list-mac"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::~PathListMac()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::PathListInfo::PathListMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "next-hop-array"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::~NextHopArray()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/evpn-esi/path-list/next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::EvpnEsi::PathList::NextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::Bmac()
    :
    bmac_address{YType::str, "bmac-address"},
    forward_state{YType::boolean, "forward-state"}
        ,
    path_list(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList>())
{
    path_list->parent = this;

    yang_name = "bmac"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::~Bmac()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::has_data() const
{
    if (is_presence_container) return true;
    return bmac_address.is_set
	|| forward_state.is_set
	|| (path_list !=  nullptr && path_list->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmac_address.yfilter)
	|| ydk::is_set(forward_state.yfilter)
	|| (path_list !=  nullptr && path_list->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmac_address.is_set || is_set(bmac_address.yfilter)) leaf_name_data.push_back(bmac_address.get_name_leafdata());
    if (forward_state.is_set || is_set(forward_state.yfilter)) leaf_name_data.push_back(forward_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list")
    {
        if(path_list == nullptr)
        {
            path_list = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList>();
        }
        return path_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list != nullptr)
    {
        _children["path-list"] = path_list;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmac-address")
    {
        bmac_address = value;
        bmac_address.value_namespace = name_space;
        bmac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-state")
    {
        forward_state = value;
        forward_state.value_namespace = name_space;
        forward_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmac-address")
    {
        bmac_address.yfilter = yfilter;
    }
    if(value_path == "forward-state")
    {
        forward_state.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list" || name == "bmac-address" || name == "forward-state")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathList()
    :
    producer_id{YType::uint8, "producer-id"},
    mac_count{YType::uint32, "mac-count"},
    local_label{YType::uint32, "local-label"}
        ,
    path_list_info(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo>())
    , next_hop_array(this, {})
{
    path_list_info->parent = this;

    yang_name = "path-list"; yang_parent_name = "bmac"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::~PathList()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_data())
            return true;
    }
    return producer_id.is_set
	|| mac_count.is_set
	|| local_label.is_set
	|| (path_list_info !=  nullptr && path_list_info->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::has_operation() const
{
    for (std::size_t index=0; index<next_hop_array.len(); index++)
    {
        if(next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| (path_list_info !=  nullptr && path_list_info->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-info")
    {
        if(path_list_info == nullptr)
        {
            path_list_info = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo>();
        }
        return path_list_info;
    }

    if(child_yang_name == "next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray>();
        ent_->parent = this;
        next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_info != nullptr)
    {
        _children["path-list-info"] = path_list_info;
    }

    count_ = 0;
    for (auto ent_ : next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "mac-count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-info" || name == "next-hop-array" || name == "producer-id" || name == "mac-count" || name == "local-label")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListInfo()
    :
    type{YType::enumeration, "type"}
        ,
    path_list_esi(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi>())
    , path_list_mac(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac>())
{
    path_list_esi->parent = this;
    path_list_mac->parent = this;

    yang_name = "path-list-info"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::~PathListInfo()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (path_list_esi !=  nullptr && path_list_esi->has_data())
	|| (path_list_mac !=  nullptr && path_list_mac->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (path_list_esi !=  nullptr && path_list_esi->has_operation())
	|| (path_list_mac !=  nullptr && path_list_mac->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-list-esi")
    {
        if(path_list_esi == nullptr)
        {
            path_list_esi = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi>();
        }
        return path_list_esi;
    }

    if(child_yang_name == "path-list-mac")
    {
        if(path_list_mac == nullptr)
        {
            path_list_mac = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac>();
        }
        return path_list_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_list_esi != nullptr)
    {
        _children["path-list-esi"] = path_list_esi;
    }

    if(path_list_mac != nullptr)
    {
        _children["path-list-mac"] = path_list_mac;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-list-esi" || name == "path-list-mac" || name == "type")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::PathListEsi()
    :
    resolved{YType::boolean, "resolved"}
        ,
    ethernet_segment_id(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId>())
    , mac_update_next_hop_array(this, {})
{
    ethernet_segment_id->parent = this;

    yang_name = "path-list-esi"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::~PathListEsi()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_data())
            return true;
    }
    return resolved.is_set
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::has_operation() const
{
    for (std::size_t index=0; index<mac_update_next_hop_array.len(); index++)
    {
        if(mac_update_next_hop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(resolved.yfilter)
	|| (ethernet_segment_id !=  nullptr && ethernet_segment_id->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-esi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolved.is_set || is_set(resolved.yfilter)) leaf_name_data.push_back(resolved.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment-id")
    {
        if(ethernet_segment_id == nullptr)
        {
            ethernet_segment_id = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId>();
        }
        return ethernet_segment_id;
    }

    if(child_yang_name == "mac-update-next-hop-array")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray>();
        ent_->parent = this;
        mac_update_next_hop_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_segment_id != nullptr)
    {
        _children["ethernet-segment-id"] = ethernet_segment_id;
    }

    count_ = 0;
    for (auto ent_ : mac_update_next_hop_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolved")
    {
        resolved = value;
        resolved.value_namespace = name_space;
        resolved.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolved")
    {
        resolved.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment-id" || name == "mac-update-next-hop-array" || name == "resolved")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::EthernetSegmentId()
    :
    system_priority{YType::uint16, "system-priority"},
    system_id{YType::str, "system-id"},
    port_key{YType::uint16, "port-key"}
{

    yang_name = "ethernet-segment-id"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::~EthernetSegmentId()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set
	|| system_id.is_set
	|| port_key.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(port_key.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (port_key.is_set || is_set(port_key.yfilter)) leaf_name_data.push_back(port_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-key")
    {
        port_key = value;
        port_key.value_namespace = name_space;
        port_key.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "port-key")
    {
        port_key.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::EthernetSegmentId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-priority" || name == "system-id" || name == "port-key")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::MacUpdateNextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "mac-update-next-hop-array"; yang_parent_name = "path-list-esi"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::~MacUpdateNextHopArray()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/path-list-info/path-list-esi/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-update-next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "mac-update-next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/path-list-info/path-list-esi/mac-update-next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListEsi::MacUpdateNextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::PathListMac()
    :
    mac_address{YType::str, "mac-address"}
{

    yang_name = "path-list-mac"; yang_parent_name = "path-list-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::~PathListMac()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/path-list-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-list-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::PathListInfo::PathListMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHopArray()
    :
    topology_id{YType::uint32, "topology-id"},
    flags{YType::uint16, "flags"}
        ,
    next_hop(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop>())
{
    next_hop->parent = this;

    yang_name = "next-hop-array"; yang_parent_name = "path-list"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::~NextHopArray()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::has_data() const
{
    if (is_presence_container) return true;
    return topology_id.is_set
	|| flags.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop" || name == "topology-id" || name == "flags")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::NextHop()
    :
    type{YType::enumeration, "type"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    mac{YType::str, "mac"},
    interface_handle{YType::str, "interface-handle"},
    xid{YType::uint32, "xid"}
        ,
    labeled(std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled>())
{
    labeled->parent = this;

    yang_name = "next-hop"; yang_parent_name = "next-hop-array"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::~NextHop()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| mac.is_set
	|| interface_handle.is_set
	|| xid.is_set
	|| (labeled !=  nullptr && labeled->has_data());
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(xid.yfilter)
	|| (labeled !=  nullptr && labeled->has_operation());
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/next-hop-array/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (xid.is_set || is_set(xid.yfilter)) leaf_name_data.push_back(xid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labeled")
    {
        if(labeled == nullptr)
        {
            labeled = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled>();
        }
        return labeled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(labeled != nullptr)
    {
        _children["labeled"] = labeled;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid")
    {
        xid = value;
        xid.value_namespace = name_space;
        xid.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "xid")
    {
        xid.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labeled" || name == "type" || name == "ipv4" || name == "ipv6" || name == "mac" || name == "interface-handle" || name == "xid")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::Labeled()
    :
    address_family{YType::enumeration, "address-family"},
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    internal{YType::boolean, "internal"}
{

    yang_name = "labeled"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::~Labeled()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ip_address.is_set
	|| label.is_set
	|| internal.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(internal.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/mac-route/route/bmac/path-list/next-hop-array/next-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::MacRoute::Route::Bmac::PathList::NextHopArray::NextHop::Labeled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ip-address" || name == "label" || name == "internal")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::RtTlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_len{YType::uint16, "tlv-len"}
        ,
    tlv_val(this, {})
{

    yang_name = "rt-tlv"; yang_parent_name = "mac-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::~RtTlv()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv_val.len(); index++)
    {
        if(tlv_val[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_len.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::has_operation() const
{
    for (std::size_t index=0; index<tlv_val.len(); index++)
    {
        if(tlv_val[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_len.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_len.is_set || is_set(tlv_len.yfilter)) leaf_name_data.push_back(tlv_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-val")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal>();
        ent_->parent = this;
        tlv_val.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv_val.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-len")
    {
        tlv_len = value;
        tlv_len.value_namespace = name_space;
        tlv_len.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-len")
    {
        tlv_len.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-val" || name == "tlv-type" || name == "tlv-len")
        return true;
    return false;
}

L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::TlvVal()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "tlv-val"; yang_parent_name = "rt-tlv"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::~TlvVal()
{
}

bool L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/mac-details/mac-detail/rt-tlv/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-val";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::MacDetails::MacDetail::RtTlv::TlvVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2rib::EviChildTables::ImetDetails::ImetDetails()
    :
    imet_detail(this, {})
{

    yang_name = "imet-details"; yang_parent_name = "evi-child-tables"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::ImetDetails::~ImetDetails()
{
}

bool L2rib::EviChildTables::ImetDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<imet_detail.len(); index++)
    {
        if(imet_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::EviChildTables::ImetDetails::has_operation() const
{
    for (std::size_t index=0; index<imet_detail.len(); index++)
    {
        if(imet_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::EviChildTables::ImetDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::ImetDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imet-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::ImetDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::ImetDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imet-detail")
    {
        auto ent_ = std::make_shared<L2rib::EviChildTables::ImetDetails::ImetDetail>();
        ent_->parent = this;
        imet_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::ImetDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : imet_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::EviChildTables::ImetDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::EviChildTables::ImetDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::EviChildTables::ImetDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imet-detail")
        return true;
    return false;
}

L2rib::EviChildTables::ImetDetails::ImetDetail::ImetDetail()
    :
    evi{YType::uint32, "evi"},
    tag_id{YType::uint32, "tag-id"},
    ip_addr{YType::str, "ip-addr"},
    prod_id{YType::uint32, "prod-id"},
    tunnel_id{YType::str, "tunnel-id"},
    flags{YType::uint32, "flags"},
    tunnel_type{YType::uint32, "tunnel-type"},
    l2r_label{YType::uint32, "l2r-label"},
    encap_type{YType::uint32, "encap-type"},
    last_update_timestamp{YType::uint64, "last-update-timestamp"}
        ,
    imet_route_base(std::make_shared<L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase>())
{
    imet_route_base->parent = this;

    yang_name = "imet-detail"; yang_parent_name = "imet-details"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::ImetDetails::ImetDetail::~ImetDetail()
{
}

bool L2rib::EviChildTables::ImetDetails::ImetDetail::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| tag_id.is_set
	|| ip_addr.is_set
	|| prod_id.is_set
	|| tunnel_id.is_set
	|| flags.is_set
	|| tunnel_type.is_set
	|| l2r_label.is_set
	|| encap_type.is_set
	|| last_update_timestamp.is_set
	|| (imet_route_base !=  nullptr && imet_route_base->has_data());
}

bool L2rib::EviChildTables::ImetDetails::ImetDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(tag_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prod_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(l2r_label.yfilter)
	|| ydk::is_set(encap_type.yfilter)
	|| ydk::is_set(last_update_timestamp.yfilter)
	|| (imet_route_base !=  nullptr && imet_route_base->has_operation());
}

std::string L2rib::EviChildTables::ImetDetails::ImetDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/imet-details/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::ImetDetails::ImetDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imet-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::ImetDetails::ImetDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (tag_id.is_set || is_set(tag_id.yfilter)) leaf_name_data.push_back(tag_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prod_id.is_set || is_set(prod_id.yfilter)) leaf_name_data.push_back(prod_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (l2r_label.is_set || is_set(l2r_label.yfilter)) leaf_name_data.push_back(l2r_label.get_name_leafdata());
    if (encap_type.is_set || is_set(encap_type.yfilter)) leaf_name_data.push_back(encap_type.get_name_leafdata());
    if (last_update_timestamp.is_set || is_set(last_update_timestamp.yfilter)) leaf_name_data.push_back(last_update_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::ImetDetails::ImetDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imet-route-base")
    {
        if(imet_route_base == nullptr)
        {
            imet_route_base = std::make_shared<L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase>();
        }
        return imet_route_base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::ImetDetails::ImetDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(imet_route_base != nullptr)
    {
        _children["imet-route-base"] = imet_route_base;
    }

    return _children;
}

void L2rib::EviChildTables::ImetDetails::ImetDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-id")
    {
        tag_id = value;
        tag_id.value_namespace = name_space;
        tag_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prod-id")
    {
        prod_id = value;
        prod_id.value_namespace = name_space;
        prod_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2r-label")
    {
        l2r_label = value;
        l2r_label.value_namespace = name_space;
        l2r_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-type")
    {
        encap_type = value;
        encap_type.value_namespace = name_space;
        encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp = value;
        last_update_timestamp.value_namespace = name_space;
        last_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::ImetDetails::ImetDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "tag-id")
    {
        tag_id.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prod-id")
    {
        prod_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "l2r-label")
    {
        l2r_label.yfilter = yfilter;
    }
    if(value_path == "encap-type")
    {
        encap_type.yfilter = yfilter;
    }
    if(value_path == "last-update-timestamp")
    {
        last_update_timestamp.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::ImetDetails::ImetDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imet-route-base" || name == "evi" || name == "tag-id" || name == "ip-addr" || name == "prod-id" || name == "tunnel-id" || name == "flags" || name == "tunnel-type" || name == "l2r-label" || name == "encap-type" || name == "last-update-timestamp")
        return true;
    return false;
}

L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::ImetRouteBase()
    :
    vtepi_paddr{YType::str, "vtepi-paddr"},
    producer_id{YType::uint8, "producer-id"},
    topo_id{YType::uint32, "topo-id"},
    ethernet_tag_id{YType::uint32, "ethernet-tag-id"}
{

    yang_name = "imet-route-base"; yang_parent_name = "imet-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::~ImetRouteBase()
{
}

bool L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::has_data() const
{
    if (is_presence_container) return true;
    return vtepi_paddr.is_set
	|| producer_id.is_set
	|| topo_id.is_set
	|| ethernet_tag_id.is_set;
}

bool L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vtepi_paddr.yfilter)
	|| ydk::is_set(producer_id.yfilter)
	|| ydk::is_set(topo_id.yfilter)
	|| ydk::is_set(ethernet_tag_id.yfilter);
}

std::string L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evi-child-tables/imet-details/imet-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imet-route-base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vtepi_paddr.is_set || is_set(vtepi_paddr.yfilter)) leaf_name_data.push_back(vtepi_paddr.get_name_leafdata());
    if (producer_id.is_set || is_set(producer_id.yfilter)) leaf_name_data.push_back(producer_id.get_name_leafdata());
    if (topo_id.is_set || is_set(topo_id.yfilter)) leaf_name_data.push_back(topo_id.get_name_leafdata());
    if (ethernet_tag_id.is_set || is_set(ethernet_tag_id.yfilter)) leaf_name_data.push_back(ethernet_tag_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vtepi-paddr")
    {
        vtepi_paddr = value;
        vtepi_paddr.value_namespace = name_space;
        vtepi_paddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer-id")
    {
        producer_id = value;
        producer_id.value_namespace = name_space;
        producer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-id")
    {
        topo_id = value;
        topo_id.value_namespace = name_space;
        topo_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-tag-id")
    {
        ethernet_tag_id = value;
        ethernet_tag_id.value_namespace = name_space;
        ethernet_tag_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vtepi-paddr")
    {
        vtepi_paddr.yfilter = yfilter;
    }
    if(value_path == "producer-id")
    {
        producer_id.yfilter = yfilter;
    }
    if(value_path == "topo-id")
    {
        topo_id.yfilter = yfilter;
    }
    if(value_path == "ethernet-tag-id")
    {
        ethernet_tag_id.yfilter = yfilter;
    }
}

bool L2rib::EviChildTables::ImetDetails::ImetDetail::ImetRouteBase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtepi-paddr" || name == "producer-id" || name == "topo-id" || name == "ethernet-tag-id")
        return true;
    return false;
}

L2rib::Evis::Evis()
    :
    evi(this, {"evi"})
{

    yang_name = "evis"; yang_parent_name = "l2rib"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Evis::~Evis()
{
}

bool L2rib::Evis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<evi.len(); index++)
    {
        if(evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2rib::Evis::has_operation() const
{
    for (std::size_t index=0; index<evi.len(); index++)
    {
        if(evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2rib::Evis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Evis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Evis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Evis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evi")
    {
        auto ent_ = std::make_shared<L2rib::Evis::Evi>();
        ent_->parent = this;
        evi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Evis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : evi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2rib::Evis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2rib::Evis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2rib::Evis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi")
        return true;
    return false;
}

L2rib::Evis::Evi::Evi()
    :
    evi{YType::uint32, "evi"},
    topology_id{YType::uint32, "topology-id"},
    topology_name{YType::str, "topology-name"},
    topology_type{YType::uint32, "topology-type"}
{

    yang_name = "evi"; yang_parent_name = "evis"; is_top_level_class = false; has_list_ancestor = false; 
}

L2rib::Evis::Evi::~Evi()
{
}

bool L2rib::Evis::Evi::has_data() const
{
    if (is_presence_container) return true;
    return evi.is_set
	|| topology_id.is_set
	|| topology_name.is_set
	|| topology_type.is_set;
}

bool L2rib::Evis::Evi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evi.yfilter)
	|| ydk::is_set(topology_id.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(topology_type.yfilter);
}

std::string L2rib::Evis::Evi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2rib-oper:l2rib/evis/" << get_segment_path();
    return path_buffer.str();
}

std::string L2rib::Evis::Evi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi";
    ADD_KEY_TOKEN(evi, "evi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2rib::Evis::Evi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.yfilter)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (topology_id.is_set || is_set(topology_id.yfilter)) leaf_name_data.push_back(topology_id.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (topology_type.is_set || is_set(topology_type.yfilter)) leaf_name_data.push_back(topology_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2rib::Evis::Evi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2rib::Evis::Evi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2rib::Evis::Evi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evi")
    {
        evi = value;
        evi.value_namespace = name_space;
        evi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-id")
    {
        topology_id = value;
        topology_id.value_namespace = name_space;
        topology_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-type")
    {
        topology_type = value;
        topology_type.value_namespace = name_space;
        topology_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2rib::Evis::Evi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evi")
    {
        evi.yfilter = yfilter;
    }
    if(value_path == "topology-id")
    {
        topology_id.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "topology-type")
    {
        topology_type.yfilter = yfilter;
    }
}

bool L2rib::Evis::Evi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evi" || name == "topology-id" || name == "topology-name" || name == "topology-type")
        return true;
    return false;
}

const Enum::YLeaf L2ribMacRoute::l2rib_mac_route_type_invalid {0, "l2rib-mac-route-type-invalid"};
const Enum::YLeaf L2ribMacRoute::l2rib_mac_route_type_regular {1, "l2rib-mac-route-type-regular"};
const Enum::YLeaf L2ribMacRoute::l2rib_mac_route_type_evpn_esi {2, "l2rib-mac-route-type-evpn-esi"};
const Enum::YLeaf L2ribMacRoute::l2rib_mac_route_type_bmac {3, "l2rib-mac-route-type-bmac"};

const Enum::YLeaf L2ribAfi::l2rib_address_family_ipv4 {0, "l2rib-address-family-ipv4"};
const Enum::YLeaf L2ribAfi::l2rib_address_family_ipv6 {1, "l2rib-address-family-ipv6"};
const Enum::YLeaf L2ribAfi::l2rib_address_family_invalid {2, "l2rib-address-family-invalid"};

const Enum::YLeaf L2ribNextHop::l2rib_next_hop_invalid {0, "l2rib-next-hop-invalid"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_interface_ordinal {1, "l2rib-next-hop-interface-ordinal"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_interface_index {2, "l2rib-next-hop-interface-index"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_mac {3, "l2rib-next-hop-mac"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_ipv4 {4, "l2rib-next-hop-ipv4"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_ipv6 {5, "l2rib-next-hop-ipv6"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_overlay {6, "l2rib-next-hop-overlay"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_site_index {7, "l2rib-next-hop-site-index"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_label_ed {8, "l2rib-next-hop-label-ed"};
const Enum::YLeaf L2ribNextHop::l2rib_next_hop_xid {9, "l2rib-next-hop-xid"};

const Enum::YLeaf L2ribBagProducerState::l2rib_bag_prod_state_initial {0, "l2rib-bag-prod-state-initial"};
const Enum::YLeaf L2ribBagProducerState::l2rib_bag_prod_state_staled {1, "l2rib-bag-prod-state-staled"};
const Enum::YLeaf L2ribBagProducerState::l2rib_bag_prod_state_re_connected {2, "l2rib-bag-prod-state-re-connected"};
const Enum::YLeaf L2ribBagProducerState::l2rib_bag_prod_state_converged {3, "l2rib-bag-prod-state-converged"};
const Enum::YLeaf L2ribBagProducerState::l2rib_bag_prod_state_delete_p_end {4, "l2rib-bag-prod-state-delete-p-end"};

const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_none {0, "l2rib-bag-prod-none"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_best_route {1, "l2rib-bag-prod-best-route"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_static {2, "l2rib-bag-prod-static"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_local {3, "l2rib-bag-prod-local"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_isis {4, "l2rib-bag-prod-isis"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_bgp {5, "l2rib-bag-prod-bgp"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_igmp {6, "l2rib-bag-prod-igmp"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_mld {7, "l2rib-bag-prod-prod-mld"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_otv {8, "l2rib-bag-prod-prod-otv"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_l2vpn {9, "l2rib-bag-prod-prod-l2vpn"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_mac_mgr {10, "l2rib-bag-prod-prod-mac-mgr"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_vxlan {11, "l2rib-bag-prod-prod-vxlan"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_hmm {12, "l2rib-bag-prod-prod-hmm"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_arp {13, "l2rib-bag-prod-prod-arp"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_local_proxy {14, "l2rib-bag-prod-prod-local-proxy"};
const Enum::YLeaf L2ribBagProducerId::l2rib_bag_prod_prod_all {255, "l2rib-bag-prod-prod-all"};

const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_min {0, "l2rib-bag-obj-type-min"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_all {1, "l2rib-bag-obj-type-all"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_mac {2, "l2rib-bag-obj-type-mac"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_ipv4_mcast {3, "l2rib-bag-obj-type-ipv4-mcast"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_ipv6_mcast {4, "l2rib-bag-obj-type-ipv6-mcast"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_topology {5, "l2rib-bag-obj-type-topology"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_ead {6, "l2rib-bag-obj-type-ead"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_evpn_pl {7, "l2rib-bag-obj-type-evpn-pl"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_topo_attribute {8, "l2rib-bag-obj-type-topo-attribute"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_imet_route {9, "l2rib-bag-obj-type-imet-route"};
const Enum::YLeaf L2ribBagObj::l2rib_bag_obj_type_mac_ip {13, "l2rib-bag-obj-type-mac-ip"};


}
}

