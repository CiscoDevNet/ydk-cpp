
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_MPLS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_MPLS_MIB {

CISCOIETFPWMPLSMIB::CISCOIETFPWMPLSMIB()
    :
    cpwvcmplsobjects(std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsObjects>())
    , cpwvcmplstable(std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsTable>())
    , cpwvcmplsoutboundtable(std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable>())
    , cpwvcmplsinboundtable(std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable>())
    , cpwvcmplsnontemappingtable(std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable>())
    , cpwvcmplstemappingtable(std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable>())
{
    cpwvcmplsobjects->parent = this;
    cpwvcmplstable->parent = this;
    cpwvcmplsoutboundtable->parent = this;
    cpwvcmplsinboundtable->parent = this;
    cpwvcmplsnontemappingtable->parent = this;
    cpwvcmplstemappingtable->parent = this;

    yang_name = "CISCO-IETF-PW-MPLS-MIB"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::~CISCOIETFPWMPLSMIB()
{
}

bool CISCOIETFPWMPLSMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cpwvcmplsobjects !=  nullptr && cpwvcmplsobjects->has_data())
	|| (cpwvcmplstable !=  nullptr && cpwvcmplstable->has_data())
	|| (cpwvcmplsoutboundtable !=  nullptr && cpwvcmplsoutboundtable->has_data())
	|| (cpwvcmplsinboundtable !=  nullptr && cpwvcmplsinboundtable->has_data())
	|| (cpwvcmplsnontemappingtable !=  nullptr && cpwvcmplsnontemappingtable->has_data())
	|| (cpwvcmplstemappingtable !=  nullptr && cpwvcmplstemappingtable->has_data());
}

bool CISCOIETFPWMPLSMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpwvcmplsobjects !=  nullptr && cpwvcmplsobjects->has_operation())
	|| (cpwvcmplstable !=  nullptr && cpwvcmplstable->has_operation())
	|| (cpwvcmplsoutboundtable !=  nullptr && cpwvcmplsoutboundtable->has_operation())
	|| (cpwvcmplsinboundtable !=  nullptr && cpwvcmplsinboundtable->has_operation())
	|| (cpwvcmplsnontemappingtable !=  nullptr && cpwvcmplsnontemappingtable->has_operation())
	|| (cpwvcmplstemappingtable !=  nullptr && cpwvcmplstemappingtable->has_operation());
}

std::string CISCOIETFPWMPLSMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsObjects")
    {
        if(cpwvcmplsobjects == nullptr)
        {
            cpwvcmplsobjects = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsObjects>();
        }
        return cpwvcmplsobjects;
    }

    if(child_yang_name == "cpwVcMplsTable")
    {
        if(cpwvcmplstable == nullptr)
        {
            cpwvcmplstable = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsTable>();
        }
        return cpwvcmplstable;
    }

    if(child_yang_name == "cpwVcMplsOutboundTable")
    {
        if(cpwvcmplsoutboundtable == nullptr)
        {
            cpwvcmplsoutboundtable = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable>();
        }
        return cpwvcmplsoutboundtable;
    }

    if(child_yang_name == "cpwVcMplsInboundTable")
    {
        if(cpwvcmplsinboundtable == nullptr)
        {
            cpwvcmplsinboundtable = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable>();
        }
        return cpwvcmplsinboundtable;
    }

    if(child_yang_name == "cpwVcMplsNonTeMappingTable")
    {
        if(cpwvcmplsnontemappingtable == nullptr)
        {
            cpwvcmplsnontemappingtable = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable>();
        }
        return cpwvcmplsnontemappingtable;
    }

    if(child_yang_name == "cpwVcMplsTeMappingTable")
    {
        if(cpwvcmplstemappingtable == nullptr)
        {
            cpwvcmplstemappingtable = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable>();
        }
        return cpwvcmplstemappingtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpwvcmplsobjects != nullptr)
    {
        _children["cpwVcMplsObjects"] = cpwvcmplsobjects;
    }

    if(cpwvcmplstable != nullptr)
    {
        _children["cpwVcMplsTable"] = cpwvcmplstable;
    }

    if(cpwvcmplsoutboundtable != nullptr)
    {
        _children["cpwVcMplsOutboundTable"] = cpwvcmplsoutboundtable;
    }

    if(cpwvcmplsinboundtable != nullptr)
    {
        _children["cpwVcMplsInboundTable"] = cpwvcmplsinboundtable;
    }

    if(cpwvcmplsnontemappingtable != nullptr)
    {
        _children["cpwVcMplsNonTeMappingTable"] = cpwvcmplsnontemappingtable;
    }

    if(cpwvcmplstemappingtable != nullptr)
    {
        _children["cpwVcMplsTeMappingTable"] = cpwvcmplstemappingtable;
    }

    return _children;
}

void CISCOIETFPWMPLSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMPLSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFPWMPLSMIB>();
}

std::string CISCOIETFPWMPLSMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFPWMPLSMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFPWMPLSMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFPWMPLSMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFPWMPLSMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsObjects" || name == "cpwVcMplsTable" || name == "cpwVcMplsOutboundTable" || name == "cpwVcMplsInboundTable" || name == "cpwVcMplsNonTeMappingTable" || name == "cpwVcMplsTeMappingTable")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsObjects::CpwVcMplsObjects()
    :
    cpwvcmplsoutboundindexnext{YType::uint32, "cpwVcMplsOutboundIndexNext"},
    cpwvcmplsinboundindexnext{YType::uint32, "cpwVcMplsInboundIndexNext"}
{

    yang_name = "cpwVcMplsObjects"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsObjects::~CpwVcMplsObjects()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsObjects::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcmplsoutboundindexnext.is_set
	|| cpwvcmplsinboundindexnext.is_set;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcmplsoutboundindexnext.yfilter)
	|| ydk::is_set(cpwvcmplsinboundindexnext.yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcmplsoutboundindexnext.is_set || is_set(cpwvcmplsoutboundindexnext.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundindexnext.get_name_leafdata());
    if (cpwvcmplsinboundindexnext.is_set || is_set(cpwvcmplsinboundindexnext.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcMplsOutboundIndexNext")
    {
        cpwvcmplsoutboundindexnext = value;
        cpwvcmplsoutboundindexnext.value_namespace = name_space;
        cpwvcmplsoutboundindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundIndexNext")
    {
        cpwvcmplsinboundindexnext = value;
        cpwvcmplsinboundindexnext.value_namespace = name_space;
        cpwvcmplsinboundindexnext.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMPLSMIB::CpwVcMplsObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcMplsOutboundIndexNext")
    {
        cpwvcmplsoutboundindexnext.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundIndexNext")
    {
        cpwvcmplsinboundindexnext.yfilter = yfilter;
    }
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsOutboundIndexNext" || name == "cpwVcMplsInboundIndexNext")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsTable()
    :
    cpwvcmplsentry(this, {"cpwvcindex"})
{

    yang_name = "cpwVcMplsTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsTable::~CpwVcMplsTable()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcmplsentry.len(); index++)
    {
        if(cpwvcmplsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsentry.len(); index++)
    {
        if(cpwvcmplsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry>();
        ent_->parent = this;
        cpwvcmplsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcmplsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsEntry")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::CpwVcMplsEntry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcmplsmplstype{YType::bits, "cpwVcMplsMplsType"},
    cpwvcmplsexpbitsmode{YType::enumeration, "cpwVcMplsExpBitsMode"},
    cpwvcmplsexpbits{YType::uint32, "cpwVcMplsExpBits"},
    cpwvcmplsttl{YType::uint32, "cpwVcMplsTtl"},
    cpwvcmplslocalldpid{YType::str, "cpwVcMplsLocalLdpID"},
    cpwvcmplslocalldpentityid{YType::uint32, "cpwVcMplsLocalLdpEntityID"},
    cpwvcmplspeerldpid{YType::str, "cpwVcMplsPeerLdpID"},
    cpwvcmplsstoragetype{YType::enumeration, "cpwVcMplsStorageType"}
{

    yang_name = "cpwVcMplsEntry"; yang_parent_name = "cpwVcMplsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::~CpwVcMplsEntry()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcindex.is_set
	|| cpwvcmplsmplstype.is_set
	|| cpwvcmplsexpbitsmode.is_set
	|| cpwvcmplsexpbits.is_set
	|| cpwvcmplsttl.is_set
	|| cpwvcmplslocalldpid.is_set
	|| cpwvcmplslocalldpentityid.is_set
	|| cpwvcmplspeerldpid.is_set
	|| cpwvcmplsstoragetype.is_set;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcmplsmplstype.yfilter)
	|| ydk::is_set(cpwvcmplsexpbitsmode.yfilter)
	|| ydk::is_set(cpwvcmplsexpbits.yfilter)
	|| ydk::is_set(cpwvcmplsttl.yfilter)
	|| ydk::is_set(cpwvcmplslocalldpid.yfilter)
	|| ydk::is_set(cpwvcmplslocalldpentityid.yfilter)
	|| ydk::is_set(cpwvcmplspeerldpid.yfilter)
	|| ydk::is_set(cpwvcmplsstoragetype.yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsEntry";
    ADD_KEY_TOKEN(cpwvcindex, "cpwVcIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcmplsmplstype.is_set || is_set(cpwvcmplsmplstype.yfilter)) leaf_name_data.push_back(cpwvcmplsmplstype.get_name_leafdata());
    if (cpwvcmplsexpbitsmode.is_set || is_set(cpwvcmplsexpbitsmode.yfilter)) leaf_name_data.push_back(cpwvcmplsexpbitsmode.get_name_leafdata());
    if (cpwvcmplsexpbits.is_set || is_set(cpwvcmplsexpbits.yfilter)) leaf_name_data.push_back(cpwvcmplsexpbits.get_name_leafdata());
    if (cpwvcmplsttl.is_set || is_set(cpwvcmplsttl.yfilter)) leaf_name_data.push_back(cpwvcmplsttl.get_name_leafdata());
    if (cpwvcmplslocalldpid.is_set || is_set(cpwvcmplslocalldpid.yfilter)) leaf_name_data.push_back(cpwvcmplslocalldpid.get_name_leafdata());
    if (cpwvcmplslocalldpentityid.is_set || is_set(cpwvcmplslocalldpentityid.yfilter)) leaf_name_data.push_back(cpwvcmplslocalldpentityid.get_name_leafdata());
    if (cpwvcmplspeerldpid.is_set || is_set(cpwvcmplspeerldpid.yfilter)) leaf_name_data.push_back(cpwvcmplspeerldpid.get_name_leafdata());
    if (cpwvcmplsstoragetype.is_set || is_set(cpwvcmplsstoragetype.yfilter)) leaf_name_data.push_back(cpwvcmplsstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsMplsType")
    {
        cpwvcmplsmplstype[value] = true;
    }
    if(value_path == "cpwVcMplsExpBitsMode")
    {
        cpwvcmplsexpbitsmode = value;
        cpwvcmplsexpbitsmode.value_namespace = name_space;
        cpwvcmplsexpbitsmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsExpBits")
    {
        cpwvcmplsexpbits = value;
        cpwvcmplsexpbits.value_namespace = name_space;
        cpwvcmplsexpbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsTtl")
    {
        cpwvcmplsttl = value;
        cpwvcmplsttl.value_namespace = name_space;
        cpwvcmplsttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsLocalLdpID")
    {
        cpwvcmplslocalldpid = value;
        cpwvcmplslocalldpid.value_namespace = name_space;
        cpwvcmplslocalldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsLocalLdpEntityID")
    {
        cpwvcmplslocalldpentityid = value;
        cpwvcmplslocalldpentityid.value_namespace = name_space;
        cpwvcmplslocalldpentityid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsPeerLdpID")
    {
        cpwvcmplspeerldpid = value;
        cpwvcmplspeerldpid.value_namespace = name_space;
        cpwvcmplspeerldpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsStorageType")
    {
        cpwvcmplsstoragetype = value;
        cpwvcmplsstoragetype.value_namespace = name_space;
        cpwvcmplsstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsMplsType")
    {
        cpwvcmplsmplstype.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsExpBitsMode")
    {
        cpwvcmplsexpbitsmode.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsExpBits")
    {
        cpwvcmplsexpbits.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsTtl")
    {
        cpwvcmplsttl.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsLocalLdpID")
    {
        cpwvcmplslocalldpid.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsLocalLdpEntityID")
    {
        cpwvcmplslocalldpentityid.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsPeerLdpID")
    {
        cpwvcmplspeerldpid.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsStorageType")
    {
        cpwvcmplsstoragetype.yfilter = yfilter;
    }
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcMplsMplsType" || name == "cpwVcMplsExpBitsMode" || name == "cpwVcMplsExpBits" || name == "cpwVcMplsTtl" || name == "cpwVcMplsLocalLdpID" || name == "cpwVcMplsLocalLdpEntityID" || name == "cpwVcMplsPeerLdpID" || name == "cpwVcMplsStorageType")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundTable()
    :
    cpwvcmplsoutboundentry(this, {"cpwvcindex", "cpwvcmplsoutboundindex"})
{

    yang_name = "cpwVcMplsOutboundTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::~CpwVcMplsOutboundTable()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcmplsoutboundentry.len(); index++)
    {
        if(cpwvcmplsoutboundentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsoutboundentry.len(); index++)
    {
        if(cpwvcmplsoutboundentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsOutboundTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsOutboundEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry>();
        ent_->parent = this;
        cpwvcmplsoutboundentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcmplsoutboundentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsOutboundEntry")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::CpwVcMplsOutboundEntry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcmplsoutboundindex{YType::uint32, "cpwVcMplsOutboundIndex"},
    cpwvcmplsoutboundlsrxcindex{YType::uint32, "cpwVcMplsOutboundLsrXcIndex"},
    cpwvcmplsoutboundtunnelindex{YType::uint32, "cpwVcMplsOutboundTunnelIndex"},
    cpwvcmplsoutboundtunnelinstance{YType::uint32, "cpwVcMplsOutboundTunnelInstance"},
    cpwvcmplsoutboundtunnellcllsr{YType::str, "cpwVcMplsOutboundTunnelLclLSR"},
    cpwvcmplsoutboundtunnelpeerlsr{YType::str, "cpwVcMplsOutboundTunnelPeerLSR"},
    cpwvcmplsoutboundifindex{YType::int32, "cpwVcMplsOutboundIfIndex"},
    cpwvcmplsoutboundrowstatus{YType::enumeration, "cpwVcMplsOutboundRowStatus"},
    cpwvcmplsoutboundstoragetype{YType::enumeration, "cpwVcMplsOutboundStorageType"}
{

    yang_name = "cpwVcMplsOutboundEntry"; yang_parent_name = "cpwVcMplsOutboundTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::~CpwVcMplsOutboundEntry()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcindex.is_set
	|| cpwvcmplsoutboundindex.is_set
	|| cpwvcmplsoutboundlsrxcindex.is_set
	|| cpwvcmplsoutboundtunnelindex.is_set
	|| cpwvcmplsoutboundtunnelinstance.is_set
	|| cpwvcmplsoutboundtunnellcllsr.is_set
	|| cpwvcmplsoutboundtunnelpeerlsr.is_set
	|| cpwvcmplsoutboundifindex.is_set
	|| cpwvcmplsoutboundrowstatus.is_set
	|| cpwvcmplsoutboundstoragetype.is_set;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundindex.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundlsrxcindex.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundtunnelindex.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundtunnelinstance.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundtunnellcllsr.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundtunnelpeerlsr.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundifindex.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundrowstatus.yfilter)
	|| ydk::is_set(cpwvcmplsoutboundstoragetype.yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsOutboundTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsOutboundEntry";
    ADD_KEY_TOKEN(cpwvcindex, "cpwVcIndex");
    ADD_KEY_TOKEN(cpwvcmplsoutboundindex, "cpwVcMplsOutboundIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcmplsoutboundindex.is_set || is_set(cpwvcmplsoutboundindex.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundindex.get_name_leafdata());
    if (cpwvcmplsoutboundlsrxcindex.is_set || is_set(cpwvcmplsoutboundlsrxcindex.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundlsrxcindex.get_name_leafdata());
    if (cpwvcmplsoutboundtunnelindex.is_set || is_set(cpwvcmplsoutboundtunnelindex.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundtunnelindex.get_name_leafdata());
    if (cpwvcmplsoutboundtunnelinstance.is_set || is_set(cpwvcmplsoutboundtunnelinstance.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundtunnelinstance.get_name_leafdata());
    if (cpwvcmplsoutboundtunnellcllsr.is_set || is_set(cpwvcmplsoutboundtunnellcllsr.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundtunnellcllsr.get_name_leafdata());
    if (cpwvcmplsoutboundtunnelpeerlsr.is_set || is_set(cpwvcmplsoutboundtunnelpeerlsr.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundtunnelpeerlsr.get_name_leafdata());
    if (cpwvcmplsoutboundifindex.is_set || is_set(cpwvcmplsoutboundifindex.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundifindex.get_name_leafdata());
    if (cpwvcmplsoutboundrowstatus.is_set || is_set(cpwvcmplsoutboundrowstatus.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundrowstatus.get_name_leafdata());
    if (cpwvcmplsoutboundstoragetype.is_set || is_set(cpwvcmplsoutboundstoragetype.yfilter)) leaf_name_data.push_back(cpwvcmplsoutboundstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundIndex")
    {
        cpwvcmplsoutboundindex = value;
        cpwvcmplsoutboundindex.value_namespace = name_space;
        cpwvcmplsoutboundindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundLsrXcIndex")
    {
        cpwvcmplsoutboundlsrxcindex = value;
        cpwvcmplsoutboundlsrxcindex.value_namespace = name_space;
        cpwvcmplsoutboundlsrxcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundTunnelIndex")
    {
        cpwvcmplsoutboundtunnelindex = value;
        cpwvcmplsoutboundtunnelindex.value_namespace = name_space;
        cpwvcmplsoutboundtunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundTunnelInstance")
    {
        cpwvcmplsoutboundtunnelinstance = value;
        cpwvcmplsoutboundtunnelinstance.value_namespace = name_space;
        cpwvcmplsoutboundtunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundTunnelLclLSR")
    {
        cpwvcmplsoutboundtunnellcllsr = value;
        cpwvcmplsoutboundtunnellcllsr.value_namespace = name_space;
        cpwvcmplsoutboundtunnellcllsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundTunnelPeerLSR")
    {
        cpwvcmplsoutboundtunnelpeerlsr = value;
        cpwvcmplsoutboundtunnelpeerlsr.value_namespace = name_space;
        cpwvcmplsoutboundtunnelpeerlsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundIfIndex")
    {
        cpwvcmplsoutboundifindex = value;
        cpwvcmplsoutboundifindex.value_namespace = name_space;
        cpwvcmplsoutboundifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundRowStatus")
    {
        cpwvcmplsoutboundrowstatus = value;
        cpwvcmplsoutboundrowstatus.value_namespace = name_space;
        cpwvcmplsoutboundrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsOutboundStorageType")
    {
        cpwvcmplsoutboundstoragetype = value;
        cpwvcmplsoutboundstoragetype.value_namespace = name_space;
        cpwvcmplsoutboundstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundIndex")
    {
        cpwvcmplsoutboundindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundLsrXcIndex")
    {
        cpwvcmplsoutboundlsrxcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundTunnelIndex")
    {
        cpwvcmplsoutboundtunnelindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundTunnelInstance")
    {
        cpwvcmplsoutboundtunnelinstance.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundTunnelLclLSR")
    {
        cpwvcmplsoutboundtunnellcllsr.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundTunnelPeerLSR")
    {
        cpwvcmplsoutboundtunnelpeerlsr.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundIfIndex")
    {
        cpwvcmplsoutboundifindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundRowStatus")
    {
        cpwvcmplsoutboundrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsOutboundStorageType")
    {
        cpwvcmplsoutboundstoragetype.yfilter = yfilter;
    }
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsOutboundTable::CpwVcMplsOutboundEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcMplsOutboundIndex" || name == "cpwVcMplsOutboundLsrXcIndex" || name == "cpwVcMplsOutboundTunnelIndex" || name == "cpwVcMplsOutboundTunnelInstance" || name == "cpwVcMplsOutboundTunnelLclLSR" || name == "cpwVcMplsOutboundTunnelPeerLSR" || name == "cpwVcMplsOutboundIfIndex" || name == "cpwVcMplsOutboundRowStatus" || name == "cpwVcMplsOutboundStorageType")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundTable()
    :
    cpwvcmplsinboundentry(this, {"cpwvcindex", "cpwvcmplsinboundindex"})
{

    yang_name = "cpwVcMplsInboundTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::~CpwVcMplsInboundTable()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcmplsinboundentry.len(); index++)
    {
        if(cpwvcmplsinboundentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsinboundentry.len(); index++)
    {
        if(cpwvcmplsinboundentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsInboundTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsInboundEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry>();
        ent_->parent = this;
        cpwvcmplsinboundentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcmplsinboundentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsInboundEntry")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::CpwVcMplsInboundEntry()
    :
    cpwvcindex{YType::str, "cpwVcIndex"},
    cpwvcmplsinboundindex{YType::uint32, "cpwVcMplsInboundIndex"},
    cpwvcmplsinboundlsrxcindex{YType::uint32, "cpwVcMplsInboundLsrXcIndex"},
    cpwvcmplsinboundtunnelindex{YType::uint32, "cpwVcMplsInboundTunnelIndex"},
    cpwvcmplsinboundtunnelinstance{YType::uint32, "cpwVcMplsInboundTunnelInstance"},
    cpwvcmplsinboundtunnellcllsr{YType::str, "cpwVcMplsInboundTunnelLclLSR"},
    cpwvcmplsinboundtunnelpeerlsr{YType::str, "cpwVcMplsInboundTunnelPeerLSR"},
    cpwvcmplsinboundifindex{YType::int32, "cpwVcMplsInboundIfIndex"},
    cpwvcmplsinboundrowstatus{YType::enumeration, "cpwVcMplsInboundRowStatus"},
    cpwvcmplsinboundstoragetype{YType::enumeration, "cpwVcMplsInboundStorageType"}
{

    yang_name = "cpwVcMplsInboundEntry"; yang_parent_name = "cpwVcMplsInboundTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::~CpwVcMplsInboundEntry()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcindex.is_set
	|| cpwvcmplsinboundindex.is_set
	|| cpwvcmplsinboundlsrxcindex.is_set
	|| cpwvcmplsinboundtunnelindex.is_set
	|| cpwvcmplsinboundtunnelinstance.is_set
	|| cpwvcmplsinboundtunnellcllsr.is_set
	|| cpwvcmplsinboundtunnelpeerlsr.is_set
	|| cpwvcmplsinboundifindex.is_set
	|| cpwvcmplsinboundrowstatus.is_set
	|| cpwvcmplsinboundstoragetype.is_set;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcindex.yfilter)
	|| ydk::is_set(cpwvcmplsinboundindex.yfilter)
	|| ydk::is_set(cpwvcmplsinboundlsrxcindex.yfilter)
	|| ydk::is_set(cpwvcmplsinboundtunnelindex.yfilter)
	|| ydk::is_set(cpwvcmplsinboundtunnelinstance.yfilter)
	|| ydk::is_set(cpwvcmplsinboundtunnellcllsr.yfilter)
	|| ydk::is_set(cpwvcmplsinboundtunnelpeerlsr.yfilter)
	|| ydk::is_set(cpwvcmplsinboundifindex.yfilter)
	|| ydk::is_set(cpwvcmplsinboundrowstatus.yfilter)
	|| ydk::is_set(cpwvcmplsinboundstoragetype.yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsInboundTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsInboundEntry";
    ADD_KEY_TOKEN(cpwvcindex, "cpwVcIndex");
    ADD_KEY_TOKEN(cpwvcmplsinboundindex, "cpwVcMplsInboundIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcindex.is_set || is_set(cpwvcindex.yfilter)) leaf_name_data.push_back(cpwvcindex.get_name_leafdata());
    if (cpwvcmplsinboundindex.is_set || is_set(cpwvcmplsinboundindex.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundindex.get_name_leafdata());
    if (cpwvcmplsinboundlsrxcindex.is_set || is_set(cpwvcmplsinboundlsrxcindex.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundlsrxcindex.get_name_leafdata());
    if (cpwvcmplsinboundtunnelindex.is_set || is_set(cpwvcmplsinboundtunnelindex.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundtunnelindex.get_name_leafdata());
    if (cpwvcmplsinboundtunnelinstance.is_set || is_set(cpwvcmplsinboundtunnelinstance.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundtunnelinstance.get_name_leafdata());
    if (cpwvcmplsinboundtunnellcllsr.is_set || is_set(cpwvcmplsinboundtunnellcllsr.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundtunnellcllsr.get_name_leafdata());
    if (cpwvcmplsinboundtunnelpeerlsr.is_set || is_set(cpwvcmplsinboundtunnelpeerlsr.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundtunnelpeerlsr.get_name_leafdata());
    if (cpwvcmplsinboundifindex.is_set || is_set(cpwvcmplsinboundifindex.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundifindex.get_name_leafdata());
    if (cpwvcmplsinboundrowstatus.is_set || is_set(cpwvcmplsinboundrowstatus.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundrowstatus.get_name_leafdata());
    if (cpwvcmplsinboundstoragetype.is_set || is_set(cpwvcmplsinboundstoragetype.yfilter)) leaf_name_data.push_back(cpwvcmplsinboundstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex = value;
        cpwvcindex.value_namespace = name_space;
        cpwvcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundIndex")
    {
        cpwvcmplsinboundindex = value;
        cpwvcmplsinboundindex.value_namespace = name_space;
        cpwvcmplsinboundindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundLsrXcIndex")
    {
        cpwvcmplsinboundlsrxcindex = value;
        cpwvcmplsinboundlsrxcindex.value_namespace = name_space;
        cpwvcmplsinboundlsrxcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundTunnelIndex")
    {
        cpwvcmplsinboundtunnelindex = value;
        cpwvcmplsinboundtunnelindex.value_namespace = name_space;
        cpwvcmplsinboundtunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundTunnelInstance")
    {
        cpwvcmplsinboundtunnelinstance = value;
        cpwvcmplsinboundtunnelinstance.value_namespace = name_space;
        cpwvcmplsinboundtunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundTunnelLclLSR")
    {
        cpwvcmplsinboundtunnellcllsr = value;
        cpwvcmplsinboundtunnellcllsr.value_namespace = name_space;
        cpwvcmplsinboundtunnellcllsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundTunnelPeerLSR")
    {
        cpwvcmplsinboundtunnelpeerlsr = value;
        cpwvcmplsinboundtunnelpeerlsr.value_namespace = name_space;
        cpwvcmplsinboundtunnelpeerlsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundIfIndex")
    {
        cpwvcmplsinboundifindex = value;
        cpwvcmplsinboundifindex.value_namespace = name_space;
        cpwvcmplsinboundifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundRowStatus")
    {
        cpwvcmplsinboundrowstatus = value;
        cpwvcmplsinboundrowstatus.value_namespace = name_space;
        cpwvcmplsinboundrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsInboundStorageType")
    {
        cpwvcmplsinboundstoragetype = value;
        cpwvcmplsinboundstoragetype.value_namespace = name_space;
        cpwvcmplsinboundstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcIndex")
    {
        cpwvcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundIndex")
    {
        cpwvcmplsinboundindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundLsrXcIndex")
    {
        cpwvcmplsinboundlsrxcindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundTunnelIndex")
    {
        cpwvcmplsinboundtunnelindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundTunnelInstance")
    {
        cpwvcmplsinboundtunnelinstance.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundTunnelLclLSR")
    {
        cpwvcmplsinboundtunnellcllsr.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundTunnelPeerLSR")
    {
        cpwvcmplsinboundtunnelpeerlsr.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundIfIndex")
    {
        cpwvcmplsinboundifindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundRowStatus")
    {
        cpwvcmplsinboundrowstatus.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsInboundStorageType")
    {
        cpwvcmplsinboundstoragetype.yfilter = yfilter;
    }
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsInboundTable::CpwVcMplsInboundEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcIndex" || name == "cpwVcMplsInboundIndex" || name == "cpwVcMplsInboundLsrXcIndex" || name == "cpwVcMplsInboundTunnelIndex" || name == "cpwVcMplsInboundTunnelInstance" || name == "cpwVcMplsInboundTunnelLclLSR" || name == "cpwVcMplsInboundTunnelPeerLSR" || name == "cpwVcMplsInboundIfIndex" || name == "cpwVcMplsInboundRowStatus" || name == "cpwVcMplsInboundStorageType")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingTable()
    :
    cpwvcmplsnontemappingentry(this, {"cpwvcmplsnontemappingtunneldirection", "cpwvcmplsnontemappingxctunnelindex", "cpwvcmplsnontemappingifindex", "cpwvcmplsnontemappingvcindex"})
{

    yang_name = "cpwVcMplsNonTeMappingTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::~CpwVcMplsNonTeMappingTable()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcmplsnontemappingentry.len(); index++)
    {
        if(cpwvcmplsnontemappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplsnontemappingentry.len(); index++)
    {
        if(cpwvcmplsnontemappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsNonTeMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsNonTeMappingEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry>();
        ent_->parent = this;
        cpwvcmplsnontemappingentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcmplsnontemappingentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsNonTeMappingEntry")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::CpwVcMplsNonTeMappingEntry()
    :
    cpwvcmplsnontemappingtunneldirection{YType::enumeration, "cpwVcMplsNonTeMappingTunnelDirection"},
    cpwvcmplsnontemappingxctunnelindex{YType::uint32, "cpwVcMplsNonTeMappingXcTunnelIndex"},
    cpwvcmplsnontemappingifindex{YType::int32, "cpwVcMplsNonTeMappingIfIndex"},
    cpwvcmplsnontemappingvcindex{YType::uint32, "cpwVcMplsNonTeMappingVcIndex"}
{

    yang_name = "cpwVcMplsNonTeMappingEntry"; yang_parent_name = "cpwVcMplsNonTeMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::~CpwVcMplsNonTeMappingEntry()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcmplsnontemappingtunneldirection.is_set
	|| cpwvcmplsnontemappingxctunnelindex.is_set
	|| cpwvcmplsnontemappingifindex.is_set
	|| cpwvcmplsnontemappingvcindex.is_set;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcmplsnontemappingtunneldirection.yfilter)
	|| ydk::is_set(cpwvcmplsnontemappingxctunnelindex.yfilter)
	|| ydk::is_set(cpwvcmplsnontemappingifindex.yfilter)
	|| ydk::is_set(cpwvcmplsnontemappingvcindex.yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsNonTeMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsNonTeMappingEntry";
    ADD_KEY_TOKEN(cpwvcmplsnontemappingtunneldirection, "cpwVcMplsNonTeMappingTunnelDirection");
    ADD_KEY_TOKEN(cpwvcmplsnontemappingxctunnelindex, "cpwVcMplsNonTeMappingXcTunnelIndex");
    ADD_KEY_TOKEN(cpwvcmplsnontemappingifindex, "cpwVcMplsNonTeMappingIfIndex");
    ADD_KEY_TOKEN(cpwvcmplsnontemappingvcindex, "cpwVcMplsNonTeMappingVcIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcmplsnontemappingtunneldirection.is_set || is_set(cpwvcmplsnontemappingtunneldirection.yfilter)) leaf_name_data.push_back(cpwvcmplsnontemappingtunneldirection.get_name_leafdata());
    if (cpwvcmplsnontemappingxctunnelindex.is_set || is_set(cpwvcmplsnontemappingxctunnelindex.yfilter)) leaf_name_data.push_back(cpwvcmplsnontemappingxctunnelindex.get_name_leafdata());
    if (cpwvcmplsnontemappingifindex.is_set || is_set(cpwvcmplsnontemappingifindex.yfilter)) leaf_name_data.push_back(cpwvcmplsnontemappingifindex.get_name_leafdata());
    if (cpwvcmplsnontemappingvcindex.is_set || is_set(cpwvcmplsnontemappingvcindex.yfilter)) leaf_name_data.push_back(cpwvcmplsnontemappingvcindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcMplsNonTeMappingTunnelDirection")
    {
        cpwvcmplsnontemappingtunneldirection = value;
        cpwvcmplsnontemappingtunneldirection.value_namespace = name_space;
        cpwvcmplsnontemappingtunneldirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsNonTeMappingXcTunnelIndex")
    {
        cpwvcmplsnontemappingxctunnelindex = value;
        cpwvcmplsnontemappingxctunnelindex.value_namespace = name_space;
        cpwvcmplsnontemappingxctunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsNonTeMappingIfIndex")
    {
        cpwvcmplsnontemappingifindex = value;
        cpwvcmplsnontemappingifindex.value_namespace = name_space;
        cpwvcmplsnontemappingifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsNonTeMappingVcIndex")
    {
        cpwvcmplsnontemappingvcindex = value;
        cpwvcmplsnontemappingvcindex.value_namespace = name_space;
        cpwvcmplsnontemappingvcindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcMplsNonTeMappingTunnelDirection")
    {
        cpwvcmplsnontemappingtunneldirection.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsNonTeMappingXcTunnelIndex")
    {
        cpwvcmplsnontemappingxctunnelindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsNonTeMappingIfIndex")
    {
        cpwvcmplsnontemappingifindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsNonTeMappingVcIndex")
    {
        cpwvcmplsnontemappingvcindex.yfilter = yfilter;
    }
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsNonTeMappingTunnelDirection" || name == "cpwVcMplsNonTeMappingXcTunnelIndex" || name == "cpwVcMplsNonTeMappingIfIndex" || name == "cpwVcMplsNonTeMappingVcIndex")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingTable()
    :
    cpwvcmplstemappingentry(this, {"cpwvcmplstemappingtunneldirection", "cpwvcmplstemappingtunnelindex", "cpwvcmplstemappingtunnelinstance", "cpwvcmplstemappingtunnelpeerlsrid", "cpwvcmplstemappingtunnellocallsrid", "cpwvcmplstemappingvcindex"})
{

    yang_name = "cpwVcMplsTeMappingTable"; yang_parent_name = "CISCO-IETF-PW-MPLS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::~CpwVcMplsTeMappingTable()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpwvcmplstemappingentry.len(); index++)
    {
        if(cpwvcmplstemappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cpwvcmplstemappingentry.len(); index++)
    {
        if(cpwvcmplstemappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsTeMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpwVcMplsTeMappingEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry>();
        ent_->parent = this;
        cpwvcmplstemappingentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpwvcmplstemappingentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsTeMappingEntry")
        return true;
    return false;
}

CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::CpwVcMplsTeMappingEntry()
    :
    cpwvcmplstemappingtunneldirection{YType::enumeration, "cpwVcMplsTeMappingTunnelDirection"},
    cpwvcmplstemappingtunnelindex{YType::uint32, "cpwVcMplsTeMappingTunnelIndex"},
    cpwvcmplstemappingtunnelinstance{YType::uint32, "cpwVcMplsTeMappingTunnelInstance"},
    cpwvcmplstemappingtunnelpeerlsrid{YType::str, "cpwVcMplsTeMappingTunnelPeerLsrID"},
    cpwvcmplstemappingtunnellocallsrid{YType::str, "cpwVcMplsTeMappingTunnelLocalLsrID"},
    cpwvcmplstemappingvcindex{YType::uint32, "cpwVcMplsTeMappingVcIndex"}
{

    yang_name = "cpwVcMplsTeMappingEntry"; yang_parent_name = "cpwVcMplsTeMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::~CpwVcMplsTeMappingEntry()
{
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpwvcmplstemappingtunneldirection.is_set
	|| cpwvcmplstemappingtunnelindex.is_set
	|| cpwvcmplstemappingtunnelinstance.is_set
	|| cpwvcmplstemappingtunnelpeerlsrid.is_set
	|| cpwvcmplstemappingtunnellocallsrid.is_set
	|| cpwvcmplstemappingvcindex.is_set;
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpwvcmplstemappingtunneldirection.yfilter)
	|| ydk::is_set(cpwvcmplstemappingtunnelindex.yfilter)
	|| ydk::is_set(cpwvcmplstemappingtunnelinstance.yfilter)
	|| ydk::is_set(cpwvcmplstemappingtunnelpeerlsrid.yfilter)
	|| ydk::is_set(cpwvcmplstemappingtunnellocallsrid.yfilter)
	|| ydk::is_set(cpwvcmplstemappingvcindex.yfilter);
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-PW-MPLS-MIB:CISCO-IETF-PW-MPLS-MIB/cpwVcMplsTeMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpwVcMplsTeMappingEntry";
    ADD_KEY_TOKEN(cpwvcmplstemappingtunneldirection, "cpwVcMplsTeMappingTunnelDirection");
    ADD_KEY_TOKEN(cpwvcmplstemappingtunnelindex, "cpwVcMplsTeMappingTunnelIndex");
    ADD_KEY_TOKEN(cpwvcmplstemappingtunnelinstance, "cpwVcMplsTeMappingTunnelInstance");
    ADD_KEY_TOKEN(cpwvcmplstemappingtunnelpeerlsrid, "cpwVcMplsTeMappingTunnelPeerLsrID");
    ADD_KEY_TOKEN(cpwvcmplstemappingtunnellocallsrid, "cpwVcMplsTeMappingTunnelLocalLsrID");
    ADD_KEY_TOKEN(cpwvcmplstemappingvcindex, "cpwVcMplsTeMappingVcIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpwvcmplstemappingtunneldirection.is_set || is_set(cpwvcmplstemappingtunneldirection.yfilter)) leaf_name_data.push_back(cpwvcmplstemappingtunneldirection.get_name_leafdata());
    if (cpwvcmplstemappingtunnelindex.is_set || is_set(cpwvcmplstemappingtunnelindex.yfilter)) leaf_name_data.push_back(cpwvcmplstemappingtunnelindex.get_name_leafdata());
    if (cpwvcmplstemappingtunnelinstance.is_set || is_set(cpwvcmplstemappingtunnelinstance.yfilter)) leaf_name_data.push_back(cpwvcmplstemappingtunnelinstance.get_name_leafdata());
    if (cpwvcmplstemappingtunnelpeerlsrid.is_set || is_set(cpwvcmplstemappingtunnelpeerlsrid.yfilter)) leaf_name_data.push_back(cpwvcmplstemappingtunnelpeerlsrid.get_name_leafdata());
    if (cpwvcmplstemappingtunnellocallsrid.is_set || is_set(cpwvcmplstemappingtunnellocallsrid.yfilter)) leaf_name_data.push_back(cpwvcmplstemappingtunnellocallsrid.get_name_leafdata());
    if (cpwvcmplstemappingvcindex.is_set || is_set(cpwvcmplstemappingvcindex.yfilter)) leaf_name_data.push_back(cpwvcmplstemappingvcindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpwVcMplsTeMappingTunnelDirection")
    {
        cpwvcmplstemappingtunneldirection = value;
        cpwvcmplstemappingtunneldirection.value_namespace = name_space;
        cpwvcmplstemappingtunneldirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelIndex")
    {
        cpwvcmplstemappingtunnelindex = value;
        cpwvcmplstemappingtunnelindex.value_namespace = name_space;
        cpwvcmplstemappingtunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelInstance")
    {
        cpwvcmplstemappingtunnelinstance = value;
        cpwvcmplstemappingtunnelinstance.value_namespace = name_space;
        cpwvcmplstemappingtunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelPeerLsrID")
    {
        cpwvcmplstemappingtunnelpeerlsrid = value;
        cpwvcmplstemappingtunnelpeerlsrid.value_namespace = name_space;
        cpwvcmplstemappingtunnelpeerlsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelLocalLsrID")
    {
        cpwvcmplstemappingtunnellocallsrid = value;
        cpwvcmplstemappingtunnellocallsrid.value_namespace = name_space;
        cpwvcmplstemappingtunnellocallsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpwVcMplsTeMappingVcIndex")
    {
        cpwvcmplstemappingvcindex = value;
        cpwvcmplstemappingvcindex.value_namespace = name_space;
        cpwvcmplstemappingvcindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpwVcMplsTeMappingTunnelDirection")
    {
        cpwvcmplstemappingtunneldirection.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelIndex")
    {
        cpwvcmplstemappingtunnelindex.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelInstance")
    {
        cpwvcmplstemappingtunnelinstance.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelPeerLsrID")
    {
        cpwvcmplstemappingtunnelpeerlsrid.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsTeMappingTunnelLocalLsrID")
    {
        cpwvcmplstemappingtunnellocallsrid.yfilter = yfilter;
    }
    if(value_path == "cpwVcMplsTeMappingVcIndex")
    {
        cpwvcmplstemappingvcindex.yfilter = yfilter;
    }
}

bool CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpwVcMplsTeMappingTunnelDirection" || name == "cpwVcMplsTeMappingTunnelIndex" || name == "cpwVcMplsTeMappingTunnelInstance" || name == "cpwVcMplsTeMappingTunnelPeerLsrID" || name == "cpwVcMplsTeMappingTunnelLocalLsrID" || name == "cpwVcMplsTeMappingVcIndex")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::CpwVcMplsExpBitsMode::outerTunnel {1, "outerTunnel"};
const Enum::YLeaf CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::CpwVcMplsExpBitsMode::specifiedValue {2, "specifiedValue"};
const Enum::YLeaf CISCOIETFPWMPLSMIB::CpwVcMplsTable::CpwVcMplsEntry::CpwVcMplsExpBitsMode::serviceDependant {3, "serviceDependant"};

const Enum::YLeaf CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::CpwVcMplsNonTeMappingTunnelDirection::outbound {1, "outbound"};
const Enum::YLeaf CISCOIETFPWMPLSMIB::CpwVcMplsNonTeMappingTable::CpwVcMplsNonTeMappingEntry::CpwVcMplsNonTeMappingTunnelDirection::inbound {2, "inbound"};

const Enum::YLeaf CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::CpwVcMplsTeMappingTunnelDirection::outbound {1, "outbound"};
const Enum::YLeaf CISCOIETFPWMPLSMIB::CpwVcMplsTeMappingTable::CpwVcMplsTeMappingEntry::CpwVcMplsTeMappingTunnelDirection::inbound {2, "inbound"};


}
}

