
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_6.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_4.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_7.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::IpSecAddr()
    :
    secondary_addr{YType::str, "secondary-addr"},
    secondary_prefix{YType::uint32, "secondary-prefix"}
{

    yang_name = "ip-sec-addr"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::~IpSecAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_data() const
{
    if (is_presence_container) return true;
    return secondary_addr.is_set
	|| secondary_prefix.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secondary_addr.yfilter)
	|| ydk::is_set(secondary_prefix.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-sec-addr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secondary_addr.is_set || is_set(secondary_addr.yfilter)) leaf_name_data.push_back(secondary_addr.get_name_leafdata());
    if (secondary_prefix.is_set || is_set(secondary_prefix.yfilter)) leaf_name_data.push_back(secondary_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr = value;
        secondary_addr.value_namespace = name_space;
        secondary_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix = value;
        secondary_prefix.value_namespace = name_space;
        secondary_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "secondary-addr")
    {
        secondary_addr.yfilter = yfilter;
    }
    if(value_path == "secondary-prefix")
    {
        secondary_prefix.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Areas::Area::Interfaces::Interface::IpSecAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-addr" || name == "secondary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Database()
    :
    database_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas>())
    , database_summaries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries>())
    , database_summary_as(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs>())
    , lsas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas>())
    , lsa_summaries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries>())
{
    database_areas->parent = this;
    database_summaries->parent = this;
    database_summary_as->parent = this;
    lsas->parent = this;
    lsa_summaries->parent = this;

    yang_name = "database"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::~Database()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::has_data() const
{
    if (is_presence_container) return true;
    return (database_areas !=  nullptr && database_areas->has_data())
	|| (database_summaries !=  nullptr && database_summaries->has_data())
	|| (database_summary_as !=  nullptr && database_summary_as->has_data())
	|| (lsas !=  nullptr && lsas->has_data())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::has_operation() const
{
    return is_set(yfilter)
	|| (database_areas !=  nullptr && database_areas->has_operation())
	|| (database_summaries !=  nullptr && database_summaries->has_operation())
	|| (database_summary_as !=  nullptr && database_summary_as->has_operation())
	|| (lsas !=  nullptr && lsas->has_operation())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-areas")
    {
        if(database_areas == nullptr)
        {
            database_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas>();
        }
        return database_areas;
    }

    if(child_yang_name == "database-summaries")
    {
        if(database_summaries == nullptr)
        {
            database_summaries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries>();
        }
        return database_summaries;
    }

    if(child_yang_name == "database-summary-as")
    {
        if(database_summary_as == nullptr)
        {
            database_summary_as = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs>();
        }
        return database_summary_as;
    }

    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas>();
        }
        return lsas;
    }

    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries>();
        }
        return lsa_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_areas != nullptr)
    {
        _children["database-areas"] = database_areas;
    }

    if(database_summaries != nullptr)
    {
        _children["database-summaries"] = database_summaries;
    }

    if(database_summary_as != nullptr)
    {
        _children["database-summary-as"] = database_summary_as;
    }

    if(lsas != nullptr)
    {
        _children["lsas"] = lsas;
    }

    if(lsa_summaries != nullptr)
    {
        _children["lsa-summaries"] = lsa_summaries;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-areas" || name == "database-summaries" || name == "database-summary-as" || name == "lsas" || name == "lsa-summaries")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseAreas()
    :
    database_area(this, {"area_id"})
{

    yang_name = "database-areas"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::~DatabaseAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<database_area.len(); index++)
    {
        if(database_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::has_operation() const
{
    for (std::size_t index=0; index<database_area.len(); index++)
    {
        if(database_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-area")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea>();
        ent_->parent = this;
        database_area.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : database_area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::DatabaseArea()
    :
    area_id{YType::uint32, "area-id"}
        ,
    lsas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas>())
    , lsa_summaries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>())
{
    lsas->parent = this;
    lsa_summaries->parent = this;

    yang_name = "database-area"; yang_parent_name = "database-areas"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::~DatabaseArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::has_data() const
{
    if (is_presence_container) return true;
    return area_id.is_set
	|| (lsas !=  nullptr && lsas->has_data())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (lsas !=  nullptr && lsas->has_operation())
	|| (lsa_summaries !=  nullptr && lsa_summaries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-area";
    ADD_KEY_TOKEN(area_id, "area-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsas")
    {
        if(lsas == nullptr)
        {
            lsas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas>();
        }
        return lsas;
    }

    if(child_yang_name == "lsa-summaries")
    {
        if(lsa_summaries == nullptr)
        {
            lsa_summaries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries>();
        }
        return lsa_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsas != nullptr)
    {
        _children["lsas"] = lsas;
    }

    if(lsa_summaries != nullptr)
    {
        _children["lsa-summaries"] = lsa_summaries;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsas" || name == "lsa-summaries" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsas()
    :
    lsa(this, {})
{

    yang_name = "lsas"; yang_parent_name = "database-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsa.len(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.len(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa>();
        ent_->parent = this;
        lsa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::Lsa()
    :
    area_id{YType::uint32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"}
        ,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>())
    , lsa_detail_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>())
    , lsa_internal_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>())
{
    lsa_header->parent = this;
    lsa_detail_data->parent = this;
    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_data() const
{
    if (is_presence_container) return true;
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_header != nullptr)
    {
        _children["lsa-header"] = lsa_header;
    }

    if(lsa_detail_data != nullptr)
    {
        _children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_internal_data != nullptr)
    {
        _children["lsa-internal-data"] = lsa_internal_data;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail-data" || name == "lsa-internal-data" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    tos_capable{YType::boolean, "tos-capable"},
    nssa_translation{YType::boolean, "nssa-translation"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    routing_bit{YType::boolean, "routing-bit"},
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    length{YType::uint16, "length"},
    sum_origin{YType::uint16, "sum-origin"},
    ase_origin{YType::uint16, "ase-origin"},
    in_sync{YType::uint8, "in-sync"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"}
        ,
    lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
    , lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
    , lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
    , not_delete(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_throttle_timer->parent = this;
    lsa_last_updated_time->parent = this;
    lsadb_base_time_stamp->parent = this;
    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_data() const
{
    if (is_presence_container) return true;
    return tos_capable.is_set
	|| nssa_translation.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| routing_bit.is_set
	|| advertising_router_reachable.is_set
	|| length.is_set
	|| sum_origin.is_set
	|| ase_origin.is_set
	|| in_sync.is_set
	|| lsa_prefix_priority.is_set
	|| new_lsa_prefix_priority.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_capable.yfilter)
	|| ydk::is_set(nssa_translation.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(dn_bit.yfilter)
	|| ydk::is_set(lsa_rate_limit_due_time.yfilter)
	|| ydk::is_set(lsadb_base_clock.yfilter)
	|| ydk::is_set(routing_bit.yfilter)
	|| ydk::is_set(advertising_router_reachable.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(sum_origin.yfilter)
	|| ydk::is_set(ase_origin.yfilter)
	|| ydk::is_set(in_sync.yfilter)
	|| ydk::is_set(lsa_prefix_priority.yfilter)
	|| ydk::is_set(new_lsa_prefix_priority.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_capable.is_set || is_set(tos_capable.yfilter)) leaf_name_data.push_back(tos_capable.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.yfilter)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.yfilter)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.yfilter)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.yfilter)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.yfilter)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.yfilter)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.yfilter)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.yfilter)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.yfilter)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.yfilter)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_throttle_timer != nullptr)
    {
        _children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsa_last_updated_time != nullptr)
    {
        _children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        _children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        _children["not-delete"] = not_delete;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-capable")
    {
        tos_capable = value;
        tos_capable.value_namespace = name_space;
        tos_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
        dn_bit.value_namespace = name_space;
        dn_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
        lsa_rate_limit_due_time.value_namespace = name_space;
        lsa_rate_limit_due_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
        lsadb_base_clock.value_namespace = name_space;
        lsadb_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
        routing_bit.value_namespace = name_space;
        routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
        advertising_router_reachable.value_namespace = name_space;
        advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
        sum_origin.value_namespace = name_space;
        sum_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
        ase_origin.value_namespace = name_space;
        ase_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
        in_sync.value_namespace = name_space;
        in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
        lsa_prefix_priority.value_namespace = name_space;
        lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
        new_lsa_prefix_priority.value_namespace = name_space;
        new_lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-capable")
    {
        tos_capable.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "dn-bit")
    {
        dn_bit.yfilter = yfilter;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time.yfilter = yfilter;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock.yfilter = yfilter;
    }
    if(value_path == "routing-bit")
    {
        routing_bit.yfilter = yfilter;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "sum-origin")
    {
        sum_origin.yfilter = yfilter;
    }
    if(value_path == "ase-origin")
    {
        ase_origin.yfilter = yfilter;
    }
    if(value_path == "in-sync")
    {
        in_sync.yfilter = yfilter;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-throttle-timer" || name == "lsa-last-updated-time" || name == "lsadb-base-time-stamp" || name == "not-delete" || name == "tos-capable" || name == "nssa-translation" || name == "demand-circuit" || name == "dn-bit" || name == "lsa-rate-limit-due-time" || name == "lsadb-base-clock" || name == "routing-bit" || name == "advertising-router-reachable" || name == "length" || name == "sum-origin" || name == "ase-origin" || name == "in-sync" || name == "lsa-prefix-priority" || name == "new-lsa-prefix-priority" || name == "lsa-flood-required-post-fail-over")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"},
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"}
{

    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    if (is_presence_container) return true;
    return timer_location.is_set
	|| timer_type.is_set
	|| second_table_index.is_set
	|| minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| last_inst_minute_table_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_location.yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(last_inst_second_table_index.yfilter)
	|| ydk::is_set(last_inst_minute_table_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_location.is_set || is_set(timer_location.yfilter)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.yfilter)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.yfilter)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-location")
    {
        timer_location = value;
        timer_location.value_namespace = name_space;
        timer_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
        last_inst_second_table_index.value_namespace = name_space;
        last_inst_second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
        last_inst_minute_table_index.value_namespace = name_space;
        last_inst_minute_table_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-location")
    {
        timer_location.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-location" || name == "timer-type" || name == "second-table-index" || name == "minute-table-index" || name == "last-inst-second-table-index" || name == "last-inst-minute-table-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    free_time{YType::uint32, "free-time"},
    no_delete{YType::boolean, "no-delete"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    routing_table{YType::boolean, "routing-table"},
    acknowledgement{YType::boolean, "acknowledgement"},
    maximum_age{YType::boolean, "maximum-age"},
    partial_spf{YType::boolean, "partial-spf"},
    flood_pending{YType::boolean, "flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"}
{

    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    if (is_presence_container) return true;
    return free_time.is_set
	|| no_delete.is_set
	|| neighbor_exchange.is_set
	|| routing_table.is_set
	|| acknowledgement.is_set
	|| maximum_age.is_set
	|| partial_spf.is_set
	|| flood_pending.is_set
	|| rate_limit.is_set
	|| nsr_ack_pending.is_set
	|| sum_orig_pending.is_set
	|| nsr_flood_required.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(no_delete.yfilter)
	|| ydk::is_set(neighbor_exchange.yfilter)
	|| ydk::is_set(routing_table.yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(maximum_age.yfilter)
	|| ydk::is_set(partial_spf.yfilter)
	|| ydk::is_set(flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(nsr_ack_pending.yfilter)
	|| ydk::is_set(sum_orig_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.yfilter)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.yfilter)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.yfilter)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.yfilter)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.yfilter)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.yfilter)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.yfilter)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.yfilter)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
        no_delete.value_namespace = name_space;
        no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
        neighbor_exchange.value_namespace = name_space;
        neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
        routing_table.value_namespace = name_space;
        routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
        maximum_age.value_namespace = name_space;
        maximum_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
        partial_spf.value_namespace = name_space;
        partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
        flood_pending.value_namespace = name_space;
        flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
        nsr_ack_pending.value_namespace = name_space;
        nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
        sum_orig_pending.value_namespace = name_space;
        sum_orig_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "no-delete")
    {
        no_delete.yfilter = yfilter;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "routing-table")
    {
        routing_table.yfilter = yfilter;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "maximum-age")
    {
        maximum_age.yfilter = yfilter;
    }
    if(value_path == "partial-spf")
    {
        partial_spf.yfilter = yfilter;
    }
    if(value_path == "flood-pending")
    {
        flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free-time" || name == "no-delete" || name == "neighbor-exchange" || name == "routing-table" || name == "acknowledgement" || name == "maximum-age" || name == "partial-spf" || name == "flood-pending" || name == "rate-limit" || name == "nsr-ack-pending" || name == "sum-orig-pending" || name == "nsr-flood-required")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
        ,
    router_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>())
    , network_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
    , summary_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
    , external_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
    , opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
    , opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
    , opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
    , opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
    , opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
    , opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
{
    router_lsa_type->parent = this;
    network_lsa_type->parent = this;
    summary_lsa_type->parent = this;
    external_lsa_type->parent = this;
    opaque_link_lsa_type->parent = this;
    opaque_mpls_te_lsa_type->parent = this;
    opaque_grace_lsa->parent = this;
    opaque_router_info_lsa_type->parent = this;
    opaque_ep_lsa_type->parent = this;
    opaque_el_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_data() const
{
    if (is_presence_container) return true;
    return internal_lsa_type.is_set
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa_type.yfilter)
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.yfilter)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(router_lsa_type != nullptr)
    {
        _children["router-lsa-type"] = router_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        _children["network-lsa-type"] = network_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        _children["summary-lsa-type"] = summary_lsa_type;
    }

    if(external_lsa_type != nullptr)
    {
        _children["external-lsa-type"] = external_lsa_type;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        _children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        _children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        _children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        _children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        _children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        _children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
        internal_lsa_type.value_namespace = name_space;
        internal_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa-type" || name == "network-lsa-type" || name == "summary-lsa-type" || name == "external-lsa-type" || name == "opaque-link-lsa-type" || name == "opaque-mpls-te-lsa-type" || name == "opaque-grace-lsa" || name == "opaque-router-info-lsa-type" || name == "opaque-ep-lsa-type" || name == "opaque-el-lsa-type" || name == "internal-lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    router_asbr{YType::boolean, "router-asbr"},
    router_abr{YType::boolean, "router-abr"},
    internal_lsa{YType::boolean, "internal-lsa"}
        ,
    link(this, {})
    , internal_link(this, {})
{

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<internal_link.len(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    return router_asbr.is_set
	|| router_abr.is_set
	|| internal_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<internal_link.len(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_asbr.yfilter)
	|| ydk::is_set(router_abr.yfilter)
	|| ydk::is_set(internal_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_asbr.is_set || is_set(router_asbr.yfilter)) leaf_name_data.push_back(router_asbr.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.yfilter)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (internal_lsa.is_set || is_set(internal_lsa.yfilter)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        ent_->parent = this;
        link.append(ent_);
        return ent_;
    }

    if(child_yang_name == "internal-link")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        ent_->parent = this;
        internal_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : internal_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-asbr")
    {
        router_asbr = value;
        router_asbr.value_namespace = name_space;
        router_asbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
        router_abr.value_namespace = name_space;
        router_abr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
        internal_lsa.value_namespace = name_space;
        internal_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-asbr")
    {
        router_asbr.yfilter = yfilter;
    }
    if(value_path == "router-abr")
    {
        router_abr.yfilter = yfilter;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "internal-link" || name == "router-asbr" || name == "router-abr" || name == "internal-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
        ,
    link_tos(this, {})
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        ent_->parent = this;
        link_tos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_tos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    if (is_presence_container) return true;
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
        ,
    link_tos(this, {})
{

    yang_name = "internal-link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        ent_->parent = this;
        link_tos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_tos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "internal-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    if (is_presence_container) return true;
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    network_prefix_length{YType::uint32, "network-prefix-length"}
        ,
    neighbor_router(this, {})
{

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_router.len(); index++)
    {
        if(neighbor_router[index]->has_data())
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (std::size_t index=0; index<neighbor_router.len(); index++)
    {
        if(neighbor_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.yfilter)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-router")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter>();
        ent_->parent = this;
        neighbor_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
        network_prefix_length.value_namespace = name_space;
        network_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-router" || name == "network-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::NeighborRouter()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-router"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::~NeighborRouter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-router";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    summary_prefix_length{YType::uint32, "summary-prefix-length"},
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"}
        ,
    summary_lsa_metric(this, {})
{

    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_lsa_metric.len(); index++)
    {
        if(summary_lsa_metric[index]->has_data())
            return true;
    }
    return summary_prefix_length.is_set
	|| internal_sum_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (std::size_t index=0; index<summary_lsa_metric.len(); index++)
    {
        if(summary_lsa_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_prefix_length.yfilter)
	|| ydk::is_set(internal_sum_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_prefix_length.is_set || is_set(summary_prefix_length.yfilter)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());
    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.yfilter)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-lsa-metric")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric>();
        ent_->parent = this;
        summary_lsa_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_lsa_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
        summary_prefix_length.value_namespace = name_space;
        summary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
        internal_sum_lsa.value_namespace = name_space;
        internal_sum_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-lsa-metric" || name == "summary-prefix-length" || name == "internal-sum-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::SummaryLsaMetric()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "summary-lsa-metric"; yang_parent_name = "summary-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::~SummaryLsaMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-metric";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
        ,
    external_tos_metric(this, {})
{

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_tos_metric.len(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.len(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_prefix_length.yfilter)
	|| ydk::is_set(internal_external_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.yfilter)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.yfilter)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        ent_->parent = this;
        external_tos_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : external_tos_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
        external_prefix_length.value_namespace = name_space;
        external_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
        internal_external_lsa.value_namespace = name_space;
        internal_external_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tos-metric" || name == "external-prefix-length" || name == "internal-external-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"},
    external_tag{YType::uint32, "external-tag"}
{

    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    if (is_presence_container) return true;
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set
	|| external_tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_metric_type.yfilter)
	|| ydk::is_set(external_tos.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.yfilter)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.yfilter)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
        external_metric_type.value_namespace = name_space;
        external_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
        external_tos.value_namespace = name_space;
        external_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type.yfilter = yfilter;
    }
    if(value_path == "external-tos")
    {
        external_tos.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metric" || name == "external-metric-type" || name == "external-tos" || name == "forwarding-address" || name == "external-tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{

    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    if (is_presence_container) return true;
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.yfilter)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
        opaque_interface_name.value_namespace = name_space;
        opaque_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
    :
    tlv(this, {})
{

    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::str, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
        ,
    te_link_sub_tlv(this, {})
{

    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        ent_->parent = this;
        te_link_sub_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_link_sub_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    if (is_presence_container) return true;
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    if (is_presence_container) return true;
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grace-period" || name == "grace-reason" || name == "ip-address")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"},
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"}
        ,
    opaque_ritlv(this, {})
{

    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opaque_ritlv.len(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_rilsa_scope.is_set
	|| opaque_ri_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.len(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opaque_rilsa_scope.yfilter)
	|| ydk::is_set(opaque_ri_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.yfilter)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());
    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.yfilter)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        ent_->parent = this;
        opaque_ritlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opaque_ritlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
        opaque_rilsa_scope.value_namespace = name_space;
        opaque_rilsa_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
        opaque_ri_interface_name.value_namespace = name_space;
        opaque_ri_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope.yfilter = yfilter;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-ritlv" || name == "opaque-rilsa-scope" || name == "opaque-ri-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
        ,
    unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
    , rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
    , pcedtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
    , sr_algo_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
    , sr_range_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
    , node_msdtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>())
    , srlbtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv>())
{
    unknown_tlv->parent = this;
    rtr_cap_tlv->parent = this;
    pcedtlv->parent = this;
    sr_algo_tlv->parent = this;
    sr_range_tlv->parent = this;
    node_msdtlv->parent = this;
    srlbtlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    if (is_presence_container) return true;
    return ritlv_internal_type.is_set
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_data())
	|| (srlbtlv !=  nullptr && srlbtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ritlv_internal_type.yfilter)
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_operation())
	|| (srlbtlv !=  nullptr && srlbtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.yfilter)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "node-msdtlv")
    {
        if(node_msdtlv == nullptr)
        {
            node_msdtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>();
        }
        return node_msdtlv;
    }

    if(child_yang_name == "srlbtlv")
    {
        if(srlbtlv == nullptr)
        {
            srlbtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv>();
        }
        return srlbtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unknown_tlv != nullptr)
    {
        _children["unknown-tlv"] = unknown_tlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        _children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(pcedtlv != nullptr)
    {
        _children["pcedtlv"] = pcedtlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        _children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        _children["sr-range-tlv"] = sr_range_tlv;
    }

    if(node_msdtlv != nullptr)
    {
        _children["node-msdtlv"] = node_msdtlv;
    }

    if(srlbtlv != nullptr)
    {
        _children["srlbtlv"] = srlbtlv;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
        ritlv_internal_type.value_namespace = name_space;
        ritlv_internal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "rtr-cap-tlv" || name == "pcedtlv" || name == "sr-algo-tlv" || name == "sr-range-tlv" || name == "node-msdtlv" || name == "srlbtlv" || name == "ritlv-internal-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    if (is_presence_container) return true;
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    if (is_presence_container) return true;
    return rtr_cap_tlv_length.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_additional_info.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
        rtr_cap_graceful_restart.value_namespace = name_space;
        rtr_cap_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
        rtr_cap_graceful_restart_helper.value_namespace = name_space;
        rtr_cap_graceful_restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-tlv-length" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-area-te" || name == "rtr-cap-p2plan" || name == "rtr-cap-te-exp" || name == "rtr-cap-all-bits" || name == "rtr-cap-additional-info")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
        ,
    pced_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
    , pced_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    if (is_presence_container) return true;
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pced_addr != nullptr)
    {
        _children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        _children["pced-scope"] = pced_scope;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
        ,
    pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
    , ipv4pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr>())
    , ipv6pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr>())
{
    pce_addr_unknown_tlv->parent = this;
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    if (is_presence_container) return true;
    return pce_addr_type.is_set
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr>();
        }
        return ipv6pce_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pce_addr_unknown_tlv != nullptr)
    {
        _children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    if(ipv4pce_addr != nullptr)
    {
        _children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        _children["ipv6pce-addr"] = ipv6pce_addr;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-addr-unknown-tlv" || name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    if (is_presence_container) return true;
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::Ipv4pceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::~Ipv4pceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::has_data() const
{
    if (is_presence_container) return true;
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::Ipv6pceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::~Ipv6pceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::has_data() const
{
    if (is_presence_container) return true;
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    lbit{YType::boolean, "lbit"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    if (is_presence_container) return true;
    return lbit.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| all_scope_info_bits.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rbit")
    {
        rbit = value;
        rbit.value_namespace = name_space;
        rbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
        rd_bit.value_namespace = name_space;
        rd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
        sd_bit.value_namespace = name_space;
        sd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ybit")
    {
        ybit = value;
        ybit.value_namespace = name_space;
        ybit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
        pref_l.value_namespace = name_space;
        pref_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
        pref_r.value_namespace = name_space;
        pref_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
        pref_s.value_namespace = name_space;
        pref_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
        pref_y.value_namespace = name_space;
        pref_y.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "rbit")
    {
        rbit.yfilter = yfilter;
    }
    if(value_path == "rd-bit")
    {
        rd_bit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "sd-bit")
    {
        sd_bit.yfilter = yfilter;
    }
    if(value_path == "ybit")
    {
        ybit.yfilter = yfilter;
    }
    if(value_path == "pref-l")
    {
        pref_l.yfilter = yfilter;
    }
    if(value_path == "pref-r")
    {
        pref_r.yfilter = yfilter;
    }
    if(value_path == "pref-s")
    {
        pref_s.yfilter = yfilter;
    }
    if(value_path == "pref-y")
    {
        pref_y.yfilter = yfilter;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbit" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "all-scope-info-bits")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_value(this, {})
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_algo_value.len(); index++)
    {
        if(sr_algo_value[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    for (std::size_t index=0; index<sr_algo_value.len(); index++)
    {
        if(sr_algo_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-algo-value")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue>();
        ent_->parent = this;
        sr_algo_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_algo_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::SrAlgoValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "sr-algo-value"; yang_parent_name = "sr-algo-tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::~SrAlgoValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
        ,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    if (is_presence_container) return true;
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_range_length.yfilter)
	|| ydk::is_set(sr_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.yfilter)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.yfilter)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sidtlv != nullptr)
    {
        _children["sidtlv"] = sidtlv;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length = value;
        sr_range_length.value_namespace = name_space;
        sr_range_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size = value;
        sr_range_size.value_namespace = name_space;
        sr_range_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length.yfilter = yfilter;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "sr-range-length" || name == "sr-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    if (is_presence_container) return true;
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
        sr_sid_length.value_namespace = name_space;
        sr_sid_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
        sr_sid_value.value_namespace = name_space;
        sr_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length.yfilter = yfilter;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdtlv()
    :
    node_msdtlv_length{YType::uint16, "node-msdtlv-length"}
        ,
    node_msd_sub_types(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>())
{
    node_msd_sub_types->parent = this;

    yang_name = "node-msdtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::~NodeMsdtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_data() const
{
    if (is_presence_container) return true;
    return node_msdtlv_length.is_set
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_msdtlv_length.yfilter)
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msdtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_msdtlv_length.is_set || is_set(node_msdtlv_length.yfilter)) leaf_name_data.push_back(node_msdtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msd-sub-types")
    {
        if(node_msd_sub_types == nullptr)
        {
            node_msd_sub_types = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>();
        }
        return node_msd_sub_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_msd_sub_types != nullptr)
    {
        _children["node-msd-sub-types"] = node_msd_sub_types;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length = value;
        node_msdtlv_length.value_namespace = name_space;
        node_msdtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msd-sub-types" || name == "node-msdtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::NodeMsdSubTypes()
    :
    msd_sub_type{YType::uint8, "msd-sub-type"},
    msd_value{YType::uint8, "msd-value"}
{

    yang_name = "node-msd-sub-types"; yang_parent_name = "node-msdtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::~NodeMsdSubTypes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_data() const
{
    if (is_presence_container) return true;
    return msd_sub_type.is_set
	|| msd_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msd_sub_type.yfilter)
	|| ydk::is_set(msd_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msd-sub-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msd_sub_type.is_set || is_set(msd_sub_type.yfilter)) leaf_name_data.push_back(msd_sub_type.get_name_leafdata());
    if (msd_value.is_set || is_set(msd_value.yfilter)) leaf_name_data.push_back(msd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type = value;
        msd_sub_type.value_namespace = name_space;
        msd_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd-value")
    {
        msd_value = value;
        msd_value.value_namespace = name_space;
        msd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type.yfilter = yfilter;
    }
    if(value_path == "msd-value")
    {
        msd_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msd-sub-type" || name == "msd-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Srlbtlv()
    :
    srlbtlv_length{YType::uint16, "srlbtlv-length"},
    srlb_range_size{YType::uint32, "srlb-range-size"}
        ,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "srlbtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::~Srlbtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::has_data() const
{
    if (is_presence_container) return true;
    return srlbtlv_length.is_set
	|| srlb_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlbtlv_length.yfilter)
	|| ydk::is_set(srlb_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlbtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlbtlv_length.is_set || is_set(srlbtlv_length.yfilter)) leaf_name_data.push_back(srlbtlv_length.get_name_leafdata());
    if (srlb_range_size.is_set || is_set(srlb_range_size.yfilter)) leaf_name_data.push_back(srlb_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sidtlv != nullptr)
    {
        _children["sidtlv"] = sidtlv;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlbtlv-length")
    {
        srlbtlv_length = value;
        srlbtlv_length.value_namespace = name_space;
        srlbtlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-range-size")
    {
        srlb_range_size = value;
        srlb_range_size.value_namespace = name_space;
        srlb_range_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlbtlv-length")
    {
        srlbtlv_length.yfilter = yfilter;
    }
    if(value_path == "srlb-range-size")
    {
        srlb_range_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "srlbtlv-length" || name == "srlb-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "srlbtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::has_data() const
{
    if (is_presence_container) return true;
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
        sr_sid_length.value_namespace = name_space;
        sr_sid_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
        sr_sid_value.value_namespace = name_space;
        sr_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length.yfilter = yfilter;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
    :
    tlv(this, {})
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::str, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
        ,
    te_link_sub_tlv(this, {})
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        ent_->parent = this;
        te_link_sub_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_link_sub_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    if (is_presence_container) return true;
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
    :
    tlv(this, {})
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::str, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
        ,
    te_link_sub_tlv(this, {})
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        ent_->parent = this;
        te_link_sub_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_link_sub_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    if (is_presence_container) return true;
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummaries()
    :
    lsa_summary(this, {})
{

    yang_name = "lsa-summaries"; yang_parent_name = "database-area"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsa_summary.len(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.len(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary>();
        ent_->parent = this;
        lsa_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsa_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaSummary()
    :
    area_id{YType::uint32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"},
    external_tag{YType::uint32, "external-tag"},
    link_count{YType::uint16, "link-count"}
        ,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_data() const
{
    if (is_presence_container) return true;
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| external_tag.is_set
	|| link_count.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(link_count.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.yfilter)) leaf_name_data.push_back(link_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_header != nullptr)
    {
        _children["lsa-header"] = lsa_header;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count")
    {
        link_count = value;
        link_count.value_namespace = name_space;
        link_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "link-count")
    {
        link_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name" || name == "external-tag" || name == "link-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummaries()
    :
    database_summary(this, {"area_id"})
{

    yang_name = "database-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::~DatabaseSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<database_summary.len(); index++)
    {
        if(database_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_operation() const
{
    for (std::size_t index=0; index<database_summary.len(); index++)
    {
        if(database_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-summary")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary>();
        ent_->parent = this;
        database_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : database_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-summary")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::DatabaseSummary()
    :
    area_id{YType::uint32, "area-id"},
    dbase_sum_area_id_string{YType::str, "dbase-sum-area-id-string"}
        ,
    area_lsa_counter(this, {})
{

    yang_name = "database-summary"; yang_parent_name = "database-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::~DatabaseSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area_lsa_counter.len(); index++)
    {
        if(area_lsa_counter[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| dbase_sum_area_id_string.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_operation() const
{
    for (std::size_t index=0; index<area_lsa_counter.len(); index++)
    {
        if(area_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(dbase_sum_area_id_string.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary";
    ADD_KEY_TOKEN(area_id, "area-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (dbase_sum_area_id_string.is_set || is_set(dbase_sum_area_id_string.yfilter)) leaf_name_data.push_back(dbase_sum_area_id_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-lsa-counter")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter>();
        ent_->parent = this;
        area_lsa_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : area_lsa_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string = value;
        dbase_sum_area_id_string.value_namespace = name_space;
        dbase_sum_area_id_string.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "dbase-sum-area-id-string")
    {
        dbase_sum_area_id_string.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-lsa-counter" || name == "area-id" || name == "dbase-sum-area-id-string")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::AreaLsaCounter()
    :
    lsa_type{YType::enumeration, "lsa-type"},
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"}
{

    yang_name = "area-lsa-counter"; yang_parent_name = "database-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::~AreaLsaCounter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_data() const
{
    if (is_presence_container) return true;
    return lsa_type.is_set
	|| lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-lsa-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::DatabaseSummaryAs()
    :
    as_lsa_counter(this, {})
{

    yang_name = "database-summary-as"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::~DatabaseSummaryAs()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as_lsa_counter.len(); index++)
    {
        if(as_lsa_counter[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_operation() const
{
    for (std::size_t index=0; index<as_lsa_counter.len(); index++)
    {
        if(as_lsa_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-summary-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-lsa-counter")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter>();
        ent_->parent = this;
        as_lsa_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as_lsa_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-lsa-counter")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::AsLsaCounter()
    :
    lsa_type{YType::enumeration, "lsa-type"},
    lsa_count{YType::int32, "lsa-count"},
    lsa_delete_count{YType::int32, "lsa-delete-count"},
    lsa_maxage_count{YType::int32, "lsa-maxage-count"},
    lsa_self_count{YType::int32, "lsa-self-count"}
{

    yang_name = "as-lsa-counter"; yang_parent_name = "database-summary-as"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::~AsLsaCounter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_data() const
{
    if (is_presence_container) return true;
    return lsa_type.is_set
	|| lsa_count.is_set
	|| lsa_delete_count.is_set
	|| lsa_maxage_count.is_set
	|| lsa_self_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(lsa_count.yfilter)
	|| ydk::is_set(lsa_delete_count.yfilter)
	|| ydk::is_set(lsa_maxage_count.yfilter)
	|| ydk::is_set(lsa_self_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-lsa-counter";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (lsa_count.is_set || is_set(lsa_count.yfilter)) leaf_name_data.push_back(lsa_count.get_name_leafdata());
    if (lsa_delete_count.is_set || is_set(lsa_delete_count.yfilter)) leaf_name_data.push_back(lsa_delete_count.get_name_leafdata());
    if (lsa_maxage_count.is_set || is_set(lsa_maxage_count.yfilter)) leaf_name_data.push_back(lsa_maxage_count.get_name_leafdata());
    if (lsa_self_count.is_set || is_set(lsa_self_count.yfilter)) leaf_name_data.push_back(lsa_self_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-count")
    {
        lsa_count = value;
        lsa_count.value_namespace = name_space;
        lsa_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count = value;
        lsa_delete_count.value_namespace = name_space;
        lsa_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count = value;
        lsa_maxage_count.value_namespace = name_space;
        lsa_maxage_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count = value;
        lsa_self_count.value_namespace = name_space;
        lsa_self_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "lsa-count")
    {
        lsa_count.yfilter = yfilter;
    }
    if(value_path == "lsa-delete-count")
    {
        lsa_delete_count.yfilter = yfilter;
    }
    if(value_path == "lsa-maxage-count")
    {
        lsa_maxage_count.yfilter = yfilter;
    }
    if(value_path == "lsa-self-count")
    {
        lsa_self_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::DatabaseSummaryAs::AsLsaCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-type" || name == "lsa-count" || name == "lsa-delete-count" || name == "lsa-maxage-count" || name == "lsa-self-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsas()
    :
    lsa(this, {})
{

    yang_name = "lsas"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::~Lsas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsa.len(); index++)
    {
        if(lsa[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_operation() const
{
    for (std::size_t index=0; index<lsa.len(); index++)
    {
        if(lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa>();
        ent_->parent = this;
        lsa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::Lsa()
    :
    area_id{YType::uint32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"}
        ,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader>())
    , lsa_detail_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData>())
    , lsa_internal_data(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData>())
{
    lsa_header->parent = this;
    lsa_detail_data->parent = this;
    lsa_internal_data->parent = this;

    yang_name = "lsa"; yang_parent_name = "lsas"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::~Lsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_data() const
{
    if (is_presence_container) return true;
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_data())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation())
	|| (lsa_detail_data !=  nullptr && lsa_detail_data->has_operation())
	|| (lsa_internal_data !=  nullptr && lsa_internal_data->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader>();
        }
        return lsa_header;
    }

    if(child_yang_name == "lsa-detail-data")
    {
        if(lsa_detail_data == nullptr)
        {
            lsa_detail_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData>();
        }
        return lsa_detail_data;
    }

    if(child_yang_name == "lsa-internal-data")
    {
        if(lsa_internal_data == nullptr)
        {
            lsa_internal_data = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData>();
        }
        return lsa_internal_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_header != nullptr)
    {
        _children["lsa-header"] = lsa_header;
    }

    if(lsa_detail_data != nullptr)
    {
        _children["lsa-detail-data"] = lsa_detail_data;
    }

    if(lsa_internal_data != nullptr)
    {
        _children["lsa-internal-data"] = lsa_internal_data;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-detail-data" || name == "lsa-internal-data" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaDetailData()
    :
    tos_capable{YType::boolean, "tos-capable"},
    nssa_translation{YType::boolean, "nssa-translation"},
    demand_circuit{YType::boolean, "demand-circuit"},
    dn_bit{YType::boolean, "dn-bit"},
    lsa_rate_limit_due_time{YType::uint32, "lsa-rate-limit-due-time"},
    lsadb_base_clock{YType::uint64, "lsadb-base-clock"},
    routing_bit{YType::boolean, "routing-bit"},
    advertising_router_reachable{YType::boolean, "advertising-router-reachable"},
    length{YType::uint16, "length"},
    sum_origin{YType::uint16, "sum-origin"},
    ase_origin{YType::uint16, "ase-origin"},
    in_sync{YType::uint8, "in-sync"},
    lsa_prefix_priority{YType::uint8, "lsa-prefix-priority"},
    new_lsa_prefix_priority{YType::uint8, "new-lsa-prefix-priority"},
    lsa_flood_required_post_fail_over{YType::boolean, "lsa-flood-required-post-fail-over"}
        ,
    lsa_throttle_timer(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>())
    , lsa_last_updated_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>())
    , lsadb_base_time_stamp(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>())
    , not_delete(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>())
{
    lsa_throttle_timer->parent = this;
    lsa_last_updated_time->parent = this;
    lsadb_base_time_stamp->parent = this;
    not_delete->parent = this;

    yang_name = "lsa-detail-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::~LsaDetailData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_data() const
{
    if (is_presence_container) return true;
    return tos_capable.is_set
	|| nssa_translation.is_set
	|| demand_circuit.is_set
	|| dn_bit.is_set
	|| lsa_rate_limit_due_time.is_set
	|| lsadb_base_clock.is_set
	|| routing_bit.is_set
	|| advertising_router_reachable.is_set
	|| length.is_set
	|| sum_origin.is_set
	|| ase_origin.is_set
	|| in_sync.is_set
	|| lsa_prefix_priority.is_set
	|| new_lsa_prefix_priority.is_set
	|| lsa_flood_required_post_fail_over.is_set
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_data())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_data())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_data())
	|| (not_delete !=  nullptr && not_delete->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tos_capable.yfilter)
	|| ydk::is_set(nssa_translation.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(dn_bit.yfilter)
	|| ydk::is_set(lsa_rate_limit_due_time.yfilter)
	|| ydk::is_set(lsadb_base_clock.yfilter)
	|| ydk::is_set(routing_bit.yfilter)
	|| ydk::is_set(advertising_router_reachable.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(sum_origin.yfilter)
	|| ydk::is_set(ase_origin.yfilter)
	|| ydk::is_set(in_sync.yfilter)
	|| ydk::is_set(lsa_prefix_priority.yfilter)
	|| ydk::is_set(new_lsa_prefix_priority.yfilter)
	|| ydk::is_set(lsa_flood_required_post_fail_over.yfilter)
	|| (lsa_throttle_timer !=  nullptr && lsa_throttle_timer->has_operation())
	|| (lsa_last_updated_time !=  nullptr && lsa_last_updated_time->has_operation())
	|| (lsadb_base_time_stamp !=  nullptr && lsadb_base_time_stamp->has_operation())
	|| (not_delete !=  nullptr && not_delete->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-detail-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos_capable.is_set || is_set(tos_capable.yfilter)) leaf_name_data.push_back(tos_capable.get_name_leafdata());
    if (nssa_translation.is_set || is_set(nssa_translation.yfilter)) leaf_name_data.push_back(nssa_translation.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (dn_bit.is_set || is_set(dn_bit.yfilter)) leaf_name_data.push_back(dn_bit.get_name_leafdata());
    if (lsa_rate_limit_due_time.is_set || is_set(lsa_rate_limit_due_time.yfilter)) leaf_name_data.push_back(lsa_rate_limit_due_time.get_name_leafdata());
    if (lsadb_base_clock.is_set || is_set(lsadb_base_clock.yfilter)) leaf_name_data.push_back(lsadb_base_clock.get_name_leafdata());
    if (routing_bit.is_set || is_set(routing_bit.yfilter)) leaf_name_data.push_back(routing_bit.get_name_leafdata());
    if (advertising_router_reachable.is_set || is_set(advertising_router_reachable.yfilter)) leaf_name_data.push_back(advertising_router_reachable.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (sum_origin.is_set || is_set(sum_origin.yfilter)) leaf_name_data.push_back(sum_origin.get_name_leafdata());
    if (ase_origin.is_set || is_set(ase_origin.yfilter)) leaf_name_data.push_back(ase_origin.get_name_leafdata());
    if (in_sync.is_set || is_set(in_sync.yfilter)) leaf_name_data.push_back(in_sync.get_name_leafdata());
    if (lsa_prefix_priority.is_set || is_set(lsa_prefix_priority.yfilter)) leaf_name_data.push_back(lsa_prefix_priority.get_name_leafdata());
    if (new_lsa_prefix_priority.is_set || is_set(new_lsa_prefix_priority.yfilter)) leaf_name_data.push_back(new_lsa_prefix_priority.get_name_leafdata());
    if (lsa_flood_required_post_fail_over.is_set || is_set(lsa_flood_required_post_fail_over.yfilter)) leaf_name_data.push_back(lsa_flood_required_post_fail_over.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-throttle-timer")
    {
        if(lsa_throttle_timer == nullptr)
        {
            lsa_throttle_timer = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer>();
        }
        return lsa_throttle_timer;
    }

    if(child_yang_name == "lsa-last-updated-time")
    {
        if(lsa_last_updated_time == nullptr)
        {
            lsa_last_updated_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime>();
        }
        return lsa_last_updated_time;
    }

    if(child_yang_name == "lsadb-base-time-stamp")
    {
        if(lsadb_base_time_stamp == nullptr)
        {
            lsadb_base_time_stamp = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp>();
        }
        return lsadb_base_time_stamp;
    }

    if(child_yang_name == "not-delete")
    {
        if(not_delete == nullptr)
        {
            not_delete = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete>();
        }
        return not_delete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_throttle_timer != nullptr)
    {
        _children["lsa-throttle-timer"] = lsa_throttle_timer;
    }

    if(lsa_last_updated_time != nullptr)
    {
        _children["lsa-last-updated-time"] = lsa_last_updated_time;
    }

    if(lsadb_base_time_stamp != nullptr)
    {
        _children["lsadb-base-time-stamp"] = lsadb_base_time_stamp;
    }

    if(not_delete != nullptr)
    {
        _children["not-delete"] = not_delete;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tos-capable")
    {
        tos_capable = value;
        tos_capable.value_namespace = name_space;
        tos_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation = value;
        nssa_translation.value_namespace = name_space;
        nssa_translation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-bit")
    {
        dn_bit = value;
        dn_bit.value_namespace = name_space;
        dn_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time = value;
        lsa_rate_limit_due_time.value_namespace = name_space;
        lsa_rate_limit_due_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock = value;
        lsadb_base_clock.value_namespace = name_space;
        lsadb_base_clock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-bit")
    {
        routing_bit = value;
        routing_bit.value_namespace = name_space;
        routing_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable = value;
        advertising_router_reachable.value_namespace = name_space;
        advertising_router_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-origin")
    {
        sum_origin = value;
        sum_origin.value_namespace = name_space;
        sum_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ase-origin")
    {
        ase_origin = value;
        ase_origin.value_namespace = name_space;
        ase_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-sync")
    {
        in_sync = value;
        in_sync.value_namespace = name_space;
        in_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority = value;
        lsa_prefix_priority.value_namespace = name_space;
        lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority = value;
        new_lsa_prefix_priority.value_namespace = name_space;
        new_lsa_prefix_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over = value;
        lsa_flood_required_post_fail_over.value_namespace = name_space;
        lsa_flood_required_post_fail_over.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tos-capable")
    {
        tos_capable.yfilter = yfilter;
    }
    if(value_path == "nssa-translation")
    {
        nssa_translation.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "dn-bit")
    {
        dn_bit.yfilter = yfilter;
    }
    if(value_path == "lsa-rate-limit-due-time")
    {
        lsa_rate_limit_due_time.yfilter = yfilter;
    }
    if(value_path == "lsadb-base-clock")
    {
        lsadb_base_clock.yfilter = yfilter;
    }
    if(value_path == "routing-bit")
    {
        routing_bit.yfilter = yfilter;
    }
    if(value_path == "advertising-router-reachable")
    {
        advertising_router_reachable.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "sum-origin")
    {
        sum_origin.yfilter = yfilter;
    }
    if(value_path == "ase-origin")
    {
        ase_origin.yfilter = yfilter;
    }
    if(value_path == "in-sync")
    {
        in_sync.yfilter = yfilter;
    }
    if(value_path == "lsa-prefix-priority")
    {
        lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "new-lsa-prefix-priority")
    {
        new_lsa_prefix_priority.yfilter = yfilter;
    }
    if(value_path == "lsa-flood-required-post-fail-over")
    {
        lsa_flood_required_post_fail_over.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-throttle-timer" || name == "lsa-last-updated-time" || name == "lsadb-base-time-stamp" || name == "not-delete" || name == "tos-capable" || name == "nssa-translation" || name == "demand-circuit" || name == "dn-bit" || name == "lsa-rate-limit-due-time" || name == "lsadb-base-clock" || name == "routing-bit" || name == "advertising-router-reachable" || name == "length" || name == "sum-origin" || name == "ase-origin" || name == "in-sync" || name == "lsa-prefix-priority" || name == "new-lsa-prefix-priority" || name == "lsa-flood-required-post-fail-over")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::LsaThrottleTimer()
    :
    timer_location{YType::enumeration, "timer-location"},
    timer_type{YType::enumeration, "timer-type"},
    second_table_index{YType::uint8, "second-table-index"},
    minute_table_index{YType::uint8, "minute-table-index"},
    last_inst_second_table_index{YType::uint8, "last-inst-second-table-index"},
    last_inst_minute_table_index{YType::uint8, "last-inst-minute-table-index"}
{

    yang_name = "lsa-throttle-timer"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::~LsaThrottleTimer()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_data() const
{
    if (is_presence_container) return true;
    return timer_location.is_set
	|| timer_type.is_set
	|| second_table_index.is_set
	|| minute_table_index.is_set
	|| last_inst_second_table_index.is_set
	|| last_inst_minute_table_index.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_location.yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(second_table_index.yfilter)
	|| ydk::is_set(minute_table_index.yfilter)
	|| ydk::is_set(last_inst_second_table_index.yfilter)
	|| ydk::is_set(last_inst_minute_table_index.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-throttle-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_location.is_set || is_set(timer_location.yfilter)) leaf_name_data.push_back(timer_location.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (second_table_index.is_set || is_set(second_table_index.yfilter)) leaf_name_data.push_back(second_table_index.get_name_leafdata());
    if (minute_table_index.is_set || is_set(minute_table_index.yfilter)) leaf_name_data.push_back(minute_table_index.get_name_leafdata());
    if (last_inst_second_table_index.is_set || is_set(last_inst_second_table_index.yfilter)) leaf_name_data.push_back(last_inst_second_table_index.get_name_leafdata());
    if (last_inst_minute_table_index.is_set || is_set(last_inst_minute_table_index.yfilter)) leaf_name_data.push_back(last_inst_minute_table_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-location")
    {
        timer_location = value;
        timer_location.value_namespace = name_space;
        timer_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-table-index")
    {
        second_table_index = value;
        second_table_index.value_namespace = name_space;
        second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index = value;
        minute_table_index.value_namespace = name_space;
        minute_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index = value;
        last_inst_second_table_index.value_namespace = name_space;
        last_inst_second_table_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index = value;
        last_inst_minute_table_index.value_namespace = name_space;
        last_inst_minute_table_index.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-location")
    {
        timer_location.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "second-table-index")
    {
        second_table_index.yfilter = yfilter;
    }
    if(value_path == "minute-table-index")
    {
        minute_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-second-table-index")
    {
        last_inst_second_table_index.yfilter = yfilter;
    }
    if(value_path == "last-inst-minute-table-index")
    {
        last_inst_minute_table_index.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-location" || name == "timer-type" || name == "second-table-index" || name == "minute-table-index" || name == "last-inst-second-table-index" || name == "last-inst-minute-table-index")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::LsaLastUpdatedTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsa-last-updated-time"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::~LsaLastUpdatedTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-last-updated-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::LsadbBaseTimeStamp()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "lsadb-base-time-stamp"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::~LsadbBaseTimeStamp()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsadb-base-time-stamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::NotDelete()
    :
    free_time{YType::uint32, "free-time"},
    no_delete{YType::boolean, "no-delete"},
    neighbor_exchange{YType::boolean, "neighbor-exchange"},
    routing_table{YType::boolean, "routing-table"},
    acknowledgement{YType::boolean, "acknowledgement"},
    maximum_age{YType::boolean, "maximum-age"},
    partial_spf{YType::boolean, "partial-spf"},
    flood_pending{YType::boolean, "flood-pending"},
    rate_limit{YType::boolean, "rate-limit"},
    nsr_ack_pending{YType::boolean, "nsr-ack-pending"},
    sum_orig_pending{YType::boolean, "sum-orig-pending"},
    nsr_flood_required{YType::boolean, "nsr-flood-required"}
{

    yang_name = "not-delete"; yang_parent_name = "lsa-detail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::~NotDelete()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_data() const
{
    if (is_presence_container) return true;
    return free_time.is_set
	|| no_delete.is_set
	|| neighbor_exchange.is_set
	|| routing_table.is_set
	|| acknowledgement.is_set
	|| maximum_age.is_set
	|| partial_spf.is_set
	|| flood_pending.is_set
	|| rate_limit.is_set
	|| nsr_ack_pending.is_set
	|| sum_orig_pending.is_set
	|| nsr_flood_required.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(free_time.yfilter)
	|| ydk::is_set(no_delete.yfilter)
	|| ydk::is_set(neighbor_exchange.yfilter)
	|| ydk::is_set(routing_table.yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(maximum_age.yfilter)
	|| ydk::is_set(partial_spf.yfilter)
	|| ydk::is_set(flood_pending.yfilter)
	|| ydk::is_set(rate_limit.yfilter)
	|| ydk::is_set(nsr_ack_pending.yfilter)
	|| ydk::is_set(sum_orig_pending.yfilter)
	|| ydk::is_set(nsr_flood_required.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not-delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (free_time.is_set || is_set(free_time.yfilter)) leaf_name_data.push_back(free_time.get_name_leafdata());
    if (no_delete.is_set || is_set(no_delete.yfilter)) leaf_name_data.push_back(no_delete.get_name_leafdata());
    if (neighbor_exchange.is_set || is_set(neighbor_exchange.yfilter)) leaf_name_data.push_back(neighbor_exchange.get_name_leafdata());
    if (routing_table.is_set || is_set(routing_table.yfilter)) leaf_name_data.push_back(routing_table.get_name_leafdata());
    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (maximum_age.is_set || is_set(maximum_age.yfilter)) leaf_name_data.push_back(maximum_age.get_name_leafdata());
    if (partial_spf.is_set || is_set(partial_spf.yfilter)) leaf_name_data.push_back(partial_spf.get_name_leafdata());
    if (flood_pending.is_set || is_set(flood_pending.yfilter)) leaf_name_data.push_back(flood_pending.get_name_leafdata());
    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());
    if (nsr_ack_pending.is_set || is_set(nsr_ack_pending.yfilter)) leaf_name_data.push_back(nsr_ack_pending.get_name_leafdata());
    if (sum_orig_pending.is_set || is_set(sum_orig_pending.yfilter)) leaf_name_data.push_back(sum_orig_pending.get_name_leafdata());
    if (nsr_flood_required.is_set || is_set(nsr_flood_required.yfilter)) leaf_name_data.push_back(nsr_flood_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "free-time")
    {
        free_time = value;
        free_time.value_namespace = name_space;
        free_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-delete")
    {
        no_delete = value;
        no_delete.value_namespace = name_space;
        no_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange = value;
        neighbor_exchange.value_namespace = name_space;
        neighbor_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table")
    {
        routing_table = value;
        routing_table.value_namespace = name_space;
        routing_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-age")
    {
        maximum_age = value;
        maximum_age.value_namespace = name_space;
        maximum_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partial-spf")
    {
        partial_spf = value;
        partial_spf.value_namespace = name_space;
        partial_spf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pending")
    {
        flood_pending = value;
        flood_pending.value_namespace = name_space;
        flood_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending = value;
        nsr_ack_pending.value_namespace = name_space;
        nsr_ack_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending = value;
        sum_orig_pending.value_namespace = name_space;
        sum_orig_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required = value;
        nsr_flood_required.value_namespace = name_space;
        nsr_flood_required.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "free-time")
    {
        free_time.yfilter = yfilter;
    }
    if(value_path == "no-delete")
    {
        no_delete.yfilter = yfilter;
    }
    if(value_path == "neighbor-exchange")
    {
        neighbor_exchange.yfilter = yfilter;
    }
    if(value_path == "routing-table")
    {
        routing_table.yfilter = yfilter;
    }
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "maximum-age")
    {
        maximum_age.yfilter = yfilter;
    }
    if(value_path == "partial-spf")
    {
        partial_spf.yfilter = yfilter;
    }
    if(value_path == "flood-pending")
    {
        flood_pending.yfilter = yfilter;
    }
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
    if(value_path == "nsr-ack-pending")
    {
        nsr_ack_pending.yfilter = yfilter;
    }
    if(value_path == "sum-orig-pending")
    {
        sum_orig_pending.yfilter = yfilter;
    }
    if(value_path == "nsr-flood-required")
    {
        nsr_flood_required.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaDetailData::NotDelete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "free-time" || name == "no-delete" || name == "neighbor-exchange" || name == "routing-table" || name == "acknowledgement" || name == "maximum-age" || name == "partial-spf" || name == "flood-pending" || name == "rate-limit" || name == "nsr-ack-pending" || name == "sum-orig-pending" || name == "nsr-flood-required")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::LsaInternalData()
    :
    internal_lsa_type{YType::enumeration, "internal-lsa-type"}
        ,
    router_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>())
    , network_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>())
    , summary_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>())
    , external_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>())
    , opaque_link_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>())
    , opaque_mpls_te_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>())
    , opaque_grace_lsa(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>())
    , opaque_router_info_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>())
    , opaque_ep_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>())
    , opaque_el_lsa_type(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>())
{
    router_lsa_type->parent = this;
    network_lsa_type->parent = this;
    summary_lsa_type->parent = this;
    external_lsa_type->parent = this;
    opaque_link_lsa_type->parent = this;
    opaque_mpls_te_lsa_type->parent = this;
    opaque_grace_lsa->parent = this;
    opaque_router_info_lsa_type->parent = this;
    opaque_ep_lsa_type->parent = this;
    opaque_el_lsa_type->parent = this;

    yang_name = "lsa-internal-data"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::~LsaInternalData()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_data() const
{
    if (is_presence_container) return true;
    return internal_lsa_type.is_set
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_data())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_data())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_data())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_data())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_data())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_data())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_data())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_data())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_data())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_lsa_type.yfilter)
	|| (router_lsa_type !=  nullptr && router_lsa_type->has_operation())
	|| (network_lsa_type !=  nullptr && network_lsa_type->has_operation())
	|| (summary_lsa_type !=  nullptr && summary_lsa_type->has_operation())
	|| (external_lsa_type !=  nullptr && external_lsa_type->has_operation())
	|| (opaque_link_lsa_type !=  nullptr && opaque_link_lsa_type->has_operation())
	|| (opaque_mpls_te_lsa_type !=  nullptr && opaque_mpls_te_lsa_type->has_operation())
	|| (opaque_grace_lsa !=  nullptr && opaque_grace_lsa->has_operation())
	|| (opaque_router_info_lsa_type !=  nullptr && opaque_router_info_lsa_type->has_operation())
	|| (opaque_ep_lsa_type !=  nullptr && opaque_ep_lsa_type->has_operation())
	|| (opaque_el_lsa_type !=  nullptr && opaque_el_lsa_type->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-internal-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_lsa_type.is_set || is_set(internal_lsa_type.yfilter)) leaf_name_data.push_back(internal_lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa-type")
    {
        if(router_lsa_type == nullptr)
        {
            router_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType>();
        }
        return router_lsa_type;
    }

    if(child_yang_name == "network-lsa-type")
    {
        if(network_lsa_type == nullptr)
        {
            network_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType>();
        }
        return network_lsa_type;
    }

    if(child_yang_name == "summary-lsa-type")
    {
        if(summary_lsa_type == nullptr)
        {
            summary_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType>();
        }
        return summary_lsa_type;
    }

    if(child_yang_name == "external-lsa-type")
    {
        if(external_lsa_type == nullptr)
        {
            external_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType>();
        }
        return external_lsa_type;
    }

    if(child_yang_name == "opaque-link-lsa-type")
    {
        if(opaque_link_lsa_type == nullptr)
        {
            opaque_link_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType>();
        }
        return opaque_link_lsa_type;
    }

    if(child_yang_name == "opaque-mpls-te-lsa-type")
    {
        if(opaque_mpls_te_lsa_type == nullptr)
        {
            opaque_mpls_te_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType>();
        }
        return opaque_mpls_te_lsa_type;
    }

    if(child_yang_name == "opaque-grace-lsa")
    {
        if(opaque_grace_lsa == nullptr)
        {
            opaque_grace_lsa = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa>();
        }
        return opaque_grace_lsa;
    }

    if(child_yang_name == "opaque-router-info-lsa-type")
    {
        if(opaque_router_info_lsa_type == nullptr)
        {
            opaque_router_info_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType>();
        }
        return opaque_router_info_lsa_type;
    }

    if(child_yang_name == "opaque-ep-lsa-type")
    {
        if(opaque_ep_lsa_type == nullptr)
        {
            opaque_ep_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType>();
        }
        return opaque_ep_lsa_type;
    }

    if(child_yang_name == "opaque-el-lsa-type")
    {
        if(opaque_el_lsa_type == nullptr)
        {
            opaque_el_lsa_type = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType>();
        }
        return opaque_el_lsa_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(router_lsa_type != nullptr)
    {
        _children["router-lsa-type"] = router_lsa_type;
    }

    if(network_lsa_type != nullptr)
    {
        _children["network-lsa-type"] = network_lsa_type;
    }

    if(summary_lsa_type != nullptr)
    {
        _children["summary-lsa-type"] = summary_lsa_type;
    }

    if(external_lsa_type != nullptr)
    {
        _children["external-lsa-type"] = external_lsa_type;
    }

    if(opaque_link_lsa_type != nullptr)
    {
        _children["opaque-link-lsa-type"] = opaque_link_lsa_type;
    }

    if(opaque_mpls_te_lsa_type != nullptr)
    {
        _children["opaque-mpls-te-lsa-type"] = opaque_mpls_te_lsa_type;
    }

    if(opaque_grace_lsa != nullptr)
    {
        _children["opaque-grace-lsa"] = opaque_grace_lsa;
    }

    if(opaque_router_info_lsa_type != nullptr)
    {
        _children["opaque-router-info-lsa-type"] = opaque_router_info_lsa_type;
    }

    if(opaque_ep_lsa_type != nullptr)
    {
        _children["opaque-ep-lsa-type"] = opaque_ep_lsa_type;
    }

    if(opaque_el_lsa_type != nullptr)
    {
        _children["opaque-el-lsa-type"] = opaque_el_lsa_type;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type = value;
        internal_lsa_type.value_namespace = name_space;
        internal_lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-lsa-type")
    {
        internal_lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa-type" || name == "network-lsa-type" || name == "summary-lsa-type" || name == "external-lsa-type" || name == "opaque-link-lsa-type" || name == "opaque-mpls-te-lsa-type" || name == "opaque-grace-lsa" || name == "opaque-router-info-lsa-type" || name == "opaque-ep-lsa-type" || name == "opaque-el-lsa-type" || name == "internal-lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::RouterLsaType()
    :
    router_asbr{YType::boolean, "router-asbr"},
    router_abr{YType::boolean, "router-abr"},
    internal_lsa{YType::boolean, "internal-lsa"}
        ,
    link(this, {})
    , internal_link(this, {})
{

    yang_name = "router-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::~RouterLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<internal_link.len(); index++)
    {
        if(internal_link[index]->has_data())
            return true;
    }
    return router_asbr.is_set
	|| router_abr.is_set
	|| internal_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_operation() const
{
    for (std::size_t index=0; index<link.len(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<internal_link.len(); index++)
    {
        if(internal_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_asbr.yfilter)
	|| ydk::is_set(router_abr.yfilter)
	|| ydk::is_set(internal_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_asbr.is_set || is_set(router_asbr.yfilter)) leaf_name_data.push_back(router_asbr.get_name_leafdata());
    if (router_abr.is_set || is_set(router_abr.yfilter)) leaf_name_data.push_back(router_abr.get_name_leafdata());
    if (internal_lsa.is_set || is_set(internal_lsa.yfilter)) leaf_name_data.push_back(internal_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link>();
        ent_->parent = this;
        link.append(ent_);
        return ent_;
    }

    if(child_yang_name == "internal-link")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink>();
        ent_->parent = this;
        internal_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : internal_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-asbr")
    {
        router_asbr = value;
        router_asbr.value_namespace = name_space;
        router_asbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-abr")
    {
        router_abr = value;
        router_abr.value_namespace = name_space;
        router_abr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa = value;
        internal_lsa.value_namespace = name_space;
        internal_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-asbr")
    {
        router_asbr.yfilter = yfilter;
    }
    if(value_path == "router-abr")
    {
        router_abr.yfilter = yfilter;
    }
    if(value_path == "internal-lsa")
    {
        internal_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "internal-link" || name == "router-asbr" || name == "router-abr" || name == "internal-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::Link()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
        ,
    link_tos(this, {})
{

    yang_name = "link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::~Link()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_operation() const
{
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos>();
        ent_->parent = this;
        link_tos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_tos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_data() const
{
    if (is_presence_container) return true;
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::InternalLink()
    :
    link_id{YType::str, "link-id"},
    link_data{YType::str, "link-data"},
    link_type{YType::enumeration, "link-type"},
    link_metric{YType::uint16, "link-metric"}
        ,
    link_tos(this, {})
{

    yang_name = "internal-link"; yang_parent_name = "router-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::~InternalLink()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| link_type.is_set
	|| link_metric.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_operation() const
{
    for (std::size_t index=0; index<link_tos.len(); index++)
    {
        if(link_tos[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_metric.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_metric.is_set || is_set(link_metric.yfilter)) leaf_name_data.push_back(link_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-tos")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos>();
        ent_->parent = this;
        link_tos.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : link_tos.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-data")
    {
        link_data = value;
        link_data.value_namespace = name_space;
        link_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-metric")
    {
        link_metric = value;
        link_metric.value_namespace = name_space;
        link_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-metric")
    {
        link_metric.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-tos" || name == "link-id" || name == "link-data" || name == "link-type" || name == "link-metric")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::LinkTos()
    :
    router_tos{YType::uint16, "router-tos"},
    tos_cost{YType::uint16, "tos-cost"}
{

    yang_name = "link-tos"; yang_parent_name = "internal-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::~LinkTos()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_data() const
{
    if (is_presence_container) return true;
    return router_tos.is_set
	|| tos_cost.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_tos.yfilter)
	|| ydk::is_set(tos_cost.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-tos";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_tos.is_set || is_set(router_tos.yfilter)) leaf_name_data.push_back(router_tos.get_name_leafdata());
    if (tos_cost.is_set || is_set(tos_cost.yfilter)) leaf_name_data.push_back(tos_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-tos")
    {
        router_tos = value;
        router_tos.value_namespace = name_space;
        router_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-cost")
    {
        tos_cost = value;
        tos_cost.value_namespace = name_space;
        tos_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-tos")
    {
        router_tos.yfilter = yfilter;
    }
    if(value_path == "tos-cost")
    {
        tos_cost.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-tos" || name == "tos-cost")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NetworkLsaType()
    :
    network_prefix_length{YType::uint32, "network-prefix-length"}
        ,
    neighbor_router(this, {})
{

    yang_name = "network-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::~NetworkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_router.len(); index++)
    {
        if(neighbor_router[index]->has_data())
            return true;
    }
    return network_prefix_length.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_operation() const
{
    for (std::size_t index=0; index<neighbor_router.len(); index++)
    {
        if(neighbor_router[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_prefix_length.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix_length.is_set || is_set(network_prefix_length.yfilter)) leaf_name_data.push_back(network_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-router")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter>();
        ent_->parent = this;
        neighbor_router.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_router.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length = value;
        network_prefix_length.value_namespace = name_space;
        network_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix-length")
    {
        network_prefix_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-router" || name == "network-prefix-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::NeighborRouter()
    :
    entry{YType::str, "entry"}
{

    yang_name = "neighbor-router"; yang_parent_name = "network-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::~NeighborRouter()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-router";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::NetworkLsaType::NeighborRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaType()
    :
    summary_prefix_length{YType::uint32, "summary-prefix-length"},
    internal_sum_lsa{YType::boolean, "internal-sum-lsa"}
        ,
    summary_lsa_metric(this, {})
{

    yang_name = "summary-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::~SummaryLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_lsa_metric.len(); index++)
    {
        if(summary_lsa_metric[index]->has_data())
            return true;
    }
    return summary_prefix_length.is_set
	|| internal_sum_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_operation() const
{
    for (std::size_t index=0; index<summary_lsa_metric.len(); index++)
    {
        if(summary_lsa_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(summary_prefix_length.yfilter)
	|| ydk::is_set(internal_sum_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (summary_prefix_length.is_set || is_set(summary_prefix_length.yfilter)) leaf_name_data.push_back(summary_prefix_length.get_name_leafdata());
    if (internal_sum_lsa.is_set || is_set(internal_sum_lsa.yfilter)) leaf_name_data.push_back(internal_sum_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-lsa-metric")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric>();
        ent_->parent = this;
        summary_lsa_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_lsa_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length = value;
        summary_prefix_length.value_namespace = name_space;
        summary_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa = value;
        internal_sum_lsa.value_namespace = name_space;
        internal_sum_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "summary-prefix-length")
    {
        summary_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-sum-lsa")
    {
        internal_sum_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-lsa-metric" || name == "summary-prefix-length" || name == "internal-sum-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::SummaryLsaMetric()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "summary-lsa-metric"; yang_parent_name = "summary-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::~SummaryLsaMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa-metric";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::SummaryLsaType::SummaryLsaMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalLsaType()
    :
    external_prefix_length{YType::uint32, "external-prefix-length"},
    internal_external_lsa{YType::boolean, "internal-external-lsa"}
        ,
    external_tos_metric(this, {})
{

    yang_name = "external-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::~ExternalLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<external_tos_metric.len(); index++)
    {
        if(external_tos_metric[index]->has_data())
            return true;
    }
    return external_prefix_length.is_set
	|| internal_external_lsa.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_operation() const
{
    for (std::size_t index=0; index<external_tos_metric.len(); index++)
    {
        if(external_tos_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(external_prefix_length.yfilter)
	|| ydk::is_set(internal_external_lsa.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_prefix_length.is_set || is_set(external_prefix_length.yfilter)) leaf_name_data.push_back(external_prefix_length.get_name_leafdata());
    if (internal_external_lsa.is_set || is_set(internal_external_lsa.yfilter)) leaf_name_data.push_back(internal_external_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-tos-metric")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric>();
        ent_->parent = this;
        external_tos_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : external_tos_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length = value;
        external_prefix_length.value_namespace = name_space;
        external_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa = value;
        internal_external_lsa.value_namespace = name_space;
        internal_external_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-prefix-length")
    {
        external_prefix_length.yfilter = yfilter;
    }
    if(value_path == "internal-external-lsa")
    {
        internal_external_lsa.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-tos-metric" || name == "external-prefix-length" || name == "internal-external-lsa")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::ExternalTosMetric()
    :
    external_metric{YType::uint32, "external-metric"},
    external_metric_type{YType::enumeration, "external-metric-type"},
    external_tos{YType::uint32, "external-tos"},
    forwarding_address{YType::str, "forwarding-address"},
    external_tag{YType::uint32, "external-tag"}
{

    yang_name = "external-tos-metric"; yang_parent_name = "external-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::~ExternalTosMetric()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_data() const
{
    if (is_presence_container) return true;
    return external_metric.is_set
	|| external_metric_type.is_set
	|| external_tos.is_set
	|| forwarding_address.is_set
	|| external_tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_metric.yfilter)
	|| ydk::is_set(external_metric_type.yfilter)
	|| ydk::is_set(external_tos.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-tos-metric";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_metric.is_set || is_set(external_metric.yfilter)) leaf_name_data.push_back(external_metric.get_name_leafdata());
    if (external_metric_type.is_set || is_set(external_metric_type.yfilter)) leaf_name_data.push_back(external_metric_type.get_name_leafdata());
    if (external_tos.is_set || is_set(external_tos.yfilter)) leaf_name_data.push_back(external_tos.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-metric")
    {
        external_metric = value;
        external_metric.value_namespace = name_space;
        external_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type = value;
        external_metric_type.value_namespace = name_space;
        external_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tos")
    {
        external_tos = value;
        external_tos.value_namespace = name_space;
        external_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-metric")
    {
        external_metric.yfilter = yfilter;
    }
    if(value_path == "external-metric-type")
    {
        external_metric_type.yfilter = yfilter;
    }
    if(value_path == "external-tos")
    {
        external_tos.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-metric" || name == "external-metric-type" || name == "external-tos" || name == "forwarding-address" || name == "external-tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::OpaqueLinkLsaType()
    :
    opaque_interface_name{YType::str, "opaque-interface-name"}
{

    yang_name = "opaque-link-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::~OpaqueLinkLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_data() const
{
    if (is_presence_container) return true;
    return opaque_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opaque_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-link-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_interface_name.is_set || is_set(opaque_interface_name.yfilter)) leaf_name_data.push_back(opaque_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name = value;
        opaque_interface_name.value_namespace = name_space;
        opaque_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-interface-name")
    {
        opaque_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::OpaqueMplsTeLsaType()
    :
    tlv(this, {})
{

    yang_name = "opaque-mpls-te-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::~OpaqueMplsTeLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-mpls-te-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::str, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
        ,
    te_link_sub_tlv(this, {})
{

    yang_name = "tlv"; yang_parent_name = "opaque-mpls-te-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv>();
        ent_->parent = this;
        te_link_sub_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_link_sub_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    if (is_presence_container) return true;
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::OpaqueGraceLsa()
    :
    grace_period{YType::uint32, "grace-period"},
    grace_reason{YType::enumeration, "grace-reason"},
    ip_address{YType::str, "ip-address"}
{

    yang_name = "opaque-grace-lsa"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::~OpaqueGraceLsa()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_data() const
{
    if (is_presence_container) return true;
    return grace_period.is_set
	|| grace_reason.is_set
	|| ip_address.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grace_period.yfilter)
	|| ydk::is_set(grace_reason.yfilter)
	|| ydk::is_set(ip_address.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-grace-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grace_period.is_set || is_set(grace_period.yfilter)) leaf_name_data.push_back(grace_period.get_name_leafdata());
    if (grace_reason.is_set || is_set(grace_reason.yfilter)) leaf_name_data.push_back(grace_reason.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grace-period")
    {
        grace_period = value;
        grace_period.value_namespace = name_space;
        grace_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grace-reason")
    {
        grace_reason = value;
        grace_reason.value_namespace = name_space;
        grace_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grace-period")
    {
        grace_period.yfilter = yfilter;
    }
    if(value_path == "grace-reason")
    {
        grace_reason.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grace-period" || name == "grace-reason" || name == "ip-address")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRouterInfoLsaType()
    :
    opaque_rilsa_scope{YType::enumeration, "opaque-rilsa-scope"},
    opaque_ri_interface_name{YType::str, "opaque-ri-interface-name"}
        ,
    opaque_ritlv(this, {})
{

    yang_name = "opaque-router-info-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::~OpaqueRouterInfoLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opaque_ritlv.len(); index++)
    {
        if(opaque_ritlv[index]->has_data())
            return true;
    }
    return opaque_rilsa_scope.is_set
	|| opaque_ri_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_operation() const
{
    for (std::size_t index=0; index<opaque_ritlv.len(); index++)
    {
        if(opaque_ritlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(opaque_rilsa_scope.yfilter)
	|| ydk::is_set(opaque_ri_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-router-info-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opaque_rilsa_scope.is_set || is_set(opaque_rilsa_scope.yfilter)) leaf_name_data.push_back(opaque_rilsa_scope.get_name_leafdata());
    if (opaque_ri_interface_name.is_set || is_set(opaque_ri_interface_name.yfilter)) leaf_name_data.push_back(opaque_ri_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opaque-ritlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv>();
        ent_->parent = this;
        opaque_ritlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opaque_ritlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope = value;
        opaque_rilsa_scope.value_namespace = name_space;
        opaque_rilsa_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name = value;
        opaque_ri_interface_name.value_namespace = name_space;
        opaque_ri_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opaque-rilsa-scope")
    {
        opaque_rilsa_scope.yfilter = yfilter;
    }
    if(value_path == "opaque-ri-interface-name")
    {
        opaque_ri_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opaque-ritlv" || name == "opaque-rilsa-scope" || name == "opaque-ri-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::OpaqueRitlv()
    :
    ritlv_internal_type{YType::enumeration, "ritlv-internal-type"}
        ,
    unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>())
    , rtr_cap_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>())
    , pcedtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>())
    , sr_algo_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>())
    , sr_range_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>())
    , node_msdtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>())
    , srlbtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv>())
{
    unknown_tlv->parent = this;
    rtr_cap_tlv->parent = this;
    pcedtlv->parent = this;
    sr_algo_tlv->parent = this;
    sr_range_tlv->parent = this;
    node_msdtlv->parent = this;
    srlbtlv->parent = this;

    yang_name = "opaque-ritlv"; yang_parent_name = "opaque-router-info-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::~OpaqueRitlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_data() const
{
    if (is_presence_container) return true;
    return ritlv_internal_type.is_set
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_data())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_data())
	|| (pcedtlv !=  nullptr && pcedtlv->has_data())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_data())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_data())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_data())
	|| (srlbtlv !=  nullptr && srlbtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ritlv_internal_type.yfilter)
	|| (unknown_tlv !=  nullptr && unknown_tlv->has_operation())
	|| (rtr_cap_tlv !=  nullptr && rtr_cap_tlv->has_operation())
	|| (pcedtlv !=  nullptr && pcedtlv->has_operation())
	|| (sr_algo_tlv !=  nullptr && sr_algo_tlv->has_operation())
	|| (sr_range_tlv !=  nullptr && sr_range_tlv->has_operation())
	|| (node_msdtlv !=  nullptr && node_msdtlv->has_operation())
	|| (srlbtlv !=  nullptr && srlbtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ritlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ritlv_internal_type.is_set || is_set(ritlv_internal_type.yfilter)) leaf_name_data.push_back(ritlv_internal_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown-tlv")
    {
        if(unknown_tlv == nullptr)
        {
            unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv>();
        }
        return unknown_tlv;
    }

    if(child_yang_name == "rtr-cap-tlv")
    {
        if(rtr_cap_tlv == nullptr)
        {
            rtr_cap_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv>();
        }
        return rtr_cap_tlv;
    }

    if(child_yang_name == "pcedtlv")
    {
        if(pcedtlv == nullptr)
        {
            pcedtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv>();
        }
        return pcedtlv;
    }

    if(child_yang_name == "sr-algo-tlv")
    {
        if(sr_algo_tlv == nullptr)
        {
            sr_algo_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv>();
        }
        return sr_algo_tlv;
    }

    if(child_yang_name == "sr-range-tlv")
    {
        if(sr_range_tlv == nullptr)
        {
            sr_range_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv>();
        }
        return sr_range_tlv;
    }

    if(child_yang_name == "node-msdtlv")
    {
        if(node_msdtlv == nullptr)
        {
            node_msdtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv>();
        }
        return node_msdtlv;
    }

    if(child_yang_name == "srlbtlv")
    {
        if(srlbtlv == nullptr)
        {
            srlbtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv>();
        }
        return srlbtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unknown_tlv != nullptr)
    {
        _children["unknown-tlv"] = unknown_tlv;
    }

    if(rtr_cap_tlv != nullptr)
    {
        _children["rtr-cap-tlv"] = rtr_cap_tlv;
    }

    if(pcedtlv != nullptr)
    {
        _children["pcedtlv"] = pcedtlv;
    }

    if(sr_algo_tlv != nullptr)
    {
        _children["sr-algo-tlv"] = sr_algo_tlv;
    }

    if(sr_range_tlv != nullptr)
    {
        _children["sr-range-tlv"] = sr_range_tlv;
    }

    if(node_msdtlv != nullptr)
    {
        _children["node-msdtlv"] = node_msdtlv;
    }

    if(srlbtlv != nullptr)
    {
        _children["srlbtlv"] = srlbtlv;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type = value;
        ritlv_internal_type.value_namespace = name_space;
        ritlv_internal_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ritlv-internal-type")
    {
        ritlv_internal_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-tlv" || name == "rtr-cap-tlv" || name == "pcedtlv" || name == "sr-algo-tlv" || name == "sr-range-tlv" || name == "node-msdtlv" || name == "srlbtlv" || name == "ritlv-internal-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::UnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "unknown-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::~UnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_data() const
{
    if (is_presence_container) return true;
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::RtrCapTlv()
    :
    rtr_cap_tlv_length{YType::uint16, "rtr-cap-tlv-length"},
    rtr_cap_graceful_restart{YType::boolean, "rtr-cap-graceful-restart"},
    rtr_cap_graceful_restart_helper{YType::boolean, "rtr-cap-graceful-restart-helper"},
    rtr_cap_stub_rtr{YType::boolean, "rtr-cap-stub-rtr"},
    rtr_cap_area_te{YType::boolean, "rtr-cap-area-te"},
    rtr_cap_p2plan{YType::boolean, "rtr-cap-p2plan"},
    rtr_cap_te_exp{YType::boolean, "rtr-cap-te-exp"},
    rtr_cap_all_bits{YType::uint32, "rtr-cap-all-bits"},
    rtr_cap_additional_info{YType::str, "rtr-cap-additional-info"}
{

    yang_name = "rtr-cap-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::~RtrCapTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_data() const
{
    if (is_presence_container) return true;
    return rtr_cap_tlv_length.is_set
	|| rtr_cap_graceful_restart.is_set
	|| rtr_cap_graceful_restart_helper.is_set
	|| rtr_cap_stub_rtr.is_set
	|| rtr_cap_area_te.is_set
	|| rtr_cap_p2plan.is_set
	|| rtr_cap_te_exp.is_set
	|| rtr_cap_all_bits.is_set
	|| rtr_cap_additional_info.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_cap_tlv_length.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart.yfilter)
	|| ydk::is_set(rtr_cap_graceful_restart_helper.yfilter)
	|| ydk::is_set(rtr_cap_stub_rtr.yfilter)
	|| ydk::is_set(rtr_cap_area_te.yfilter)
	|| ydk::is_set(rtr_cap_p2plan.yfilter)
	|| ydk::is_set(rtr_cap_te_exp.yfilter)
	|| ydk::is_set(rtr_cap_all_bits.yfilter)
	|| ydk::is_set(rtr_cap_additional_info.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr-cap-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_cap_tlv_length.is_set || is_set(rtr_cap_tlv_length.yfilter)) leaf_name_data.push_back(rtr_cap_tlv_length.get_name_leafdata());
    if (rtr_cap_graceful_restart.is_set || is_set(rtr_cap_graceful_restart.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart.get_name_leafdata());
    if (rtr_cap_graceful_restart_helper.is_set || is_set(rtr_cap_graceful_restart_helper.yfilter)) leaf_name_data.push_back(rtr_cap_graceful_restart_helper.get_name_leafdata());
    if (rtr_cap_stub_rtr.is_set || is_set(rtr_cap_stub_rtr.yfilter)) leaf_name_data.push_back(rtr_cap_stub_rtr.get_name_leafdata());
    if (rtr_cap_area_te.is_set || is_set(rtr_cap_area_te.yfilter)) leaf_name_data.push_back(rtr_cap_area_te.get_name_leafdata());
    if (rtr_cap_p2plan.is_set || is_set(rtr_cap_p2plan.yfilter)) leaf_name_data.push_back(rtr_cap_p2plan.get_name_leafdata());
    if (rtr_cap_te_exp.is_set || is_set(rtr_cap_te_exp.yfilter)) leaf_name_data.push_back(rtr_cap_te_exp.get_name_leafdata());
    if (rtr_cap_all_bits.is_set || is_set(rtr_cap_all_bits.yfilter)) leaf_name_data.push_back(rtr_cap_all_bits.get_name_leafdata());
    if (rtr_cap_additional_info.is_set || is_set(rtr_cap_additional_info.yfilter)) leaf_name_data.push_back(rtr_cap_additional_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length = value;
        rtr_cap_tlv_length.value_namespace = name_space;
        rtr_cap_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart = value;
        rtr_cap_graceful_restart.value_namespace = name_space;
        rtr_cap_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper = value;
        rtr_cap_graceful_restart_helper.value_namespace = name_space;
        rtr_cap_graceful_restart_helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr = value;
        rtr_cap_stub_rtr.value_namespace = name_space;
        rtr_cap_stub_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te = value;
        rtr_cap_area_te.value_namespace = name_space;
        rtr_cap_area_te.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan = value;
        rtr_cap_p2plan.value_namespace = name_space;
        rtr_cap_p2plan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp = value;
        rtr_cap_te_exp.value_namespace = name_space;
        rtr_cap_te_exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits = value;
        rtr_cap_all_bits.value_namespace = name_space;
        rtr_cap_all_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info = value;
        rtr_cap_additional_info.value_namespace = name_space;
        rtr_cap_additional_info.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-cap-tlv-length")
    {
        rtr_cap_tlv_length.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart")
    {
        rtr_cap_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-graceful-restart-helper")
    {
        rtr_cap_graceful_restart_helper.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-stub-rtr")
    {
        rtr_cap_stub_rtr.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-area-te")
    {
        rtr_cap_area_te.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-p2plan")
    {
        rtr_cap_p2plan.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-te-exp")
    {
        rtr_cap_te_exp.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-all-bits")
    {
        rtr_cap_all_bits.yfilter = yfilter;
    }
    if(value_path == "rtr-cap-additional-info")
    {
        rtr_cap_additional_info.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-cap-tlv-length" || name == "rtr-cap-graceful-restart" || name == "rtr-cap-graceful-restart-helper" || name == "rtr-cap-stub-rtr" || name == "rtr-cap-area-te" || name == "rtr-cap-p2plan" || name == "rtr-cap-te-exp" || name == "rtr-cap-all-bits" || name == "rtr-cap-additional-info")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::Pcedtlv()
    :
    pcedtlv_length{YType::uint16, "pcedtlv-length"}
        ,
    pced_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>())
    , pced_scope(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>())
{
    pced_addr->parent = this;
    pced_scope->parent = this;

    yang_name = "pcedtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::~Pcedtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_data() const
{
    if (is_presence_container) return true;
    return pcedtlv_length.is_set
	|| (pced_addr !=  nullptr && pced_addr->has_data())
	|| (pced_scope !=  nullptr && pced_scope->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcedtlv_length.yfilter)
	|| (pced_addr !=  nullptr && pced_addr->has_operation())
	|| (pced_scope !=  nullptr && pced_scope->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcedtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcedtlv_length.is_set || is_set(pcedtlv_length.yfilter)) leaf_name_data.push_back(pcedtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pced-addr")
    {
        if(pced_addr == nullptr)
        {
            pced_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr>();
        }
        return pced_addr;
    }

    if(child_yang_name == "pced-scope")
    {
        if(pced_scope == nullptr)
        {
            pced_scope = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope>();
        }
        return pced_scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pced_addr != nullptr)
    {
        _children["pced-addr"] = pced_addr;
    }

    if(pced_scope != nullptr)
    {
        _children["pced-scope"] = pced_scope;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length = value;
        pcedtlv_length.value_namespace = name_space;
        pcedtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcedtlv-length")
    {
        pcedtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pced-addr" || name == "pced-scope" || name == "pcedtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PcedAddr()
    :
    pce_addr_type{YType::enumeration, "pce-addr-type"}
        ,
    pce_addr_unknown_tlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>())
    , ipv4pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr>())
    , ipv6pce_addr(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr>())
{
    pce_addr_unknown_tlv->parent = this;
    ipv4pce_addr->parent = this;
    ipv6pce_addr->parent = this;

    yang_name = "pced-addr"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::~PcedAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_data() const
{
    if (is_presence_container) return true;
    return pce_addr_type.is_set
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_data())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_data())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pce_addr_type.yfilter)
	|| (pce_addr_unknown_tlv !=  nullptr && pce_addr_unknown_tlv->has_operation())
	|| (ipv4pce_addr !=  nullptr && ipv4pce_addr->has_operation())
	|| (ipv6pce_addr !=  nullptr && ipv6pce_addr->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pce_addr_type.is_set || is_set(pce_addr_type.yfilter)) leaf_name_data.push_back(pce_addr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pce-addr-unknown-tlv")
    {
        if(pce_addr_unknown_tlv == nullptr)
        {
            pce_addr_unknown_tlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv>();
        }
        return pce_addr_unknown_tlv;
    }

    if(child_yang_name == "ipv4pce-addr")
    {
        if(ipv4pce_addr == nullptr)
        {
            ipv4pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr>();
        }
        return ipv4pce_addr;
    }

    if(child_yang_name == "ipv6pce-addr")
    {
        if(ipv6pce_addr == nullptr)
        {
            ipv6pce_addr = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr>();
        }
        return ipv6pce_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pce_addr_unknown_tlv != nullptr)
    {
        _children["pce-addr-unknown-tlv"] = pce_addr_unknown_tlv;
    }

    if(ipv4pce_addr != nullptr)
    {
        _children["ipv4pce-addr"] = ipv4pce_addr;
    }

    if(ipv6pce_addr != nullptr)
    {
        _children["ipv6pce-addr"] = ipv6pce_addr;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type = value;
        pce_addr_type.value_namespace = name_space;
        pce_addr_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pce-addr-type")
    {
        pce_addr_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pce-addr-unknown-tlv" || name == "ipv4pce-addr" || name == "ipv6pce-addr" || name == "pce-addr-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::PceAddrUnknownTlv()
    :
    ri_gen_tlv_type{YType::uint16, "ri-gen-tlv-type"},
    ri_gen_tlv_length{YType::uint16, "ri-gen-tlv-length"},
    ri_genvalue{YType::str, "ri-genvalue"}
{

    yang_name = "pce-addr-unknown-tlv"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::~PceAddrUnknownTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_data() const
{
    if (is_presence_container) return true;
    return ri_gen_tlv_type.is_set
	|| ri_gen_tlv_length.is_set
	|| ri_genvalue.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ri_gen_tlv_type.yfilter)
	|| ydk::is_set(ri_gen_tlv_length.yfilter)
	|| ydk::is_set(ri_genvalue.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce-addr-unknown-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ri_gen_tlv_type.is_set || is_set(ri_gen_tlv_type.yfilter)) leaf_name_data.push_back(ri_gen_tlv_type.get_name_leafdata());
    if (ri_gen_tlv_length.is_set || is_set(ri_gen_tlv_length.yfilter)) leaf_name_data.push_back(ri_gen_tlv_length.get_name_leafdata());
    if (ri_genvalue.is_set || is_set(ri_genvalue.yfilter)) leaf_name_data.push_back(ri_genvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type = value;
        ri_gen_tlv_type.value_namespace = name_space;
        ri_gen_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length = value;
        ri_gen_tlv_length.value_namespace = name_space;
        ri_gen_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue = value;
        ri_genvalue.value_namespace = name_space;
        ri_genvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ri-gen-tlv-type")
    {
        ri_gen_tlv_type.yfilter = yfilter;
    }
    if(value_path == "ri-gen-tlv-length")
    {
        ri_gen_tlv_length.yfilter = yfilter;
    }
    if(value_path == "ri-genvalue")
    {
        ri_genvalue.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ri-gen-tlv-type" || name == "ri-gen-tlv-length" || name == "ri-genvalue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::Ipv4pceAddr()
    :
    pceipv4_addr{YType::str, "pceipv4-addr"}
{

    yang_name = "ipv4pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::~Ipv4pceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::has_data() const
{
    if (is_presence_container) return true;
    return pceipv4_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv4_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv4_addr.is_set || is_set(pceipv4_addr.yfilter)) leaf_name_data.push_back(pceipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr = value;
        pceipv4_addr.value_namespace = name_space;
        pceipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv4-addr")
    {
        pceipv4_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4pceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv4-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::Ipv6pceAddr()
    :
    pceipv6_addr{YType::str, "pceipv6-addr"}
{

    yang_name = "ipv6pce-addr"; yang_parent_name = "pced-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::~Ipv6pceAddr()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::has_data() const
{
    if (is_presence_container) return true;
    return pceipv6_addr.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pceipv6_addr.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6pce-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pceipv6_addr.is_set || is_set(pceipv6_addr.yfilter)) leaf_name_data.push_back(pceipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr = value;
        pceipv6_addr.value_namespace = name_space;
        pceipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pceipv6-addr")
    {
        pceipv6_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6pceAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pceipv6-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::PcedScope()
    :
    lbit{YType::boolean, "lbit"},
    rbit{YType::boolean, "rbit"},
    rd_bit{YType::boolean, "rd-bit"},
    sbit{YType::boolean, "sbit"},
    sd_bit{YType::boolean, "sd-bit"},
    ybit{YType::boolean, "ybit"},
    pref_l{YType::uint8, "pref-l"},
    pref_r{YType::uint8, "pref-r"},
    pref_s{YType::uint8, "pref-s"},
    pref_y{YType::uint8, "pref-y"},
    all_scope_info_bits{YType::uint32, "all-scope-info-bits"}
{

    yang_name = "pced-scope"; yang_parent_name = "pcedtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::~PcedScope()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_data() const
{
    if (is_presence_container) return true;
    return lbit.is_set
	|| rbit.is_set
	|| rd_bit.is_set
	|| sbit.is_set
	|| sd_bit.is_set
	|| ybit.is_set
	|| pref_l.is_set
	|| pref_r.is_set
	|| pref_s.is_set
	|| pref_y.is_set
	|| all_scope_info_bits.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lbit.yfilter)
	|| ydk::is_set(rbit.yfilter)
	|| ydk::is_set(rd_bit.yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(sd_bit.yfilter)
	|| ydk::is_set(ybit.yfilter)
	|| ydk::is_set(pref_l.yfilter)
	|| ydk::is_set(pref_r.yfilter)
	|| ydk::is_set(pref_s.yfilter)
	|| ydk::is_set(pref_y.yfilter)
	|| ydk::is_set(all_scope_info_bits.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pced-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lbit.is_set || is_set(lbit.yfilter)) leaf_name_data.push_back(lbit.get_name_leafdata());
    if (rbit.is_set || is_set(rbit.yfilter)) leaf_name_data.push_back(rbit.get_name_leafdata());
    if (rd_bit.is_set || is_set(rd_bit.yfilter)) leaf_name_data.push_back(rd_bit.get_name_leafdata());
    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (sd_bit.is_set || is_set(sd_bit.yfilter)) leaf_name_data.push_back(sd_bit.get_name_leafdata());
    if (ybit.is_set || is_set(ybit.yfilter)) leaf_name_data.push_back(ybit.get_name_leafdata());
    if (pref_l.is_set || is_set(pref_l.yfilter)) leaf_name_data.push_back(pref_l.get_name_leafdata());
    if (pref_r.is_set || is_set(pref_r.yfilter)) leaf_name_data.push_back(pref_r.get_name_leafdata());
    if (pref_s.is_set || is_set(pref_s.yfilter)) leaf_name_data.push_back(pref_s.get_name_leafdata());
    if (pref_y.is_set || is_set(pref_y.yfilter)) leaf_name_data.push_back(pref_y.get_name_leafdata());
    if (all_scope_info_bits.is_set || is_set(all_scope_info_bits.yfilter)) leaf_name_data.push_back(all_scope_info_bits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lbit")
    {
        lbit = value;
        lbit.value_namespace = name_space;
        lbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rbit")
    {
        rbit = value;
        rbit.value_namespace = name_space;
        rbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bit")
    {
        rd_bit = value;
        rd_bit.value_namespace = name_space;
        rd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd-bit")
    {
        sd_bit = value;
        sd_bit.value_namespace = name_space;
        sd_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ybit")
    {
        ybit = value;
        ybit.value_namespace = name_space;
        ybit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-l")
    {
        pref_l = value;
        pref_l.value_namespace = name_space;
        pref_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-r")
    {
        pref_r = value;
        pref_r.value_namespace = name_space;
        pref_r.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-s")
    {
        pref_s = value;
        pref_s.value_namespace = name_space;
        pref_s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-y")
    {
        pref_y = value;
        pref_y.value_namespace = name_space;
        pref_y.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits = value;
        all_scope_info_bits.value_namespace = name_space;
        all_scope_info_bits.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lbit")
    {
        lbit.yfilter = yfilter;
    }
    if(value_path == "rbit")
    {
        rbit.yfilter = yfilter;
    }
    if(value_path == "rd-bit")
    {
        rd_bit.yfilter = yfilter;
    }
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "sd-bit")
    {
        sd_bit.yfilter = yfilter;
    }
    if(value_path == "ybit")
    {
        ybit.yfilter = yfilter;
    }
    if(value_path == "pref-l")
    {
        pref_l.yfilter = yfilter;
    }
    if(value_path == "pref-r")
    {
        pref_r.yfilter = yfilter;
    }
    if(value_path == "pref-s")
    {
        pref_s.yfilter = yfilter;
    }
    if(value_path == "pref-y")
    {
        pref_y.yfilter = yfilter;
    }
    if(value_path == "all-scope-info-bits")
    {
        all_scope_info_bits.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbit" || name == "rbit" || name == "rd-bit" || name == "sbit" || name == "sd-bit" || name == "ybit" || name == "pref-l" || name == "pref-r" || name == "pref-s" || name == "pref-y" || name == "all-scope-info-bits")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoTlv()
    :
    sr_algo_value(this, {})
{

    yang_name = "sr-algo-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::~SrAlgoTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_algo_value.len(); index++)
    {
        if(sr_algo_value[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_operation() const
{
    for (std::size_t index=0; index<sr_algo_value.len(); index++)
    {
        if(sr_algo_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-algo-value")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue>();
        ent_->parent = this;
        sr_algo_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_algo_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-algo-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::SrAlgoValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "sr-algo-value"; yang_parent_name = "sr-algo-tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::~SrAlgoValue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-algo-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv::SrAlgoValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::SrRangeTlv()
    :
    sr_range_length{YType::uint16, "sr-range-length"},
    sr_range_size{YType::uint32, "sr-range-size"}
        ,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "sr-range-tlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::~SrRangeTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_data() const
{
    if (is_presence_container) return true;
    return sr_range_length.is_set
	|| sr_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_range_length.yfilter)
	|| ydk::is_set(sr_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-range-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_range_length.is_set || is_set(sr_range_length.yfilter)) leaf_name_data.push_back(sr_range_length.get_name_leafdata());
    if (sr_range_size.is_set || is_set(sr_range_size.yfilter)) leaf_name_data.push_back(sr_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sidtlv != nullptr)
    {
        _children["sidtlv"] = sidtlv;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length = value;
        sr_range_length.value_namespace = name_space;
        sr_range_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size = value;
        sr_range_size.value_namespace = name_space;
        sr_range_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-range-length")
    {
        sr_range_length.yfilter = yfilter;
    }
    if(value_path == "sr-range-size")
    {
        sr_range_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "sr-range-length" || name == "sr-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "sr-range-tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_data() const
{
    if (is_presence_container) return true;
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
        sr_sid_length.value_namespace = name_space;
        sr_sid_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
        sr_sid_value.value_namespace = name_space;
        sr_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length.yfilter = yfilter;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdtlv()
    :
    node_msdtlv_length{YType::uint16, "node-msdtlv-length"}
        ,
    node_msd_sub_types(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>())
{
    node_msd_sub_types->parent = this;

    yang_name = "node-msdtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::~NodeMsdtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_data() const
{
    if (is_presence_container) return true;
    return node_msdtlv_length.is_set
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_msdtlv_length.yfilter)
	|| (node_msd_sub_types !=  nullptr && node_msd_sub_types->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msdtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_msdtlv_length.is_set || is_set(node_msdtlv_length.yfilter)) leaf_name_data.push_back(node_msdtlv_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-msd-sub-types")
    {
        if(node_msd_sub_types == nullptr)
        {
            node_msd_sub_types = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes>();
        }
        return node_msd_sub_types;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_msd_sub_types != nullptr)
    {
        _children["node-msd-sub-types"] = node_msd_sub_types;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length = value;
        node_msdtlv_length.value_namespace = name_space;
        node_msdtlv_length.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-msdtlv-length")
    {
        node_msdtlv_length.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-msd-sub-types" || name == "node-msdtlv-length")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::NodeMsdSubTypes()
    :
    msd_sub_type{YType::uint8, "msd-sub-type"},
    msd_value{YType::uint8, "msd-value"}
{

    yang_name = "node-msd-sub-types"; yang_parent_name = "node-msdtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::~NodeMsdSubTypes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_data() const
{
    if (is_presence_container) return true;
    return msd_sub_type.is_set
	|| msd_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msd_sub_type.yfilter)
	|| ydk::is_set(msd_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-msd-sub-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msd_sub_type.is_set || is_set(msd_sub_type.yfilter)) leaf_name_data.push_back(msd_sub_type.get_name_leafdata());
    if (msd_value.is_set || is_set(msd_value.yfilter)) leaf_name_data.push_back(msd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type = value;
        msd_sub_type.value_namespace = name_space;
        msd_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd-value")
    {
        msd_value = value;
        msd_value.value_namespace = name_space;
        msd_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msd-sub-type")
    {
        msd_sub_type.yfilter = yfilter;
    }
    if(value_path == "msd-value")
    {
        msd_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::NodeMsdtlv::NodeMsdSubTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msd-sub-type" || name == "msd-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Srlbtlv()
    :
    srlbtlv_length{YType::uint16, "srlbtlv-length"},
    srlb_range_size{YType::uint32, "srlb-range-size"}
        ,
    sidtlv(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv>())
{
    sidtlv->parent = this;

    yang_name = "srlbtlv"; yang_parent_name = "opaque-ritlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::~Srlbtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::has_data() const
{
    if (is_presence_container) return true;
    return srlbtlv_length.is_set
	|| srlb_range_size.is_set
	|| (sidtlv !=  nullptr && sidtlv->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlbtlv_length.yfilter)
	|| ydk::is_set(srlb_range_size.yfilter)
	|| (sidtlv !=  nullptr && sidtlv->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlbtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlbtlv_length.is_set || is_set(srlbtlv_length.yfilter)) leaf_name_data.push_back(srlbtlv_length.get_name_leafdata());
    if (srlb_range_size.is_set || is_set(srlb_range_size.yfilter)) leaf_name_data.push_back(srlb_range_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sidtlv")
    {
        if(sidtlv == nullptr)
        {
            sidtlv = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv>();
        }
        return sidtlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sidtlv != nullptr)
    {
        _children["sidtlv"] = sidtlv;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlbtlv-length")
    {
        srlbtlv_length = value;
        srlbtlv_length.value_namespace = name_space;
        srlbtlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-range-size")
    {
        srlb_range_size = value;
        srlb_range_size.value_namespace = name_space;
        srlb_range_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlbtlv-length")
    {
        srlbtlv_length.yfilter = yfilter;
    }
    if(value_path == "srlb-range-size")
    {
        srlb_range_size.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sidtlv" || name == "srlbtlv-length" || name == "srlb-range-size")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::Sidtlv()
    :
    sr_sid_length{YType::uint16, "sr-sid-length"},
    sr_sid_value{YType::uint32, "sr-sid-value"}
{

    yang_name = "sidtlv"; yang_parent_name = "srlbtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::~Sidtlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::has_data() const
{
    if (is_presence_container) return true;
    return sr_sid_length.is_set
	|| sr_sid_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_sid_length.yfilter)
	|| ydk::is_set(sr_sid_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sidtlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_sid_length.is_set || is_set(sr_sid_length.yfilter)) leaf_name_data.push_back(sr_sid_length.get_name_leafdata());
    if (sr_sid_value.is_set || is_set(sr_sid_value.yfilter)) leaf_name_data.push_back(sr_sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length = value;
        sr_sid_length.value_namespace = name_space;
        sr_sid_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value = value;
        sr_sid_value.value_namespace = name_space;
        sr_sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-sid-length")
    {
        sr_sid_length.yfilter = yfilter;
    }
    if(value_path == "sr-sid-value")
    {
        sr_sid_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Srlbtlv::Sidtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-sid-length" || name == "sr-sid-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::OpaqueEpLsaType()
    :
    tlv(this, {})
{

    yang_name = "opaque-ep-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::~OpaqueEpLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-ep-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::str, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
        ,
    te_link_sub_tlv(this, {})
{

    yang_name = "tlv"; yang_parent_name = "opaque-ep-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv>();
        ent_->parent = this;
        te_link_sub_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_link_sub_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    if (is_presence_container) return true;
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::OpaqueElLsaType()
    :
    tlv(this, {})
{

    yang_name = "opaque-el-lsa-type"; yang_parent_name = "lsa-internal-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::~OpaqueElLsaType()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opaque-el-lsa-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::Tlv()
    :
    tlv_type{YType::uint16, "tlv-type"},
    tlv_length{YType::uint16, "tlv-length"},
    mpls_router_id{YType::str, "mpls-router-id"},
    mpls_dste_link{YType::boolean, "mpls-dste-link"},
    tlv_data{YType::str, "tlv-data"}
        ,
    te_link_sub_tlv(this, {})
{

    yang_name = "tlv"; yang_parent_name = "opaque-el-lsa-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::~Tlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_data())
            return true;
    }
    return tlv_type.is_set
	|| tlv_length.is_set
	|| mpls_router_id.is_set
	|| mpls_dste_link.is_set
	|| tlv_data.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_operation() const
{
    for (std::size_t index=0; index<te_link_sub_tlv.len(); index++)
    {
        if(te_link_sub_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_type.yfilter)
	|| ydk::is_set(tlv_length.yfilter)
	|| ydk::is_set(mpls_router_id.yfilter)
	|| ydk::is_set(mpls_dste_link.yfilter)
	|| ydk::is_set(tlv_data.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_type.is_set || is_set(tlv_type.yfilter)) leaf_name_data.push_back(tlv_type.get_name_leafdata());
    if (tlv_length.is_set || is_set(tlv_length.yfilter)) leaf_name_data.push_back(tlv_length.get_name_leafdata());
    if (mpls_router_id.is_set || is_set(mpls_router_id.yfilter)) leaf_name_data.push_back(mpls_router_id.get_name_leafdata());
    if (mpls_dste_link.is_set || is_set(mpls_dste_link.yfilter)) leaf_name_data.push_back(mpls_dste_link.get_name_leafdata());
    if (tlv_data.is_set || is_set(tlv_data.yfilter)) leaf_name_data.push_back(tlv_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-link-sub-tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv>();
        ent_->parent = this;
        te_link_sub_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_link_sub_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-type")
    {
        tlv_type = value;
        tlv_type.value_namespace = name_space;
        tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-length")
    {
        tlv_length = value;
        tlv_length.value_namespace = name_space;
        tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id = value;
        mpls_router_id.value_namespace = name_space;
        mpls_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link = value;
        mpls_dste_link.value_namespace = name_space;
        mpls_dste_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tlv-data")
    {
        tlv_data = value;
        tlv_data.value_namespace = name_space;
        tlv_data.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-type")
    {
        tlv_type.yfilter = yfilter;
    }
    if(value_path == "tlv-length")
    {
        tlv_length.yfilter = yfilter;
    }
    if(value_path == "mpls-router-id")
    {
        mpls_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-dste-link")
    {
        mpls_dste_link.yfilter = yfilter;
    }
    if(value_path == "tlv-data")
    {
        tlv_data.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-link-sub-tlv" || name == "tlv-type" || name == "tlv-length" || name == "mpls-router-id" || name == "mpls-dste-link" || name == "tlv-data")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::TeLinkSubTlv()
    :
    sub_tlv_type{YType::enumeration, "sub-tlv-type"},
    sub_tlv_length{YType::uint16, "sub-tlv-length"},
    sub_tlv_value{YType::str, "sub-tlv-value"}
{

    yang_name = "te-link-sub-tlv"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::~TeLinkSubTlv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_data() const
{
    if (is_presence_container) return true;
    return sub_tlv_type.is_set
	|| sub_tlv_length.is_set
	|| sub_tlv_value.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_tlv_type.yfilter)
	|| ydk::is_set(sub_tlv_length.yfilter)
	|| ydk::is_set(sub_tlv_value.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-link-sub-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_tlv_type.is_set || is_set(sub_tlv_type.yfilter)) leaf_name_data.push_back(sub_tlv_type.get_name_leafdata());
    if (sub_tlv_length.is_set || is_set(sub_tlv_length.yfilter)) leaf_name_data.push_back(sub_tlv_length.get_name_leafdata());
    if (sub_tlv_value.is_set || is_set(sub_tlv_value.yfilter)) leaf_name_data.push_back(sub_tlv_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type = value;
        sub_tlv_type.value_namespace = name_space;
        sub_tlv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length = value;
        sub_tlv_length.value_namespace = name_space;
        sub_tlv_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value = value;
        sub_tlv_value.value_namespace = name_space;
        sub_tlv_value.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-tlv-type")
    {
        sub_tlv_type.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-length")
    {
        sub_tlv_length.yfilter = yfilter;
    }
    if(value_path == "sub-tlv-value")
    {
        sub_tlv_value.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-tlv-type" || name == "sub-tlv-length" || name == "sub-tlv-value")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummaries()
    :
    lsa_summary(this, {})
{

    yang_name = "lsa-summaries"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::~LsaSummaries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsa_summary.len(); index++)
    {
        if(lsa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_operation() const
{
    for (std::size_t index=0; index<lsa_summary.len(); index++)
    {
        if(lsa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-summary")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary>();
        ent_->parent = this;
        lsa_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsa_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-summary")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaSummary()
    :
    area_id{YType::uint32, "area-id"},
    ls_type{YType::enumeration, "ls-type"},
    ls_id{YType::str, "ls-id"},
    advertising_router{YType::str, "advertising-router"},
    interface_name{YType::str, "interface-name"},
    external_tag{YType::uint32, "external-tag"},
    link_count{YType::uint16, "link-count"}
        ,
    lsa_header(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "lsa-summary"; yang_parent_name = "lsa-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::~LsaSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_data() const
{
    if (is_presence_container) return true;
    return area_id.is_set
	|| ls_type.is_set
	|| ls_id.is_set
	|| advertising_router.is_set
	|| interface_name.is_set
	|| external_tag.is_set
	|| link_count.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(ls_id.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(external_tag.yfilter)
	|| ydk::is_set(link_count.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (ls_id.is_set || is_set(ls_id.yfilter)) leaf_name_data.push_back(ls_id.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (external_tag.is_set || is_set(external_tag.yfilter)) leaf_name_data.push_back(external_tag.get_name_leafdata());
    if (link_count.is_set || is_set(link_count.yfilter)) leaf_name_data.push_back(link_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsa_header != nullptr)
    {
        _children["lsa-header"] = lsa_header;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-id")
    {
        ls_id = value;
        ls_id.value_namespace = name_space;
        ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-tag")
    {
        external_tag = value;
        external_tag.value_namespace = name_space;
        external_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count")
    {
        link_count = value;
        link_count.value_namespace = name_space;
        link_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "ls-id")
    {
        ls_id.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "external-tag")
    {
        external_tag.yfilter = yfilter;
    }
    if(value_path == "link-count")
    {
        link_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "area-id" || name == "ls-type" || name == "ls-id" || name == "advertising-router" || name == "interface-name" || name == "external-tag" || name == "link-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::LsaHeader()
    :
    ls_type{YType::enumeration, "ls-type"},
    lsid{YType::str, "lsid"},
    advertising_router{YType::str, "advertising-router"},
    lsa_area_id{YType::str, "lsa-area-id"},
    lsa_age{YType::uint16, "lsa-age"},
    dn_age_lsa{YType::boolean, "dn-age-lsa"},
    nsf{YType::boolean, "nsf"},
    sequence_number{YType::uint32, "sequence-number"},
    checksum{YType::uint16, "checksum"}
{

    yang_name = "lsa-header"; yang_parent_name = "lsa-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::~LsaHeader()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return ls_type.is_set
	|| lsid.is_set
	|| advertising_router.is_set
	|| lsa_area_id.is_set
	|| lsa_age.is_set
	|| dn_age_lsa.is_set
	|| nsf.is_set
	|| sequence_number.is_set
	|| checksum.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ls_type.yfilter)
	|| ydk::is_set(lsid.yfilter)
	|| ydk::is_set(advertising_router.yfilter)
	|| ydk::is_set(lsa_area_id.yfilter)
	|| ydk::is_set(lsa_age.yfilter)
	|| ydk::is_set(dn_age_lsa.yfilter)
	|| ydk::is_set(nsf.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(checksum.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ls_type.is_set || is_set(ls_type.yfilter)) leaf_name_data.push_back(ls_type.get_name_leafdata());
    if (lsid.is_set || is_set(lsid.yfilter)) leaf_name_data.push_back(lsid.get_name_leafdata());
    if (advertising_router.is_set || is_set(advertising_router.yfilter)) leaf_name_data.push_back(advertising_router.get_name_leafdata());
    if (lsa_area_id.is_set || is_set(lsa_area_id.yfilter)) leaf_name_data.push_back(lsa_area_id.get_name_leafdata());
    if (lsa_age.is_set || is_set(lsa_age.yfilter)) leaf_name_data.push_back(lsa_age.get_name_leafdata());
    if (dn_age_lsa.is_set || is_set(dn_age_lsa.yfilter)) leaf_name_data.push_back(dn_age_lsa.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.yfilter)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ls-type")
    {
        ls_type = value;
        ls_type.value_namespace = name_space;
        ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsid")
    {
        lsid = value;
        lsid.value_namespace = name_space;
        lsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertising-router")
    {
        advertising_router = value;
        advertising_router.value_namespace = name_space;
        advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id = value;
        lsa_area_id.value_namespace = name_space;
        lsa_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-age")
    {
        lsa_age = value;
        lsa_age.value_namespace = name_space;
        lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa = value;
        dn_age_lsa.value_namespace = name_space;
        dn_age_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf")
    {
        nsf = value;
        nsf.value_namespace = name_space;
        nsf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ls-type")
    {
        ls_type.yfilter = yfilter;
    }
    if(value_path == "lsid")
    {
        lsid.yfilter = yfilter;
    }
    if(value_path == "advertising-router")
    {
        advertising_router.yfilter = yfilter;
    }
    if(value_path == "lsa-area-id")
    {
        lsa_area_id.yfilter = yfilter;
    }
    if(value_path == "lsa-age")
    {
        lsa_age.yfilter = yfilter;
    }
    if(value_path == "dn-age-lsa")
    {
        dn_age_lsa.yfilter = yfilter;
    }
    if(value_path == "nsf")
    {
        nsf.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Database::LsaSummaries::LsaSummary::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ls-type" || name == "lsid" || name == "advertising-router" || name == "lsa-area-id" || name == "lsa-age" || name == "dn-age-lsa" || name == "nsf" || name == "sequence-number" || name == "checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
    :
    summary_prefix(this, {})
{

    yang_name = "summary-prefixes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.len(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary-prefix")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix>();
        ent_->parent = this;
        summary_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    netmask{YType::str, "netmask"},
    summary_prefix{YType::str, "summary-prefix"},
    summary_mask{YType::str, "summary-mask"},
    summary_metric{YType::uint32, "summary-metric"},
    summary_metric_type{YType::enumeration, "summary-metric-type"},
    summary_tag{YType::uint32, "summary-tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| netmask.is_set
	|| summary_prefix.is_set
	|| summary_mask.is_set
	|| summary_metric.is_set
	|| summary_metric_type.is_set
	|| summary_tag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(summary_prefix.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(summary_metric.yfilter)
	|| ydk::is_set(summary_metric_type.yfilter)
	|| ydk::is_set(summary_tag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (summary_prefix.is_set || is_set(summary_prefix.yfilter)) leaf_name_data.push_back(summary_prefix.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (summary_metric.is_set || is_set(summary_metric.yfilter)) leaf_name_data.push_back(summary_metric.get_name_leafdata());
    if (summary_metric_type.is_set || is_set(summary_metric_type.yfilter)) leaf_name_data.push_back(summary_metric_type.get_name_leafdata());
    if (summary_tag.is_set || is_set(summary_tag.yfilter)) leaf_name_data.push_back(summary_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix = value;
        summary_prefix.value_namespace = name_space;
        summary_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric")
    {
        summary_metric = value;
        summary_metric.value_namespace = name_space;
        summary_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type = value;
        summary_metric_type.value_namespace = name_space;
        summary_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-tag")
    {
        summary_tag = value;
        summary_tag.value_namespace = name_space;
        summary_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "summary-prefix")
    {
        summary_prefix.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "summary-metric")
    {
        summary_metric.yfilter = yfilter;
    }
    if(value_path == "summary-metric-type")
    {
        summary_metric_type.yfilter = yfilter;
    }
    if(value_path == "summary-tag")
    {
        summary_tag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "netmask" || name == "summary-prefix" || name == "summary-mask" || name == "summary-metric" || name == "summary-metric-type" || name == "summary-tag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::AreaStatistics()
    :
    interface_stats_entries(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>())
{
    interface_stats_entries->parent = this;

    yang_name = "area-statistics"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::~AreaStatistics()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (interface_stats_entries !=  nullptr && interface_stats_entries->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (interface_stats_entries !=  nullptr && interface_stats_entries->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entries")
    {
        if(interface_stats_entries == nullptr)
        {
            interface_stats_entries = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries>();
        }
        return interface_stats_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_stats_entries != nullptr)
    {
        _children["interface-stats-entries"] = interface_stats_entries;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entries")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntries()
    :
    interface_stats_entry(this, {"interface_name"})
{

    yang_name = "interface-stats-entries"; yang_parent_name = "area-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_stats_entry.len(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.len(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        ent_->parent = this;
        interface_stats_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_stats_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
        ,
    if_entry(this, {})
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_entry.len(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.len(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        ent_->parent = this;
        if_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    madj_intf{YType::boolean, "madj-intf"},
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"}
        ,
    if_stat(this, {})
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_stat.len(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return madj_intf.is_set
	|| area_id.is_set
	|| area_id_str.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.len(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(madj_intf.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        ent_->parent = this;
        if_stat.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_stat.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "madj-intf" || name == "area-id" || name == "area-id-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::OspfSummary()
    :
    sa_num_nbrs{YType::uint32, "sa-num-nbrs"},
    sa_num_nbrs_up{YType::uint32, "sa-num-nbrs-up"},
    sa_num_intf{YType::uint32, "sa-num-intf"},
    sa_num_intf_up{YType::uint32, "sa-num-intf-up"},
    sa_num_vintf_up{YType::uint32, "sa-num-vintf-up"},
    sa_num_slintf_up{YType::uint32, "sa-num-slintf-up"},
    sa_num_areas{YType::uint32, "sa-num-areas"},
    sa_lsa_cnt_type_rtr{YType::uint32, "sa-lsa-cnt-type-rtr"},
    sa_lsa_cnt_type_net{YType::uint32, "sa-lsa-cnt-type-net"},
    sa_lsa_cnt_type_sum_net{YType::uint32, "sa-lsa-cnt-type-sum-net"},
    sa_lsa_cnt_type_sum_asb{YType::uint32, "sa-lsa-cnt-type-sum-asb"},
    sa_lsa_cnt_type_ase{YType::uint32, "sa-lsa-cnt-type-ase"},
    sa_lsa_cnt_type_mospf{YType::uint32, "sa-lsa-cnt-type-mospf"},
    sa_lsa_cnt_type_7ase{YType::uint32, "sa-lsa-cnt-type-7ase"},
    sa_lsa_cnt_type_8_ignore{YType::uint32, "sa-lsa-cnt-type-8-ignore"},
    sa_lsa_cnt_type_opq_link{YType::uint32, "sa-lsa-cnt-type-opq-link"},
    sa_lsa_cnt_type_opq_area{YType::uint32, "sa-lsa-cnt-type-opq-area"},
    sa_lsa_cnt_type_opq_as{YType::uint32, "sa-lsa-cnt-type-opq-as"}
{

    yang_name = "ospf-summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::~OspfSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_data() const
{
    if (is_presence_container) return true;
    return sa_num_nbrs.is_set
	|| sa_num_nbrs_up.is_set
	|| sa_num_intf.is_set
	|| sa_num_intf_up.is_set
	|| sa_num_vintf_up.is_set
	|| sa_num_slintf_up.is_set
	|| sa_num_areas.is_set
	|| sa_lsa_cnt_type_rtr.is_set
	|| sa_lsa_cnt_type_net.is_set
	|| sa_lsa_cnt_type_sum_net.is_set
	|| sa_lsa_cnt_type_sum_asb.is_set
	|| sa_lsa_cnt_type_ase.is_set
	|| sa_lsa_cnt_type_mospf.is_set
	|| sa_lsa_cnt_type_7ase.is_set
	|| sa_lsa_cnt_type_8_ignore.is_set
	|| sa_lsa_cnt_type_opq_link.is_set
	|| sa_lsa_cnt_type_opq_area.is_set
	|| sa_lsa_cnt_type_opq_as.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_num_nbrs.yfilter)
	|| ydk::is_set(sa_num_nbrs_up.yfilter)
	|| ydk::is_set(sa_num_intf.yfilter)
	|| ydk::is_set(sa_num_intf_up.yfilter)
	|| ydk::is_set(sa_num_vintf_up.yfilter)
	|| ydk::is_set(sa_num_slintf_up.yfilter)
	|| ydk::is_set(sa_num_areas.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_rtr.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_net.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_sum_net.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_sum_asb.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_ase.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_mospf.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_7ase.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_8_ignore.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_link.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_area.yfilter)
	|| ydk::is_set(sa_lsa_cnt_type_opq_as.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_num_nbrs.is_set || is_set(sa_num_nbrs.yfilter)) leaf_name_data.push_back(sa_num_nbrs.get_name_leafdata());
    if (sa_num_nbrs_up.is_set || is_set(sa_num_nbrs_up.yfilter)) leaf_name_data.push_back(sa_num_nbrs_up.get_name_leafdata());
    if (sa_num_intf.is_set || is_set(sa_num_intf.yfilter)) leaf_name_data.push_back(sa_num_intf.get_name_leafdata());
    if (sa_num_intf_up.is_set || is_set(sa_num_intf_up.yfilter)) leaf_name_data.push_back(sa_num_intf_up.get_name_leafdata());
    if (sa_num_vintf_up.is_set || is_set(sa_num_vintf_up.yfilter)) leaf_name_data.push_back(sa_num_vintf_up.get_name_leafdata());
    if (sa_num_slintf_up.is_set || is_set(sa_num_slintf_up.yfilter)) leaf_name_data.push_back(sa_num_slintf_up.get_name_leafdata());
    if (sa_num_areas.is_set || is_set(sa_num_areas.yfilter)) leaf_name_data.push_back(sa_num_areas.get_name_leafdata());
    if (sa_lsa_cnt_type_rtr.is_set || is_set(sa_lsa_cnt_type_rtr.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_rtr.get_name_leafdata());
    if (sa_lsa_cnt_type_net.is_set || is_set(sa_lsa_cnt_type_net.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_net.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_net.is_set || is_set(sa_lsa_cnt_type_sum_net.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_net.get_name_leafdata());
    if (sa_lsa_cnt_type_sum_asb.is_set || is_set(sa_lsa_cnt_type_sum_asb.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_sum_asb.get_name_leafdata());
    if (sa_lsa_cnt_type_ase.is_set || is_set(sa_lsa_cnt_type_ase.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_ase.get_name_leafdata());
    if (sa_lsa_cnt_type_mospf.is_set || is_set(sa_lsa_cnt_type_mospf.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_mospf.get_name_leafdata());
    if (sa_lsa_cnt_type_7ase.is_set || is_set(sa_lsa_cnt_type_7ase.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_7ase.get_name_leafdata());
    if (sa_lsa_cnt_type_8_ignore.is_set || is_set(sa_lsa_cnt_type_8_ignore.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_8_ignore.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_link.is_set || is_set(sa_lsa_cnt_type_opq_link.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_link.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_area.is_set || is_set(sa_lsa_cnt_type_opq_area.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_area.get_name_leafdata());
    if (sa_lsa_cnt_type_opq_as.is_set || is_set(sa_lsa_cnt_type_opq_as.yfilter)) leaf_name_data.push_back(sa_lsa_cnt_type_opq_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-num-nbrs")
    {
        sa_num_nbrs = value;
        sa_num_nbrs.value_namespace = name_space;
        sa_num_nbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-nbrs-up")
    {
        sa_num_nbrs_up = value;
        sa_num_nbrs_up.value_namespace = name_space;
        sa_num_nbrs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-intf")
    {
        sa_num_intf = value;
        sa_num_intf.value_namespace = name_space;
        sa_num_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-intf-up")
    {
        sa_num_intf_up = value;
        sa_num_intf_up.value_namespace = name_space;
        sa_num_intf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-vintf-up")
    {
        sa_num_vintf_up = value;
        sa_num_vintf_up.value_namespace = name_space;
        sa_num_vintf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-slintf-up")
    {
        sa_num_slintf_up = value;
        sa_num_slintf_up.value_namespace = name_space;
        sa_num_slintf_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-num-areas")
    {
        sa_num_areas = value;
        sa_num_areas.value_namespace = name_space;
        sa_num_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-rtr")
    {
        sa_lsa_cnt_type_rtr = value;
        sa_lsa_cnt_type_rtr.value_namespace = name_space;
        sa_lsa_cnt_type_rtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-net")
    {
        sa_lsa_cnt_type_net = value;
        sa_lsa_cnt_type_net.value_namespace = name_space;
        sa_lsa_cnt_type_net.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-sum-net")
    {
        sa_lsa_cnt_type_sum_net = value;
        sa_lsa_cnt_type_sum_net.value_namespace = name_space;
        sa_lsa_cnt_type_sum_net.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-sum-asb")
    {
        sa_lsa_cnt_type_sum_asb = value;
        sa_lsa_cnt_type_sum_asb.value_namespace = name_space;
        sa_lsa_cnt_type_sum_asb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-ase")
    {
        sa_lsa_cnt_type_ase = value;
        sa_lsa_cnt_type_ase.value_namespace = name_space;
        sa_lsa_cnt_type_ase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-mospf")
    {
        sa_lsa_cnt_type_mospf = value;
        sa_lsa_cnt_type_mospf.value_namespace = name_space;
        sa_lsa_cnt_type_mospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-7ase")
    {
        sa_lsa_cnt_type_7ase = value;
        sa_lsa_cnt_type_7ase.value_namespace = name_space;
        sa_lsa_cnt_type_7ase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-8-ignore")
    {
        sa_lsa_cnt_type_8_ignore = value;
        sa_lsa_cnt_type_8_ignore.value_namespace = name_space;
        sa_lsa_cnt_type_8_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-link")
    {
        sa_lsa_cnt_type_opq_link = value;
        sa_lsa_cnt_type_opq_link.value_namespace = name_space;
        sa_lsa_cnt_type_opq_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-area")
    {
        sa_lsa_cnt_type_opq_area = value;
        sa_lsa_cnt_type_opq_area.value_namespace = name_space;
        sa_lsa_cnt_type_opq_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-lsa-cnt-type-opq-as")
    {
        sa_lsa_cnt_type_opq_as = value;
        sa_lsa_cnt_type_opq_as.value_namespace = name_space;
        sa_lsa_cnt_type_opq_as.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-num-nbrs")
    {
        sa_num_nbrs.yfilter = yfilter;
    }
    if(value_path == "sa-num-nbrs-up")
    {
        sa_num_nbrs_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-intf")
    {
        sa_num_intf.yfilter = yfilter;
    }
    if(value_path == "sa-num-intf-up")
    {
        sa_num_intf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-vintf-up")
    {
        sa_num_vintf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-slintf-up")
    {
        sa_num_slintf_up.yfilter = yfilter;
    }
    if(value_path == "sa-num-areas")
    {
        sa_num_areas.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-rtr")
    {
        sa_lsa_cnt_type_rtr.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-net")
    {
        sa_lsa_cnt_type_net.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-sum-net")
    {
        sa_lsa_cnt_type_sum_net.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-sum-asb")
    {
        sa_lsa_cnt_type_sum_asb.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-ase")
    {
        sa_lsa_cnt_type_ase.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-mospf")
    {
        sa_lsa_cnt_type_mospf.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-7ase")
    {
        sa_lsa_cnt_type_7ase.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-8-ignore")
    {
        sa_lsa_cnt_type_8_ignore.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-link")
    {
        sa_lsa_cnt_type_opq_link.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-area")
    {
        sa_lsa_cnt_type_opq_area.yfilter = yfilter;
    }
    if(value_path == "sa-lsa-cnt-type-opq-as")
    {
        sa_lsa_cnt_type_opq_as.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::OspfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num-nbrs" || name == "sa-num-nbrs-up" || name == "sa-num-intf" || name == "sa-num-intf-up" || name == "sa-num-vintf-up" || name == "sa-num-slintf-up" || name == "sa-num-areas" || name == "sa-lsa-cnt-type-rtr" || name == "sa-lsa-cnt-type-net" || name == "sa-lsa-cnt-type-sum-net" || name == "sa-lsa-cnt-type-sum-asb" || name == "sa-lsa-cnt-type-ase" || name == "sa-lsa-cnt-type-mospf" || name == "sa-lsa-cnt-type-7ase" || name == "sa-lsa-cnt-type-8-ignore" || name == "sa-lsa-cnt-type-opq-link" || name == "sa-lsa-cnt-type-opq-area" || name == "sa-lsa-cnt-type-opq-as")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::FastReroute()
    :
    topologies(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies>())
{
    topologies->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::~FastReroute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (topologies !=  nullptr && topologies->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (topologies !=  nullptr && topologies->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies>();
        }
        return topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topologies != nullptr)
    {
        _children["topologies"] = topologies;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topologies")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topologies()
    :
    topology(this, {})
{

    yang_name = "topologies"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::~Topologies()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::Topology()
    :
    router_id{YType::str, "router-id"},
    area_id{YType::uint32, "area-id"},
    ipfrr_topo_area_id{YType::str, "ipfrr-topo-area-id"},
    ipfrr_router_id{YType::str, "ipfrr-router-id"},
    ipfrr_area_revision{YType::uint32, "ipfrr-area-revision"}
        ,
    ipfrr_topo(this, {})
{

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::~Topology()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_topo.len(); index++)
    {
        if(ipfrr_topo[index]->has_data())
            return true;
    }
    return router_id.is_set
	|| area_id.is_set
	|| ipfrr_topo_area_id.is_set
	|| ipfrr_router_id.is_set
	|| ipfrr_area_revision.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_topo.len(); index++)
    {
        if(ipfrr_topo[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(ipfrr_topo_area_id.yfilter)
	|| ydk::is_set(ipfrr_router_id.yfilter)
	|| ydk::is_set(ipfrr_area_revision.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (ipfrr_topo_area_id.is_set || is_set(ipfrr_topo_area_id.yfilter)) leaf_name_data.push_back(ipfrr_topo_area_id.get_name_leafdata());
    if (ipfrr_router_id.is_set || is_set(ipfrr_router_id.yfilter)) leaf_name_data.push_back(ipfrr_router_id.get_name_leafdata());
    if (ipfrr_area_revision.is_set || is_set(ipfrr_area_revision.yfilter)) leaf_name_data.push_back(ipfrr_area_revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-topo")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo>();
        ent_->parent = this;
        ipfrr_topo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_topo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id = value;
        ipfrr_topo_area_id.value_namespace = name_space;
        ipfrr_topo_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id = value;
        ipfrr_router_id.value_namespace = name_space;
        ipfrr_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision = value;
        ipfrr_area_revision.value_namespace = name_space;
        ipfrr_area_revision.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-topo-area-id")
    {
        ipfrr_topo_area_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-router-id")
    {
        ipfrr_router_id.yfilter = yfilter;
    }
    if(value_path == "ipfrr-area-revision")
    {
        ipfrr_area_revision.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-topo" || name == "router-id" || name == "area-id" || name == "ipfrr-topo-area-id" || name == "ipfrr-router-id" || name == "ipfrr-area-revision")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::IpfrrTopo()
    :
    node_id{YType::str, "node-id"},
    distance{YType::uint32, "distance"},
    distance_reverse{YType::uint32, "distance-reverse"},
    type4{YType::boolean, "type4"},
    revision{YType::uint32, "revision"},
    neighbor_sourced{YType::boolean, "neighbor-sourced"},
    dr{YType::boolean, "dr"},
    poison{YType::boolean, "poison"}
{

    yang_name = "ipfrr-topo"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::~IpfrrTopo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| distance.is_set
	|| distance_reverse.is_set
	|| type4.is_set
	|| revision.is_set
	|| neighbor_sourced.is_set
	|| dr.is_set
	|| poison.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(distance_reverse.yfilter)
	|| ydk::is_set(type4.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| ydk::is_set(neighbor_sourced.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(poison.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-topo";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (distance_reverse.is_set || is_set(distance_reverse.yfilter)) leaf_name_data.push_back(distance_reverse.get_name_leafdata());
    if (type4.is_set || is_set(type4.yfilter)) leaf_name_data.push_back(type4.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());
    if (neighbor_sourced.is_set || is_set(neighbor_sourced.yfilter)) leaf_name_data.push_back(neighbor_sourced.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (poison.is_set || is_set(poison.yfilter)) leaf_name_data.push_back(poison.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance-reverse")
    {
        distance_reverse = value;
        distance_reverse.value_namespace = name_space;
        distance_reverse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type4")
    {
        type4 = value;
        type4.value_namespace = name_space;
        type4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced = value;
        neighbor_sourced.value_namespace = name_space;
        neighbor_sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poison")
    {
        poison = value;
        poison.value_namespace = name_space;
        poison.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "distance-reverse")
    {
        distance_reverse.yfilter = yfilter;
    }
    if(value_path == "type4")
    {
        type4.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
    if(value_path == "neighbor-sourced")
    {
        neighbor_sourced.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "poison")
    {
        poison.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::FastReroute::Topologies::Topology::IpfrrTopo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "distance" || name == "distance-reverse" || name == "type4" || name == "revision" || name == "neighbor-sourced" || name == "dr" || name == "poison")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Srms()
    :
    policy(std::make_shared<Ospf::Processes::Process::Srms::Policy>())
{
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::~Srms()
{
}

bool Ospf::Processes::Process::Srms::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data());
}

bool Ospf::Processes::Process::Srms::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Ospf::Processes::Process::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Ospf::Processes::Process::Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    return _children;
}

void Ospf::Processes::Process::Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>())
{
    policy_ipv4->parent = this;

    yang_name = "policy"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::~Policy()
{
}

bool Ospf::Processes::Process::Srms::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4 != nullptr)
    {
        _children["policy-ipv4"] = policy_ipv4;
    }

    return _children;
}

void Ospf::Processes::Process::Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_backup(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
    , policy_ipv4_active(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
{
    policy_ipv4_backup->parent = this;
    policy_ipv4_active->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation())
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4_backup != nullptr)
    {
        _children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    if(policy_ipv4_active != nullptr)
    {
        _children["policy-ipv4-active"] = policy_ipv4_active;
    }

    return _children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-backup" || name == "policy-ipv4-active")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
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
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
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
}

void Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::DefaultVrf()
    :
    flood_list_table(std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>())
    , segment_routing(std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting>())
    , mpls_te(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>())
    , statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>())
    , adjacency_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>())
    , route_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>())
    , interface_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>())
    , border_routers(std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>())
    , process_information(std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>())
    , areas(std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>())
    , database(std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>())
    , summary_prefixes(std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>())
    , area_statistics(std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>())
    , ospf_summary(std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>())
    , fast_reroute(std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>())
{
    flood_list_table->parent = this;
    segment_routing->parent = this;
    mpls_te->parent = this;
    statistics->parent = this;
    adjacency_information->parent = this;
    route_information->parent = this;
    interface_information->parent = this;
    border_routers->parent = this;
    process_information->parent = this;
    areas->parent = this;
    database->parent = this;
    summary_prefixes->parent = this;
    area_statistics->parent = this;
    ospf_summary->parent = this;
    fast_reroute->parent = this;

    yang_name = "default-vrf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::~DefaultVrf()
{
}

bool Ospf::Processes::Process::DefaultVrf::has_data() const
{
    if (is_presence_container) return true;
    return (flood_list_table !=  nullptr && flood_list_table->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (mpls_te !=  nullptr && mpls_te->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (adjacency_information !=  nullptr && adjacency_information->has_data())
	|| (route_information !=  nullptr && route_information->has_data())
	|| (interface_information !=  nullptr && interface_information->has_data())
	|| (border_routers !=  nullptr && border_routers->has_data())
	|| (process_information !=  nullptr && process_information->has_data())
	|| (areas !=  nullptr && areas->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (area_statistics !=  nullptr && area_statistics->has_data())
	|| (ospf_summary !=  nullptr && ospf_summary->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::has_operation() const
{
    return is_set(yfilter)
	|| (flood_list_table !=  nullptr && flood_list_table->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (mpls_te !=  nullptr && mpls_te->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (adjacency_information !=  nullptr && adjacency_information->has_operation())
	|| (route_information !=  nullptr && route_information->has_operation())
	|| (interface_information !=  nullptr && interface_information->has_operation())
	|| (border_routers !=  nullptr && border_routers->has_operation())
	|| (process_information !=  nullptr && process_information->has_operation())
	|| (areas !=  nullptr && areas->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (area_statistics !=  nullptr && area_statistics->has_operation())
	|| (ospf_summary !=  nullptr && ospf_summary->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood-list-table")
    {
        if(flood_list_table == nullptr)
        {
            flood_list_table = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable>();
        }
        return flood_list_table;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "mpls-te")
    {
        if(mpls_te == nullptr)
        {
            mpls_te = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe>();
        }
        return mpls_te;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "adjacency-information")
    {
        if(adjacency_information == nullptr)
        {
            adjacency_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::AdjacencyInformation>();
        }
        return adjacency_information;
    }

    if(child_yang_name == "route-information")
    {
        if(route_information == nullptr)
        {
            route_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::RouteInformation>();
        }
        return route_information;
    }

    if(child_yang_name == "interface-information")
    {
        if(interface_information == nullptr)
        {
            interface_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::InterfaceInformation>();
        }
        return interface_information;
    }

    if(child_yang_name == "border-routers")
    {
        if(border_routers == nullptr)
        {
            border_routers = std::make_shared<Ospf::Processes::Process::DefaultVrf::BorderRouters>();
        }
        return border_routers;
    }

    if(child_yang_name == "process-information")
    {
        if(process_information == nullptr)
        {
            process_information = std::make_shared<Ospf::Processes::Process::DefaultVrf::ProcessInformation>();
        }
        return process_information;
    }

    if(child_yang_name == "areas")
    {
        if(areas == nullptr)
        {
            areas = std::make_shared<Ospf::Processes::Process::DefaultVrf::Areas>();
        }
        return areas;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Ospf::Processes::Process::DefaultVrf::Database>();
        }
        return database;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Ospf::Processes::Process::DefaultVrf::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<Ospf::Processes::Process::DefaultVrf::AreaStatistics>();
        }
        return area_statistics;
    }

    if(child_yang_name == "ospf-summary")
    {
        if(ospf_summary == nullptr)
        {
            ospf_summary = std::make_shared<Ospf::Processes::Process::DefaultVrf::OspfSummary>();
        }
        return ospf_summary;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospf::Processes::Process::DefaultVrf::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flood_list_table != nullptr)
    {
        _children["flood-list-table"] = flood_list_table;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(mpls_te != nullptr)
    {
        _children["mpls-te"] = mpls_te;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(adjacency_information != nullptr)
    {
        _children["adjacency-information"] = adjacency_information;
    }

    if(route_information != nullptr)
    {
        _children["route-information"] = route_information;
    }

    if(interface_information != nullptr)
    {
        _children["interface-information"] = interface_information;
    }

    if(border_routers != nullptr)
    {
        _children["border-routers"] = border_routers;
    }

    if(process_information != nullptr)
    {
        _children["process-information"] = process_information;
    }

    if(areas != nullptr)
    {
        _children["areas"] = areas;
    }

    if(database != nullptr)
    {
        _children["database"] = database;
    }

    if(summary_prefixes != nullptr)
    {
        _children["summary-prefixes"] = summary_prefixes;
    }

    if(area_statistics != nullptr)
    {
        _children["area-statistics"] = area_statistics;
    }

    if(ospf_summary != nullptr)
    {
        _children["ospf-summary"] = ospf_summary;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood-list-table" || name == "segment-routing" || name == "mpls-te" || name == "statistics" || name == "adjacency-information" || name == "route-information" || name == "interface-information" || name == "border-routers" || name == "process-information" || name == "areas" || name == "database" || name == "summary-prefixes" || name == "area-statistics" || name == "ospf-summary" || name == "fast-reroute")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::FloodListTable()
    :
    flood(this, {"interface_name"})
{

    yang_name = "flood-list-table"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::~FloodListTable()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flood.len(); index++)
    {
        if(flood[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_operation() const
{
    for (std::size_t index=0; index<flood.len(); index++)
    {
        if(flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-list-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood>();
        ent_->parent = this;
        flood.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flood.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::Flood()
    :
    interface_name{YType::str, "interface-name"},
    flood_interface_name{YType::str, "flood-interface-name"},
    flood_pacing_timer{YType::uint32, "flood-pacing-timer"},
    flood_lsa_count{YType::uint32, "flood-lsa-count"}
        ,
    area_flood(this, {})
    , as_flood(this, {})
{

    yang_name = "flood"; yang_parent_name = "flood-list-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::~Flood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area_flood.len(); index++)
    {
        if(area_flood[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<as_flood.len(); index++)
    {
        if(as_flood[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flood_interface_name.is_set
	|| flood_pacing_timer.is_set
	|| flood_lsa_count.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_operation() const
{
    for (std::size_t index=0; index<area_flood.len(); index++)
    {
        if(area_flood[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<as_flood.len(); index++)
    {
        if(as_flood[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(flood_interface_name.yfilter)
	|| ydk::is_set(flood_pacing_timer.yfilter)
	|| ydk::is_set(flood_lsa_count.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flood_interface_name.is_set || is_set(flood_interface_name.yfilter)) leaf_name_data.push_back(flood_interface_name.get_name_leafdata());
    if (flood_pacing_timer.is_set || is_set(flood_pacing_timer.yfilter)) leaf_name_data.push_back(flood_pacing_timer.get_name_leafdata());
    if (flood_lsa_count.is_set || is_set(flood_lsa_count.yfilter)) leaf_name_data.push_back(flood_lsa_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-flood")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood>();
        ent_->parent = this;
        area_flood.append(ent_);
        return ent_;
    }

    if(child_yang_name == "as-flood")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood>();
        ent_->parent = this;
        as_flood.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : area_flood.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : as_flood.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name = value;
        flood_interface_name.value_namespace = name_space;
        flood_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer = value;
        flood_pacing_timer.value_namespace = name_space;
        flood_pacing_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count = value;
        flood_lsa_count.value_namespace = name_space;
        flood_lsa_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-interface-name")
    {
        flood_interface_name.yfilter = yfilter;
    }
    if(value_path == "flood-pacing-timer")
    {
        flood_pacing_timer.yfilter = yfilter;
    }
    if(value_path == "flood-lsa-count")
    {
        flood_lsa_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-flood" || name == "as-flood" || name == "interface-name" || name == "flood-interface-name" || name == "flood-pacing-timer" || name == "flood-lsa-count")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::AreaFlood()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "area-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::~AreaFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_data() const
{
    if (is_presence_container) return true;
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-flood";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AreaFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::AsFlood()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "as-flood"; yang_parent_name = "flood"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::~AsFlood()
{
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_data() const
{
    if (is_presence_container) return true;
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-flood";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::FloodListTable::Flood::AsFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SegmentRouting()
    :
    sr_endpoint_policies(std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies>())
{
    sr_endpoint_policies->parent = this;

    yang_name = "segment-routing"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::~SegmentRouting()
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::has_data() const
{
    if (is_presence_container) return true;
    return (sr_endpoint_policies !=  nullptr && sr_endpoint_policies->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (sr_endpoint_policies !=  nullptr && sr_endpoint_policies->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-endpoint-policies")
    {
        if(sr_endpoint_policies == nullptr)
        {
            sr_endpoint_policies = std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies>();
        }
        return sr_endpoint_policies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_endpoint_policies != nullptr)
    {
        _children["sr-endpoint-policies"] = sr_endpoint_policies;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-endpoint-policies")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicies()
    :
    sr_endpoint_policy(this, {"endpoint_ip"})
{

    yang_name = "sr-endpoint-policies"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::~SrEndpointPolicies()
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_endpoint_policy.len(); index++)
    {
        if(sr_endpoint_policy[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::has_operation() const
{
    for (std::size_t index=0; index<sr_endpoint_policy.len(); index++)
    {
        if(sr_endpoint_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-endpoint-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-endpoint-policy")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy>();
        ent_->parent = this;
        sr_endpoint_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_endpoint_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-endpoint-policy")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrEndpointPolicy()
    :
    endpoint_ip{YType::str, "endpoint-ip"},
    sr_endpoint{YType::str, "sr-endpoint"},
    sr_router_id{YType::uint32, "sr-router-id"},
    sr_area_id_string{YType::str, "sr-area-id-string"},
    sr_policy_count{YType::uint32, "sr-policy-count"},
    sr_valid_policy_count{YType::uint32, "sr-valid-policy-count"},
    sr_endp_state_is_valid{YType::boolean, "sr-endp-state-is-valid"},
    sr_endp_state_is_stale{YType::boolean, "sr-endp-state-is-stale"},
    sr_endp_state_is_unres{YType::boolean, "sr-endp-state-is-unres"},
    sr_endp_resolution_fail_reason{YType::enumeration, "sr-endp-resolution-fail-reason"}
        ,
    sr_policy(this, {})
{

    yang_name = "sr-endpoint-policy"; yang_parent_name = "sr-endpoint-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::~SrEndpointPolicy()
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_policy.len(); index++)
    {
        if(sr_policy[index]->has_data())
            return true;
    }
    return endpoint_ip.is_set
	|| sr_endpoint.is_set
	|| sr_router_id.is_set
	|| sr_area_id_string.is_set
	|| sr_policy_count.is_set
	|| sr_valid_policy_count.is_set
	|| sr_endp_state_is_valid.is_set
	|| sr_endp_state_is_stale.is_set
	|| sr_endp_state_is_unres.is_set
	|| sr_endp_resolution_fail_reason.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::has_operation() const
{
    for (std::size_t index=0; index<sr_policy.len(); index++)
    {
        if(sr_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(endpoint_ip.yfilter)
	|| ydk::is_set(sr_endpoint.yfilter)
	|| ydk::is_set(sr_router_id.yfilter)
	|| ydk::is_set(sr_area_id_string.yfilter)
	|| ydk::is_set(sr_policy_count.yfilter)
	|| ydk::is_set(sr_valid_policy_count.yfilter)
	|| ydk::is_set(sr_endp_state_is_valid.yfilter)
	|| ydk::is_set(sr_endp_state_is_stale.yfilter)
	|| ydk::is_set(sr_endp_state_is_unres.yfilter)
	|| ydk::is_set(sr_endp_resolution_fail_reason.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-endpoint-policy";
    ADD_KEY_TOKEN(endpoint_ip, "endpoint-ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (endpoint_ip.is_set || is_set(endpoint_ip.yfilter)) leaf_name_data.push_back(endpoint_ip.get_name_leafdata());
    if (sr_endpoint.is_set || is_set(sr_endpoint.yfilter)) leaf_name_data.push_back(sr_endpoint.get_name_leafdata());
    if (sr_router_id.is_set || is_set(sr_router_id.yfilter)) leaf_name_data.push_back(sr_router_id.get_name_leafdata());
    if (sr_area_id_string.is_set || is_set(sr_area_id_string.yfilter)) leaf_name_data.push_back(sr_area_id_string.get_name_leafdata());
    if (sr_policy_count.is_set || is_set(sr_policy_count.yfilter)) leaf_name_data.push_back(sr_policy_count.get_name_leafdata());
    if (sr_valid_policy_count.is_set || is_set(sr_valid_policy_count.yfilter)) leaf_name_data.push_back(sr_valid_policy_count.get_name_leafdata());
    if (sr_endp_state_is_valid.is_set || is_set(sr_endp_state_is_valid.yfilter)) leaf_name_data.push_back(sr_endp_state_is_valid.get_name_leafdata());
    if (sr_endp_state_is_stale.is_set || is_set(sr_endp_state_is_stale.yfilter)) leaf_name_data.push_back(sr_endp_state_is_stale.get_name_leafdata());
    if (sr_endp_state_is_unres.is_set || is_set(sr_endp_state_is_unres.yfilter)) leaf_name_data.push_back(sr_endp_state_is_unres.get_name_leafdata());
    if (sr_endp_resolution_fail_reason.is_set || is_set(sr_endp_resolution_fail_reason.yfilter)) leaf_name_data.push_back(sr_endp_resolution_fail_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy>();
        ent_->parent = this;
        sr_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "endpoint-ip")
    {
        endpoint_ip = value;
        endpoint_ip.value_namespace = name_space;
        endpoint_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-endpoint")
    {
        sr_endpoint = value;
        sr_endpoint.value_namespace = name_space;
        sr_endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-router-id")
    {
        sr_router_id = value;
        sr_router_id.value_namespace = name_space;
        sr_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-area-id-string")
    {
        sr_area_id_string = value;
        sr_area_id_string.value_namespace = name_space;
        sr_area_id_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-count")
    {
        sr_policy_count = value;
        sr_policy_count.value_namespace = name_space;
        sr_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-valid-policy-count")
    {
        sr_valid_policy_count = value;
        sr_valid_policy_count.value_namespace = name_space;
        sr_valid_policy_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-endp-state-is-valid")
    {
        sr_endp_state_is_valid = value;
        sr_endp_state_is_valid.value_namespace = name_space;
        sr_endp_state_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-endp-state-is-stale")
    {
        sr_endp_state_is_stale = value;
        sr_endp_state_is_stale.value_namespace = name_space;
        sr_endp_state_is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-endp-state-is-unres")
    {
        sr_endp_state_is_unres = value;
        sr_endp_state_is_unres.value_namespace = name_space;
        sr_endp_state_is_unres.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-endp-resolution-fail-reason")
    {
        sr_endp_resolution_fail_reason = value;
        sr_endp_resolution_fail_reason.value_namespace = name_space;
        sr_endp_resolution_fail_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "endpoint-ip")
    {
        endpoint_ip.yfilter = yfilter;
    }
    if(value_path == "sr-endpoint")
    {
        sr_endpoint.yfilter = yfilter;
    }
    if(value_path == "sr-router-id")
    {
        sr_router_id.yfilter = yfilter;
    }
    if(value_path == "sr-area-id-string")
    {
        sr_area_id_string.yfilter = yfilter;
    }
    if(value_path == "sr-policy-count")
    {
        sr_policy_count.yfilter = yfilter;
    }
    if(value_path == "sr-valid-policy-count")
    {
        sr_valid_policy_count.yfilter = yfilter;
    }
    if(value_path == "sr-endp-state-is-valid")
    {
        sr_endp_state_is_valid.yfilter = yfilter;
    }
    if(value_path == "sr-endp-state-is-stale")
    {
        sr_endp_state_is_stale.yfilter = yfilter;
    }
    if(value_path == "sr-endp-state-is-unres")
    {
        sr_endp_state_is_unres.yfilter = yfilter;
    }
    if(value_path == "sr-endp-resolution-fail-reason")
    {
        sr_endp_resolution_fail_reason.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy" || name == "endpoint-ip" || name == "sr-endpoint" || name == "sr-router-id" || name == "sr-area-id-string" || name == "sr-policy-count" || name == "sr-valid-policy-count" || name == "sr-endp-state-is-valid" || name == "sr-endp-state-is-stale" || name == "sr-endp-state-is-unres" || name == "sr-endp-resolution-fail-reason")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::SrPolicy()
    :
    policy_name{YType::str, "policy-name"},
    policy_if_handle{YType::str, "policy-if-handle"},
    policy_metric{YType::int32, "policy-metric"},
    policy_metric_mode{YType::enumeration, "policy-metric-mode"},
    policy_is_sspf{YType::boolean, "policy-is-sspf"},
    policy_is_autoroute_include{YType::boolean, "policy-is-autoroute-include"},
    policy_state_is_valid{YType::boolean, "policy-state-is-valid"},
    policy_state_is_stale{YType::boolean, "policy-state-is-stale"},
    policy_state_is_ifh_error{YType::boolean, "policy-state-is-ifh-error"},
    policy_state_is_idb_pending{YType::boolean, "policy-state-is-idb-pending"},
    policy_update_timestamp{YType::uint32, "policy-update-timestamp"}
{

    yang_name = "sr-policy"; yang_parent_name = "sr-endpoint-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::~SrPolicy()
{
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| policy_if_handle.is_set
	|| policy_metric.is_set
	|| policy_metric_mode.is_set
	|| policy_is_sspf.is_set
	|| policy_is_autoroute_include.is_set
	|| policy_state_is_valid.is_set
	|| policy_state_is_stale.is_set
	|| policy_state_is_ifh_error.is_set
	|| policy_state_is_idb_pending.is_set
	|| policy_update_timestamp.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(policy_if_handle.yfilter)
	|| ydk::is_set(policy_metric.yfilter)
	|| ydk::is_set(policy_metric_mode.yfilter)
	|| ydk::is_set(policy_is_sspf.yfilter)
	|| ydk::is_set(policy_is_autoroute_include.yfilter)
	|| ydk::is_set(policy_state_is_valid.yfilter)
	|| ydk::is_set(policy_state_is_stale.yfilter)
	|| ydk::is_set(policy_state_is_ifh_error.yfilter)
	|| ydk::is_set(policy_state_is_idb_pending.yfilter)
	|| ydk::is_set(policy_update_timestamp.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (policy_if_handle.is_set || is_set(policy_if_handle.yfilter)) leaf_name_data.push_back(policy_if_handle.get_name_leafdata());
    if (policy_metric.is_set || is_set(policy_metric.yfilter)) leaf_name_data.push_back(policy_metric.get_name_leafdata());
    if (policy_metric_mode.is_set || is_set(policy_metric_mode.yfilter)) leaf_name_data.push_back(policy_metric_mode.get_name_leafdata());
    if (policy_is_sspf.is_set || is_set(policy_is_sspf.yfilter)) leaf_name_data.push_back(policy_is_sspf.get_name_leafdata());
    if (policy_is_autoroute_include.is_set || is_set(policy_is_autoroute_include.yfilter)) leaf_name_data.push_back(policy_is_autoroute_include.get_name_leafdata());
    if (policy_state_is_valid.is_set || is_set(policy_state_is_valid.yfilter)) leaf_name_data.push_back(policy_state_is_valid.get_name_leafdata());
    if (policy_state_is_stale.is_set || is_set(policy_state_is_stale.yfilter)) leaf_name_data.push_back(policy_state_is_stale.get_name_leafdata());
    if (policy_state_is_ifh_error.is_set || is_set(policy_state_is_ifh_error.yfilter)) leaf_name_data.push_back(policy_state_is_ifh_error.get_name_leafdata());
    if (policy_state_is_idb_pending.is_set || is_set(policy_state_is_idb_pending.yfilter)) leaf_name_data.push_back(policy_state_is_idb_pending.get_name_leafdata());
    if (policy_update_timestamp.is_set || is_set(policy_update_timestamp.yfilter)) leaf_name_data.push_back(policy_update_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-if-handle")
    {
        policy_if_handle = value;
        policy_if_handle.value_namespace = name_space;
        policy_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-metric")
    {
        policy_metric = value;
        policy_metric.value_namespace = name_space;
        policy_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-metric-mode")
    {
        policy_metric_mode = value;
        policy_metric_mode.value_namespace = name_space;
        policy_metric_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-is-sspf")
    {
        policy_is_sspf = value;
        policy_is_sspf.value_namespace = name_space;
        policy_is_sspf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-is-autoroute-include")
    {
        policy_is_autoroute_include = value;
        policy_is_autoroute_include.value_namespace = name_space;
        policy_is_autoroute_include.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-state-is-valid")
    {
        policy_state_is_valid = value;
        policy_state_is_valid.value_namespace = name_space;
        policy_state_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-state-is-stale")
    {
        policy_state_is_stale = value;
        policy_state_is_stale.value_namespace = name_space;
        policy_state_is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-state-is-ifh-error")
    {
        policy_state_is_ifh_error = value;
        policy_state_is_ifh_error.value_namespace = name_space;
        policy_state_is_ifh_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-state-is-idb-pending")
    {
        policy_state_is_idb_pending = value;
        policy_state_is_idb_pending.value_namespace = name_space;
        policy_state_is_idb_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-update-timestamp")
    {
        policy_update_timestamp = value;
        policy_update_timestamp.value_namespace = name_space;
        policy_update_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "policy-if-handle")
    {
        policy_if_handle.yfilter = yfilter;
    }
    if(value_path == "policy-metric")
    {
        policy_metric.yfilter = yfilter;
    }
    if(value_path == "policy-metric-mode")
    {
        policy_metric_mode.yfilter = yfilter;
    }
    if(value_path == "policy-is-sspf")
    {
        policy_is_sspf.yfilter = yfilter;
    }
    if(value_path == "policy-is-autoroute-include")
    {
        policy_is_autoroute_include.yfilter = yfilter;
    }
    if(value_path == "policy-state-is-valid")
    {
        policy_state_is_valid.yfilter = yfilter;
    }
    if(value_path == "policy-state-is-stale")
    {
        policy_state_is_stale.yfilter = yfilter;
    }
    if(value_path == "policy-state-is-ifh-error")
    {
        policy_state_is_ifh_error.yfilter = yfilter;
    }
    if(value_path == "policy-state-is-idb-pending")
    {
        policy_state_is_idb_pending.yfilter = yfilter;
    }
    if(value_path == "policy-update-timestamp")
    {
        policy_update_timestamp.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::SegmentRouting::SrEndpointPolicies::SrEndpointPolicy::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "policy-if-handle" || name == "policy-metric" || name == "policy-metric-mode" || name == "policy-is-sspf" || name == "policy-is-autoroute-include" || name == "policy-state-is-valid" || name == "policy-state-is-stale" || name == "policy-state-is-ifh-error" || name == "policy-state-is-idb-pending" || name == "policy-update-timestamp")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTe()
    :
    mpls_te_links(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>())
    , mpls_te_fragments(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>())
{
    mpls_te_links->parent = this;
    mpls_te_fragments->parent = this;

    yang_name = "mpls-te"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::MplsTe::~MplsTe()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_data() const
{
    if (is_presence_container) return true;
    return (mpls_te_links !=  nullptr && mpls_te_links->has_data())
	|| (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_te_links !=  nullptr && mpls_te_links->has_operation())
	|| (mpls_te_fragments !=  nullptr && mpls_te_fragments->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-links")
    {
        if(mpls_te_links == nullptr)
        {
            mpls_te_links = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks>();
        }
        return mpls_te_links;
    }

    if(child_yang_name == "mpls-te-fragments")
    {
        if(mpls_te_fragments == nullptr)
        {
            mpls_te_fragments = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeFragments>();
        }
        return mpls_te_fragments;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_te_links != nullptr)
    {
        _children["mpls-te-links"] = mpls_te_links;
    }

    if(mpls_te_fragments != nullptr)
    {
        _children["mpls-te-fragments"] = mpls_te_fragments;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-links" || name == "mpls-te-fragments")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLinks()
    :
    mpls_te_link(this, {"area_id"})
{

    yang_name = "mpls-te-links"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::~MplsTeLinks()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpls_te_link.len(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.len(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink>();
        ent_->parent = this;
        mpls_te_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpls_te_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink()
    :
    area_id{YType::uint32, "area-id"},
    mpls_te_router_id{YType::str, "mpls-te-router-id"},
    mpls_te_enabled{YType::boolean, "mpls-te-enabled"},
    mpls_te_initialized{YType::boolean, "mpls-te-initialized"},
    mpls_te_area_id{YType::str, "mpls-te-area-id"},
    mpls_te_area_instance{YType::uint32, "mpls-te-area-instance"},
    mpls_te_router_address{YType::str, "mpls-te-router-address"},
    mpls_te_next_fragment_id{YType::uint32, "mpls-te-next-fragment-id"},
    spacious_fragment{YType::boolean, "spacious-fragment"}
        ,
    mpls_te_link(this, {})
    , mpls_te_fragment(this, {})
{

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-links"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::~MplsTeLink()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mpls_te_link.len(); index++)
    {
        if(mpls_te_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_fragment.len(); index++)
    {
        if(mpls_te_fragment[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| mpls_te_router_id.is_set
	|| mpls_te_enabled.is_set
	|| mpls_te_initialized.is_set
	|| mpls_te_area_id.is_set
	|| mpls_te_area_instance.is_set
	|| mpls_te_router_address.is_set
	|| mpls_te_next_fragment_id.is_set
	|| spacious_fragment.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_operation() const
{
    for (std::size_t index=0; index<mpls_te_link.len(); index++)
    {
        if(mpls_te_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mpls_te_fragment.len(); index++)
    {
        if(mpls_te_fragment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(mpls_te_router_id.yfilter)
	|| ydk::is_set(mpls_te_enabled.yfilter)
	|| ydk::is_set(mpls_te_initialized.yfilter)
	|| ydk::is_set(mpls_te_area_id.yfilter)
	|| ydk::is_set(mpls_te_area_instance.yfilter)
	|| ydk::is_set(mpls_te_router_address.yfilter)
	|| ydk::is_set(mpls_te_next_fragment_id.yfilter)
	|| ydk::is_set(spacious_fragment.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    ADD_KEY_TOKEN(area_id, "area-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (mpls_te_router_id.is_set || is_set(mpls_te_router_id.yfilter)) leaf_name_data.push_back(mpls_te_router_id.get_name_leafdata());
    if (mpls_te_enabled.is_set || is_set(mpls_te_enabled.yfilter)) leaf_name_data.push_back(mpls_te_enabled.get_name_leafdata());
    if (mpls_te_initialized.is_set || is_set(mpls_te_initialized.yfilter)) leaf_name_data.push_back(mpls_te_initialized.get_name_leafdata());
    if (mpls_te_area_id.is_set || is_set(mpls_te_area_id.yfilter)) leaf_name_data.push_back(mpls_te_area_id.get_name_leafdata());
    if (mpls_te_area_instance.is_set || is_set(mpls_te_area_instance.yfilter)) leaf_name_data.push_back(mpls_te_area_instance.get_name_leafdata());
    if (mpls_te_router_address.is_set || is_set(mpls_te_router_address.yfilter)) leaf_name_data.push_back(mpls_te_router_address.get_name_leafdata());
    if (mpls_te_next_fragment_id.is_set || is_set(mpls_te_next_fragment_id.yfilter)) leaf_name_data.push_back(mpls_te_next_fragment_id.get_name_leafdata());
    if (spacious_fragment.is_set || is_set(spacious_fragment.yfilter)) leaf_name_data.push_back(spacious_fragment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-link")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_>();
        ent_->parent = this;
        mpls_te_link.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls-te-fragment")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeFragment>();
        ent_->parent = this;
        mpls_te_fragment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mpls_te_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mpls_te_fragment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id = value;
        mpls_te_router_id.value_namespace = name_space;
        mpls_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled = value;
        mpls_te_enabled.value_namespace = name_space;
        mpls_te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized = value;
        mpls_te_initialized.value_namespace = name_space;
        mpls_te_initialized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id = value;
        mpls_te_area_id.value_namespace = name_space;
        mpls_te_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance = value;
        mpls_te_area_instance.value_namespace = name_space;
        mpls_te_area_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address = value;
        mpls_te_router_address.value_namespace = name_space;
        mpls_te_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id = value;
        mpls_te_next_fragment_id.value_namespace = name_space;
        mpls_te_next_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment = value;
        spacious_fragment.value_namespace = name_space;
        spacious_fragment.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-id")
    {
        mpls_te_router_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-enabled")
    {
        mpls_te_enabled.yfilter = yfilter;
    }
    if(value_path == "mpls-te-initialized")
    {
        mpls_te_initialized.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-id")
    {
        mpls_te_area_id.yfilter = yfilter;
    }
    if(value_path == "mpls-te-area-instance")
    {
        mpls_te_area_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-te-router-address")
    {
        mpls_te_router_address.yfilter = yfilter;
    }
    if(value_path == "mpls-te-next-fragment-id")
    {
        mpls_te_next_fragment_id.yfilter = yfilter;
    }
    if(value_path == "spacious-fragment")
    {
        spacious_fragment.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-link" || name == "mpls-te-fragment" || name == "area-id" || name == "mpls-te-router-id" || name == "mpls-te-enabled" || name == "mpls-te-initialized" || name == "mpls-te-area-id" || name == "mpls-te-area-instance" || name == "mpls-te-router-address" || name == "mpls-te-next-fragment-id" || name == "spacious-fragment")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsTeLink_()
    :
    new_link{YType::boolean, "new-link"},
    fragment_id{YType::uint32, "fragment-id"},
    mpls_link_instance{YType::uint32, "mpls-link-instance"},
    mpls_link_type{YType::enumeration, "mpls-link-type"},
    neighbor_system_id{YType::str, "neighbor-system-id"},
    link_address{YType::str, "link-address"},
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bw{YType::uint32, "maximum-link-bw"},
    maximum_link_reservable_bw{YType::uint32, "maximum-link-reservable-bw"},
    maximum_link_sub_reservable_bw{YType::uint32, "maximum-link-sub-reservable-bw"},
    priority_count{YType::int32, "priority-count"},
    affinity{YType::uint32, "affinity"},
    output_interface_id{YType::uint32, "output-interface-id"},
    input_interface_id{YType::uint32, "input-interface-id"},
    dste_in_use{YType::boolean, "dste-in-use"},
    dste_allocation_model_id{YType::enumeration, "dste-allocation-model-id"},
    number_of_optional_tl_vs{YType::uint8, "number-of-optional-tl-vs"}
        ,
    global_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>())
    , sub_pool_unreserve_bw_per_priority(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>())
    , link_protocol_priority_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>())
    , link_sw_capability(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>())
    , extended_admin_group_list(std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>())
    , mplste_link_opt_tlv(this, {})
{
    global_unreserve_bw_per_priority->parent = this;
    sub_pool_unreserve_bw_per_priority->parent = this;
    link_protocol_priority_capability->parent = this;
    link_sw_capability->parent = this;
    extended_admin_group_list->parent = this;

    yang_name = "mpls-te-link"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::~MplsTeLink_()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplste_link_opt_tlv.len(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_data())
            return true;
    }
    return new_link.is_set
	|| fragment_id.is_set
	|| mpls_link_instance.is_set
	|| mpls_link_type.is_set
	|| neighbor_system_id.is_set
	|| link_address.is_set
	|| neighbor_ip_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bw.is_set
	|| maximum_link_reservable_bw.is_set
	|| maximum_link_sub_reservable_bw.is_set
	|| priority_count.is_set
	|| affinity.is_set
	|| output_interface_id.is_set
	|| input_interface_id.is_set
	|| dste_in_use.is_set
	|| dste_allocation_model_id.is_set
	|| number_of_optional_tl_vs.is_set
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_data())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_data())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_data())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_data())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_data());
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_operation() const
{
    for (std::size_t index=0; index<mplste_link_opt_tlv.len(); index++)
    {
        if(mplste_link_opt_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(new_link.yfilter)
	|| ydk::is_set(fragment_id.yfilter)
	|| ydk::is_set(mpls_link_instance.yfilter)
	|| ydk::is_set(mpls_link_type.yfilter)
	|| ydk::is_set(neighbor_system_id.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bw.yfilter)
	|| ydk::is_set(maximum_link_reservable_bw.yfilter)
	|| ydk::is_set(maximum_link_sub_reservable_bw.yfilter)
	|| ydk::is_set(priority_count.yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(output_interface_id.yfilter)
	|| ydk::is_set(input_interface_id.yfilter)
	|| ydk::is_set(dste_in_use.yfilter)
	|| ydk::is_set(dste_allocation_model_id.yfilter)
	|| ydk::is_set(number_of_optional_tl_vs.yfilter)
	|| (global_unreserve_bw_per_priority !=  nullptr && global_unreserve_bw_per_priority->has_operation())
	|| (sub_pool_unreserve_bw_per_priority !=  nullptr && sub_pool_unreserve_bw_per_priority->has_operation())
	|| (link_protocol_priority_capability !=  nullptr && link_protocol_priority_capability->has_operation())
	|| (link_sw_capability !=  nullptr && link_sw_capability->has_operation())
	|| (extended_admin_group_list !=  nullptr && extended_admin_group_list->has_operation());
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_link.is_set || is_set(new_link.yfilter)) leaf_name_data.push_back(new_link.get_name_leafdata());
    if (fragment_id.is_set || is_set(fragment_id.yfilter)) leaf_name_data.push_back(fragment_id.get_name_leafdata());
    if (mpls_link_instance.is_set || is_set(mpls_link_instance.yfilter)) leaf_name_data.push_back(mpls_link_instance.get_name_leafdata());
    if (mpls_link_type.is_set || is_set(mpls_link_type.yfilter)) leaf_name_data.push_back(mpls_link_type.get_name_leafdata());
    if (neighbor_system_id.is_set || is_set(neighbor_system_id.yfilter)) leaf_name_data.push_back(neighbor_system_id.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bw.is_set || is_set(maximum_link_bw.yfilter)) leaf_name_data.push_back(maximum_link_bw.get_name_leafdata());
    if (maximum_link_reservable_bw.is_set || is_set(maximum_link_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_reservable_bw.get_name_leafdata());
    if (maximum_link_sub_reservable_bw.is_set || is_set(maximum_link_sub_reservable_bw.yfilter)) leaf_name_data.push_back(maximum_link_sub_reservable_bw.get_name_leafdata());
    if (priority_count.is_set || is_set(priority_count.yfilter)) leaf_name_data.push_back(priority_count.get_name_leafdata());
    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (output_interface_id.is_set || is_set(output_interface_id.yfilter)) leaf_name_data.push_back(output_interface_id.get_name_leafdata());
    if (input_interface_id.is_set || is_set(input_interface_id.yfilter)) leaf_name_data.push_back(input_interface_id.get_name_leafdata());
    if (dste_in_use.is_set || is_set(dste_in_use.yfilter)) leaf_name_data.push_back(dste_in_use.get_name_leafdata());
    if (dste_allocation_model_id.is_set || is_set(dste_allocation_model_id.yfilter)) leaf_name_data.push_back(dste_allocation_model_id.get_name_leafdata());
    if (number_of_optional_tl_vs.is_set || is_set(number_of_optional_tl_vs.yfilter)) leaf_name_data.push_back(number_of_optional_tl_vs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-unreserve-bw-per-priority")
    {
        if(global_unreserve_bw_per_priority == nullptr)
        {
            global_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority>();
        }
        return global_unreserve_bw_per_priority;
    }

    if(child_yang_name == "sub-pool-unreserve-bw-per-priority")
    {
        if(sub_pool_unreserve_bw_per_priority == nullptr)
        {
            sub_pool_unreserve_bw_per_priority = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority>();
        }
        return sub_pool_unreserve_bw_per_priority;
    }

    if(child_yang_name == "link-protocol-priority-capability")
    {
        if(link_protocol_priority_capability == nullptr)
        {
            link_protocol_priority_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkProtocolPriorityCapability>();
        }
        return link_protocol_priority_capability;
    }

    if(child_yang_name == "link-sw-capability")
    {
        if(link_sw_capability == nullptr)
        {
            link_sw_capability = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::LinkSwCapability>();
        }
        return link_sw_capability;
    }

    if(child_yang_name == "extended-admin-group-list")
    {
        if(extended_admin_group_list == nullptr)
        {
            extended_admin_group_list = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::ExtendedAdminGroupList>();
        }
        return extended_admin_group_list;
    }

    if(child_yang_name == "mplste-link-opt-tlv")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::MplsteLinkOptTlv>();
        ent_->parent = this;
        mplste_link_opt_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global_unreserve_bw_per_priority != nullptr)
    {
        _children["global-unreserve-bw-per-priority"] = global_unreserve_bw_per_priority;
    }

    if(sub_pool_unreserve_bw_per_priority != nullptr)
    {
        _children["sub-pool-unreserve-bw-per-priority"] = sub_pool_unreserve_bw_per_priority;
    }

    if(link_protocol_priority_capability != nullptr)
    {
        _children["link-protocol-priority-capability"] = link_protocol_priority_capability;
    }

    if(link_sw_capability != nullptr)
    {
        _children["link-sw-capability"] = link_sw_capability;
    }

    if(extended_admin_group_list != nullptr)
    {
        _children["extended-admin-group-list"] = extended_admin_group_list;
    }

    count_ = 0;
    for (auto ent_ : mplste_link_opt_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-link")
    {
        new_link = value;
        new_link.value_namespace = name_space;
        new_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-id")
    {
        fragment_id = value;
        fragment_id.value_namespace = name_space;
        fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance = value;
        mpls_link_instance.value_namespace = name_space;
        mpls_link_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type = value;
        mpls_link_type.value_namespace = name_space;
        mpls_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id = value;
        neighbor_system_id.value_namespace = name_space;
        neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw = value;
        maximum_link_bw.value_namespace = name_space;
        maximum_link_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw = value;
        maximum_link_reservable_bw.value_namespace = name_space;
        maximum_link_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw = value;
        maximum_link_sub_reservable_bw.value_namespace = name_space;
        maximum_link_sub_reservable_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-count")
    {
        priority_count = value;
        priority_count.value_namespace = name_space;
        priority_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id = value;
        output_interface_id.value_namespace = name_space;
        output_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id = value;
        input_interface_id.value_namespace = name_space;
        input_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use = value;
        dste_in_use.value_namespace = name_space;
        dste_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id = value;
        dste_allocation_model_id.value_namespace = name_space;
        dste_allocation_model_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs = value;
        number_of_optional_tl_vs.value_namespace = name_space;
        number_of_optional_tl_vs.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-link")
    {
        new_link.yfilter = yfilter;
    }
    if(value_path == "fragment-id")
    {
        fragment_id.yfilter = yfilter;
    }
    if(value_path == "mpls-link-instance")
    {
        mpls_link_instance.yfilter = yfilter;
    }
    if(value_path == "mpls-link-type")
    {
        mpls_link_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-system-id")
    {
        neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bw")
    {
        maximum_link_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-reservable-bw")
    {
        maximum_link_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "maximum-link-sub-reservable-bw")
    {
        maximum_link_sub_reservable_bw.yfilter = yfilter;
    }
    if(value_path == "priority-count")
    {
        priority_count.yfilter = yfilter;
    }
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "output-interface-id")
    {
        output_interface_id.yfilter = yfilter;
    }
    if(value_path == "input-interface-id")
    {
        input_interface_id.yfilter = yfilter;
    }
    if(value_path == "dste-in-use")
    {
        dste_in_use.yfilter = yfilter;
    }
    if(value_path == "dste-allocation-model-id")
    {
        dste_allocation_model_id.yfilter = yfilter;
    }
    if(value_path == "number-of-optional-tl-vs")
    {
        number_of_optional_tl_vs.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-unreserve-bw-per-priority" || name == "sub-pool-unreserve-bw-per-priority" || name == "link-protocol-priority-capability" || name == "link-sw-capability" || name == "extended-admin-group-list" || name == "mplste-link-opt-tlv" || name == "new-link" || name == "fragment-id" || name == "mpls-link-instance" || name == "mpls-link-type" || name == "neighbor-system-id" || name == "link-address" || name == "neighbor-ip-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bw" || name == "maximum-link-reservable-bw" || name == "maximum-link-sub-reservable-bw" || name == "priority-count" || name == "affinity" || name == "output-interface-id" || name == "input-interface-id" || name == "dste-in-use" || name == "dste-allocation-model-id" || name == "number-of-optional-tl-vs")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::GlobalUnreserveBwPerPriority()
    :
    bw_per_priority(this, {})
{

    yang_name = "global-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::~GlobalUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bw_per_priority.len(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.len(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority>();
        ent_->parent = this;
        bw_per_priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bw_per_priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::BwPerPriority()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "bw-per-priority"; yang_parent_name = "global-unreserve-bw-per-priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::~BwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw-per-priority";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::GlobalUnreserveBwPerPriority::BwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::SubPoolUnreserveBwPerPriority()
    :
    bw_per_priority(this, {})
{

    yang_name = "sub-pool-unreserve-bw-per-priority"; yang_parent_name = "mpls-te-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::~SubPoolUnreserveBwPerPriority()
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bw_per_priority.len(); index++)
    {
        if(bw_per_priority[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_operation() const
{
    for (std::size_t index=0; index<bw_per_priority.len(); index++)
    {
        if(bw_per_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-unreserve-bw-per-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw-per-priority")
    {
        auto ent_ = std::make_shared<Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::BwPerPriority>();
        ent_->parent = this;
        bw_per_priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bw_per_priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::DefaultVrf::MplsTe::MplsTeLinks::MplsTeLink::MplsTeLink_::SubPoolUnreserveBwPerPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-per-priority")
        return true;
    return false;
}


}
}

